#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define NN 1000000
using namespace std;

bool prime[1000000]={1,1,0};

int main(){

	for(int i = 2 ; i<(1000000/2) ; i++)
	{
	for(int j = i+i ; j<1000000 ; j+=i)
	{
		if(!prime[i])
		{
			prime[j]=1;
		}
	}
	}
	
	int n;
	while(cin>>n)
	{
		if(prime[n]){cout<<n<<" is not prime."<<endl;}
		else
		{
			int s = 0;
			int x = n;
			while(n)
			{
			s*=10;
			s+=n%10;
			n/=10;
			}
			if(prime[s]||s==x){cout<<x<<" is prime."<<endl;}
			else {cout<<x<<" is emirp."<<endl;}
		}
	}


system("pause");
return 0;
}
