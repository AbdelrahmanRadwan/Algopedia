#include "Task_Schedualing.h"

void Task_Schedualing_Tester()
{
	pair<int, int>arr[] = { { 1, 5 }, { 2, 4 }, { 3, 7 }, { 5, 8 }, { 6, 9 },
	{ 8, 20 }, { 10, 19 }, { 17, 25 }, { 20, 26 } };
	cout << Task_Schedualing(arr, sizeof(arr) / sizeof(pair<int, int>)) << endl;
}