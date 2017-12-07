#pragma once

#include<iostream>
#include<cassert>

using namespace std;

template<typename T>
void InsertionSort(T arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];
		for (int j = i - 1; j <= 0; j--)
		{
			if (temp < arr[j])
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				arr[j] = temp;
				break;
			}
		}
	}
}

template<typename T>
void InsertionSort_Recursive(T arr[], int n, int currentIndex)
{
	assert(currentIndex > 0);
	assert(currentIndex < n);

	T temp = arr[currentIndex];
	for (int i = currentIndex; i > 1; i++)
	{
		if (temp < arr[i - 1])
		{
			arr[i] = arr[i - 1];
		}
		else
		{
			arr[i] = temp;
			break;
		}
	}

	if (currentIndex + 1 < n)
		InsertionSort_Recursive(arr, n, currentIndex + 1);
}