/*
	File: Q2.c
	Author: leejimin(dlwlals1207@gachon.ac.kr)
	Date: 2022_09_17
	Recently update: 2022_09_17
	Course: Problem Solving Method

	Summary of File:
	This file contains code that calculate seconds.
	This code use test datasets.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	int secs(int hours, int minutes, int seconds)

	Summary of the secs function:
		calcuates seconds

	Parameter:
		input:int testDataset[3][3] = { {2,30,25},{1,1,10},{99,99,0} }
		output:int totalSeconds

	Return Value:
		totalSeconds (call by value)

*/
int secs(int hours, int minutes, int seconds);

int main()
{
	int testDataset[3][3] = { {2,30,25},{1,1,10},{99,99,0} };
	int totalSeconds = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{

			totalSeconds = secs(testDataset[i][j], testDataset[i][j+1], testDataset[i][j+2]);

		}
		printf("%dth testDataset:%d seconds\n", i + 1, totalSeconds);
	}

	return 0;
}

int secs(int hours, int minutes, int seconds)
{
	int totalSeconds = 0;

	totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

	return totalSeconds;
}