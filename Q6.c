/*
	File: Q5.c
	Author: leejimin(dlwlals1207@gachon.ac.kr)
	Date: 2022_09_17
	Recently update: 2022_09_17
	Course: Problem Solving Method

	Summary of File:
	This file contains code calculate the elements in the amount 
	as the product of the equivalent elements in the price and quantity arrays.
	ex) amount[1] = price[1] * quantity[1]
	This code use test datasets.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void extend(double *price, double *quantity, double *amount)

	Summary of the extend function:
		return product of the equivalent elements

	Parameter:
		input: double *price, double *quantity
		output:product of the equivalent elements (double *amount)

	Return Value:
		double *amount

*/
void extend(double *price, double *quantity, double *amount);

int main()
{
	double price[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.27, 6.58, 18.32, 12.15, 3.98};
	double quantity[10] = {4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
	double amount[10] = {0};
	
	extend(price, quantity, amount);
	
	for (int i = 0; i < 10; i++)
	{
		printf("amount[%d]:%.3lf\n",i+1, amount[i]);
	}

	return 0;
}


void extend(double *price, double *quantity, double *amount)
{
	for (int i = 0; i < 10; i++)
	{
		amount[i] = price[i] * quantity[i];
	}

}