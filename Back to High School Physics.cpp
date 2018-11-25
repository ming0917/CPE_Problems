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


	int a = 0,b = 0,sum = 0;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d",&b);
		sum = a*b*2;
		printf("%d\n",sum);
	}

system("pause");
return 0;
}
