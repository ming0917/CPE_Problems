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
#include <fstream>

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define NN 1000000
using namespace std;

int N, M;

bool cmp(int x, int y)
{
	if (x%M != y % M) return (x % M < y % M);
	 
	if (x % 2 && y % 2)
	{
		return x > y;
	}
	if (y % 2 == 0 && x%2 == 0)
	{
		return y>x;
	}
	return (x % 2);
}

int main()
{
	
	fstream file;
	file.open("C:\\Users\\Sai\\Desktop\\CPE+ITSA\\Project1\\Reader.txt", ios::out);

	while (cin >> N >> M)
	{
		if (N == M && N == 0)
		{
			break;
		}
		file << N << " " << M << endl;
		vector<int>number;
		//vector<int>number(10005);(0~10004都是0)
		int num = 0;
		int n = N;
		while (N--)
		{
			cin >> num;
			number.push_back(num);
		}

		sort(number.begin(), number.end(), cmp);
		cout << n << " " << M << endl;
		for (int i = 0; i < number.size(); i++)
		{
			cout << number[i] << endl;
			file<< number[i] << endl;
		}
	}
	printf("0 0\n");
	file << "0 0" << endl;
	file.close();
	system("pause");
	return 0;
}