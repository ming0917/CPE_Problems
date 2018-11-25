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

int main(){
	 unsigned long a = 0,b=0;

	while(scanf("%ld %ld",&a,&b)!=EOF)
	{
		unsigned long n=1,max=0,r=0,s=0,t=0;

		s=a;
		t=b;
	if(a>=b)
	{
	unsigned long temp = 0;
	temp = a ;
	a = b ;
	b = temp;
	}

	unsigned long x=a;

	for(unsigned long i=a;x<=b;x++,i=x)
	{
		n=1;

	while(i!=1)
	{
	if(i%2==0)
	{
	i = i/2;
	 n++;
	}
	else if(i%2!=0)
	{
	i = i*3 + 1;
	n++;
	}
	}

	r=n;

	if(r>max)
	{
	max = r;
	}
	}
	
	printf("%ld %ld %ld\n",s,t,max);
	
	}



system("pause");
return 0;
}
