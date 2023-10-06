#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;
#define pb push_back
string gcdStrings(string st1, string st2)
{
    // USING EUCLID'S ALGORITHM
    // if(st1 + st2 != st2 + st1) return "";
    // int len1 = st1.length(), len2 = st2.length();
    // while(len1 != len2)
    // {
    //     if(len1 > len2) len1 -= len2;
    //     else len2 -= len1;
    // }
    // return st1.substr(0, len1);

    // USING IN-BUILT FUNCTION
    if(st1 + st2 != st2 + st1) return "";
    int gcdd = __gcd(st1.length(), st2.length());
    return st1.substr(0, gcdd);
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << gcdStrings(str1, str2) << endl;
    return 0;
}