#pragma once
#include <vector>
#include <list>
#include <map>
#include <string.h>
#include <cstring>
#include <math.h>
#include <cmath>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <string.h>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unordered_map>
using namespace std;

#define ll  long long
#define ld long double
//#include "Task_Schedualing.h"
vector<ll> arr;

int main()
{
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	ll ans = 0;

	int i = 2;

	for (i = n - 1; i > 2; i -= 2)
		ans += (arr[i] + arr[0]) + min(2 * arr[1], arr[0] + arr[i - 1]);

	if (i == 2)
		ans += arr[i--] + arr[0];


	ans += arr[i];

	cout << ans << endl;

}