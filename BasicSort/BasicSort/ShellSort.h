#pragma once

#include<iostream>

using namespace std;

template<typename T>
void ShellSort(T arr[], int n)
{
	// 设定一个增量将数组分组
	int h = 1;
	while (h < n / 3)
		h = 3 * h + 1;
	// 计算 increment sequence: 1, 4, 13, 40, 121, 364, 1093...

	while (h > 1)
	{
		// h-sort the array
		for (int i = h; i < n; i++)
		{
			// 对 arr[i], arr[i-h], arr[i-2*h], arr[i-3*h]... 使用插入排序
			T temp = arr[i];
			for (int j = i; j - h >= 0; j--)
			{
				if (temp < arr[j - h])
				{
					arr[j] = arr[j - h];
				}
				else
				{
					arr[j] = temp;
					break;
				}
			}
		}
		h /= 3;
	}
}
