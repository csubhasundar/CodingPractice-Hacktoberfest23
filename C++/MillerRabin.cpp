/*

 Miller Ranbin test Deterministic method for checking a prime number;
 Time Complexity : O(12*log(n));
 Its Implementation 

*/

#include<bits/stdc++.h>
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;

u64 bin_exp(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = bin_exp(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n) { 
    if (n < 4)
    	return n > 1;

    int r = 0; u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1,r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}
int main()
{
	u64 num;
	cout<<"Enter number to check:";
	cin>>num;
	assert(num>0);
	if(MillerRabin(num))
		cout<< num <<" is Prime Number\n";
	else 
		cout<< num <<" is not a Prime Number\n";
}