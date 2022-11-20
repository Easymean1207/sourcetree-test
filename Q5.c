/*
	File: Q5.c
	Author: leejimin(dlwlals1207@gachon.ac.kr)
	Date: 2022_09_17
	Recently update: 2022_09_17
	Course: Problem Solving Method

	Summary of File:
	This file contains code that show data in the show() fucntion.
	This code use test datasets.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void show(double input[])

	Summary of the show function:
		display array in the show() function.

	Parameter:
		input:double rates[9] = { 6.5,8.2,8.5,8.3,8.6,9.4,9.6,9.8,10.0 }
		output:display rates's elements.

	Return Value:
		void (only display rates's elements)

*/
void show(double input[]);

int main()
{
	double rates[9] = { 6.5,8.2,8.5,8.3,8.6,9.4,9.6,9.8,10.0 };

	show(rates);

	return 0;
}

void show(double input[])
{
	for (int i = 0; i < 9; i++)
	{
		printf("%dth's value:%.1lf\n",i+1,input[i]);
	}

}