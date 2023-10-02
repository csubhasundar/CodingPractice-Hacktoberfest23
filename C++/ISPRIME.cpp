/*

    Simple algorthiam to check Primality of a 32 bit int
    Time complaxity : O(sqrt(n/3))
*/

#include <iostream>
#include <cassert>

using namespace std;
bool isPrime(int num)
{
	if(num < 4) return n>1;
	
	if(!(num&1)  or num%3==0 ) return false;

	for(int i=5;i*i<=num;i+=6) 
		if(num%i==0 or num%(i+2)==0) 
			return false;

	return true;
}

int main()
{
	int num;
	cout<<"Enter number to check:";
	cin>>num;
	assert(num>0);
	if(isPrime(num))
		cout<< num <<" is Prime Number\n";
	else 
		cout<< num <<" is not a Prime Number\n";
	

}