#pragma once
#include "Insertion_Sort.h"


template<typename T>
void Insertion_Sort(T Array[], int Size)
{
	for (int i = 0; i < Size-1;i++)
	for (int j = i + 1;; j--)
	{
		if (Array[j] < Array[j - 1])
			swap(Array[j - 1], Array[j]);
		else
			break;
	}
}