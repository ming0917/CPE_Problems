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
	
	long long int b = 0,a=0;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
	if(a>b)
	printf("%lld\n",a-b);
	else
	printf("%lld\n",b-a);	
	}
system("pause");
return 0;
}

