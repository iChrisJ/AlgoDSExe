#pragma once

#include<iostream>

using namespace std;

template<typename T>
void BubbleSort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

template<typename T>
void BubbleSort_Optimized(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		bool isSorted = true;

		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				isSorted = false;
			}
		}

		if (isSort)
		{
			break;
		}
	}
}

template<typename T>
void BubbleSort_Recursive(T arr[], int n)
{

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);
	}

	if (n - 1 > 1) {
		BubbleSort_Recursive(arr, n - 1);
	}
}