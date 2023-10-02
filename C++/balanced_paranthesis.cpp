#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
unordered_map<char,int> symbol {{'{',1},{'(',2},{'[',3},{'}',-1},{')',-2},{']',-3}};
string check_balanced_paranthesis(string test){
    stack<char> st;
    for(char bracket:test){
        if(symbol[bracket] > 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
            char c = st.top();
            st.pop();
            if(symbol[bracket] + symbol[c] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main(){
    string test_string,result;
    cout << "Enter the paranthesis string: ";
    cin >> test_string;
    result = check_balanced_paranthesis(test_string);
    cout << "The result is: " << result << endl;
    return 0;
}