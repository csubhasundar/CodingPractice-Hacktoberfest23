//DISJOINT SET UNION - IMPLEMENTATION

/*
    Functionalities included:
    1. Find Ultimate Parent of a node 
    2. Union By Rank
    3. Union By Size
    4. Find whether two elements are part of same component or not
    5. Print all the ultimate parents for all the nodes in the DSU
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DSU{
private:
    vector<int> rank;
    vector<int> size;
    vector<int> parent;

public:
    DSU(int n){
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }

    int findUltimateParent(int node){
        if (node == parent[node]) return node;
        int ultimateParent = findUltimateParent(parent[node]);
        parent[node] = ultimateParent;   //Path Compression
        return ultimateParent;
    }

    void unionByRank(int u, int v){
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
        else if (rank[ulp_u] > rank[ulp_v]) parent[ulp_v] = ulp_u;
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v){
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }

    bool inSameComponent(int u, int v){
        return findUltimateParent(u) == findUltimateParent(v);
    }

    void printUltimateParents(){
        for (int i : parent) cout << i << " ";
        cout << "\n";
    }
};

int main(){
    DSU ds(5);
    ds.unionBySize(1, 2);
    ds.unionBySize(3, 2);
    ds.unionBySize(4, 2);
    ds.unionBySize(5, 3);
    ds.unionBySize(1, 4);
    if (ds.inSameComponent(1, 4)) cout << "YES, these two are in the same component" << endl;
    else cout << "NO" << endl;
    cout << "Parents of all nodes in the DSU -> ";
    ds.printUltimateParents();
}