#pragma once
#include "All.h"
void Insertion_Sort_Tester()
{
	int arr[] = { -1001, -50, 12, 3, 1000, -100 };
	cout << "\nInsertion Sort is called using:\narr[]= ";
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << arr[i] << " ";
	cout << "\nSize= " << sizeof(arr) / sizeof(int)<<"\n";
	cout << "Processing...\n";
	Insertion_Sort(arr, sizeof(arr) / sizeof(int));
	cout << "Resultant array arr[]= ";
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << arr[i] << " ";
	cout << endl;
}