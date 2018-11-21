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

int main()
{
	int r;
	cin >> r;
	while (r--)
	{
		int c;
		cin >> c;

		int room[30000];
		for (int i = 0; i<c; i++)
		{
			cin >> room[i];
		}
		sort(room, room + c);
		int mid;

		if (c % 2 == 1) { mid = room[c / 2]; }
		else { mid = (room[c / 2] + room[(c - 1) / 2]) / 2; }
		int sum = 0;
		for (int i = 0; i<c; i++)
		{
			sum += abs(mid - room[i]);
		}
		cout << sum << endl;
	}

	system("pause");
	return 0;
}