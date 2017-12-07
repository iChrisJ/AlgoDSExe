#pragma once

#include <iostream>

using namespace std;

template<typename T>
void SelectionSort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		for (int j = i; j < n; j++)
		{
			if (arr[minIndex] > arr[j])
				minIndex = j;
		}
		swap(arr[minIndex], arr[i]);
	}
}


template<typename T>
void SelectionSort_Recursive(T arr[], int startIndex, int n)
{
	int minIndex = startIndex;
	for (int i = startIndex; i < n; i++)
	{
		if (arr[minIndex] > arr[i])
		{
			minIndex = i;
		}
	}

	swap(arr[minIndex], arr[startIndex]);

	if (startIndex + 1 < n)
		SelectionSort_Recursive(arr, startIndex + 1, n);
}