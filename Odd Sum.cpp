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
	int a =0,x=1;
	while(scanf("%d",&a)!=EOF)
	{
	for(int i = 0;i<a;i++)	
	{
	int num1,num2,sum=0;
	scanf("%d %d",&num1,&num2);
	for(num1;num1<=num2;num1++)
	{
	if(num1%2==1)
	{
	sum+=num1;
	}
	}
	printf("Case %d: %d\n",x,sum);
	x++;
	}

	}


system("pause");
return 0;
}

