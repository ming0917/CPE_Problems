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

long long f(long long x)
{
	if(x<10) {return x;}
	else 
	{
	long long e = 0;
	while(x)
	{
	e+=x%10;
	x/=10;
	}
	return f(e);
	}
}


int main(){
	long long c ;
	while(cin>>c)
	{
	if(c==0) break;
	else cout<<f(c)<<endl;
	}


system("pause");
return 0;
}
