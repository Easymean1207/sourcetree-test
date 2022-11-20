/*
	File: Q1.c
	Author: leejimin(dlwlals1207@gachon.ac.kr)
	Date: 2022_09_17
	Recently update: 2022_09_17
	Course: Problem Solving Method

	Summary of File:
	This file contains code that calcuates quarters,dimes,nickels,pennies.
	This code use test datasets.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void change(double input, int *quarter, int *dimes, int *nickels, int *pennies)

	Summary of the change function:
		calcuates quarters, dimes, nickes, pennies

	Parameter:
		input:test_dataset(10.85,5.33,0.99)
		output:count of quarters,dimes,nickels,pennies

	Return Value:
		this function is void but can count of
		quarters,dimes,nickels,pennies with call by reference
		

*/
void change(double input, int *quarter, int *dimes, int *nickels, int *pennies);

int main()
{
	double testDataset[3] = { 10.85,5.33,0.99 };

	int quarter = 0, dimes = 0, nickels = 0, pennies = 0;

	for (int i = 0; i < 3; i++)
	{
		change(testDataset[i], &quarter, &dimes, &nickels, &pennies);

		printf("testDataset[%d]:%.2lf -> quarter:%d\tdimes:%d\t\tnickels:%d\tpennies:%d\n",i, testDataset[i], quarter, dimes, nickels, pennies);
	}

	return 0;
}

void change(double input, int *quarter, int *dimes, int *nickels, int *pennies)
{
	int temp = input * 100;
	
	//cut dollar part
	temp = temp % 100;

	//calculate quarter
	*quarter = temp / 25;
	temp = temp % 25;

	//calculate dimes
	*dimes = temp / 10;
	temp = temp % 10;

	//calculate nickels
	*nickels = temp / 5;
	temp = temp % 5;

	*pennies = temp;

}