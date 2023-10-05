// HAR HAR MAHADEV		
#include<bits/stdc++.h>
using namespace std;

#define ll                long long
#define ld                long double
#define vi                vector<ll>
#define show(v)           for(auto x:v)cout<<x<<" ";cout<<endl;
#define r(i,n)            for(ll i=0;i<n;i++)
#define all(x)            (x).begin(),(x).end()

vector<vi>v;
vector<bool>vis;

dfs(ll node,vi &topo_logical_order,ll parent=-1){
	vis[node]=true;
	for(ll child:v[node]){
		if(child!=parent && !vis[child])dfs(child,topo_logical_order,node);
	}
	topo_logical_order.push_back(node);
}

// Topological sort is meant for DAG(Directed Acyclic graph) only 
int main()
{
	ll n,q;
	cin>>n>>q;
	v.resize(n+1);
	vis.resize(n+1,false);
	r(i,q){
		ll x,y;
		cin>>x>>y;
		v[x].push_back(y);//Directed Acyclic graph
	}
	vi topo_logical_order;
	dfs(1,topo_logical_order);
	reverse(all(topo_logical_order));
	show(topo_logical_order);
} 

