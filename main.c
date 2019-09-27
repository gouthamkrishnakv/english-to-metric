 /*******************************************************************************
 * 										*
 * 	english-to-metric - A tool to convert english units to metric ones	*
 *										*
 * 	Author: Goutham Krishna K V						*
 *										*
 * 	Purpose: To aid in conversion of english units to metric ones.		*
 * 										*
 * 	Usage: 	- Make the main file using 'make main'				*
 *		- Run the program using './main'				*
 *		- Type the commands in after '$' / Input prompt.		*
 *										*
 *	Copyright (c) 2019 Goutham Krishna K V (gauthamkrishna9991@live.com)	*
 *										*
 *	This project is protected under the MIT License. Fair use is allowed	*
 *	under the terms of the above. You should have also recieved a LICENCE	*
 *	file along with this project, else contact the Author for further	*
 *	details on the Licence.							*
 *										*
 *******************************************************************************/

// Define all the dependencies
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// Define all booleans we might use.
#define true (0==0)
#define false (!true)


// line for string input
char line[100];
// integer for context switch
int sw;
// the question value and the result value as floating-point numbers.
float question, answer;

// FUNCTIONS FOR CONVERSION
// Converts miles to kms
float milesToKM(float miles)
{
	return 0.631271 * miles;
}

float gallonToLitre(float gallons)
{
	return 3.785411 * gallons;
}

int main()
{
	printf("Enter Option :\n1, Miles to KM\n2.Gallons to Litre\n0.EXIT");
	printf("\n$ ");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d", &sw);
	switch(sw)
	{
		case 1:
			printf("Enter size in miles:");
			fgets(line,sizeof(line),stdin);
			sscanf(line,"%f",&question);
			answer = milesToKM(question);
			break;
		case 2:
			printf("Enter the volume in gallons :");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%f", &question);
			answer = gallonToLitre(question);
			break;
		case 0:
			printf("EXITING\n");
			return 0;
		default:
			answer = INT_MIN;
	}
	if(answer != INT_MIN)
	{
		printf("THE RESULT IS %f\n",answer);
	}
	else
	{
		printf("INVALID VALUE");
	}
}
