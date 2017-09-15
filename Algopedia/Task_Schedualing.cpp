#include "Task_Schedualing.h"

int Task_Schedualing(pair<int, int>Tasks[], int Size)
{
	vector<pair<int, int> >Sorted_Tasks;
	int Last_Task, counter = 0;
	for (int i = 0; i < Size; i++)
		Sorted_Tasks.push_back({ Tasks[i].second, Tasks[i].first });
	sort(Sorted_Tasks.begin(), Sorted_Tasks.end());
	Last_Task = Sorted_Tasks[0].first, counter++;
	for (int i = 1; i < Size; i++)
	if (Sorted_Tasks[i].second >= Last_Task)
		counter++, Last_Task = Sorted_Tasks[i].first;
	return counter;
}