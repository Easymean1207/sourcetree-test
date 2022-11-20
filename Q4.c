/*
	File: Q4.c
	Author: leejimin(dlwlals1207@gachon.ac.kr)
	Date: 2022_09_17
	Recently update: 2022_09_17
	Course: Problem Solving Method

	Summary of File:
	This file contains code that calculate gallons,quart,pints,cups.
	This code use test datasets.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void liquid(int totalNumberofCups, int *gallons, int *quarts, int *pints, int *cups)

	Summary of the liquid function:
		calcuates gallons,quarts,pints,cups

	Parameter:
		input:int testDataset[3] = { 0,10,100 }
		output:the number of gallons,quarts,pints,cups

	Return Value:
		this function is void but can calculate
		the number of gallons,quarts,pints,cups with call by reference.

	notice: if the rest is not zero, this code lift the rest.

*/
void liquid(int totalNumberofCups, int *gallons, int *quarts, int *pints, int *cups);

int main()
{
	int testDataset[3] = { 0,10,100 };

	int gallons = 0, quarts = 0, pints = 0, cups = 0;

	for (int i = 0; i < 3; i++)
	{
		liquid(testDataset[i], &gallons, &quarts, &pints, &cups);

		printf("testDataset[%d]:%d Cups ->\t%d Gallons / %d quarts / %d pints / %d cups\n"
		,i+1,testDataset[i], gallons, quarts, pints, cups);
	}


	return 0;
}
void liquid(int totalNumberofCups, int *gallons, int *quarts, int *pints, int *cups)
{
	//calculate gallons (divide by 16)
	if ((totalNumberofCups % 16 != 0))
		*gallons = (totalNumberofCups / 16) + 1;
	else
		*gallons = (totalNumberofCups / 16);

	//calculate quarts (divide by 4)
	if ((totalNumberofCups % 4 != 0))
		*quarts = (totalNumberofCups / 4) + 1;
	else
		*quarts = totalNumberofCups / 4;
	
	//calculate pints (divide by 2)
	if ((totalNumberofCups % 2 != 0))
		*pints = (totalNumberofCups / 2) + 1;
	else	
		*pints = totalNumberofCups / 2;

	//calculate cups
	*cups = totalNumberofCups;

}

