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

	int a = 0,b = 0,n=0,c=0,temp=0,ac=0;
	while(scanf("%d",&a)!=EOF)
	{
	for(b=0;b<a;b++)
	{
	scanf("%d",&n);
	int arr[200]={0};
	for(c=0;c<n;c++)
	{
	scanf("%d",&arr[c]);
	}

	for(int i = 1 ;i<n;i++)
	{
	for(int a = 0 ;a<n-1;a++)
	{
	if(arr[a]>arr[a+1])
	{
	temp = arr[a];
	arr[a] = arr[a+1];
	arr[a+1] =temp;
	ac++;
	}
	}
	}
	printf("Optimal train swapping takes %d swaps.\n",ac);
	ac=0;
	}
	}
system("pause");
return 0;
}
