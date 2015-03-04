/** lab3_main.c: Implements a front end for lab3_lib.c.
*
*
* Name: Jason Ho
* Email: ho3@purdue.edu
* Course: CNIT 315
* Lab batch: 315-008
* Lab assignment: 3
* Date: 2/25/2015
*
* Collaborators:
* -Cyrus Suttaria
*/

#include <time.h> //for time()
#include <stdio.h>
#include "lab3_lib.h"

/**
 * Calls the functions implemented in lab3_lib.c and implements a menu system
 * for them.
 *
 * 	@return 	0 - Successful completion of the program.
 * 				1 - An error during execution.
 */


/*
	
*/

int main()
{
	/* Initialize */
	
	int num_choice;
	time_t start;
	time_t end;
	int elapsed;
	int arrayTen[10];
	int arrayFifty[50];
	int arrayHundred[100];
	int arrayFiveHundred[500];
	int arrayThousand[1000];
	int arrayFiveThousand[5000];
	int arrayTenThousand[10000];
	int arrayFifteenThousand[15000];
	int arrayTwentyThousand[20000];
	int sortedArrayTen[10];
	int sortedArrayFifty[50];
	int sortedArrayHundred[100];
	int sortedArrayFiveHundred[500];
	int sortedArrayThousand[1000];
	int sortedArrayFiveThousand[5000];
	int sortedArrayTenThousand[10000];
	int sortedArrayFifteenThousand[15000];
	int sortedArrayTwentyThousand[20000];
  double diffTen;
  double diffFifty;
  double diffHundred;
  double diffFiveHundred;
  double diffThousand;
  double diffFiveThousand;
  double diffTenThousand;
  double diffFifteenThousand;
  double diffTwentyThousand;
  int linearChoice;
  int location;
  int binaryChoice;


	srand(time(NULL));

	/* Menu */
	do
	{

	// -----------------------Prints the menu.-----------------------------------------
	
	printf("\n");
	printf("Welcome to the Lab 3 Sort and Search\n");
	printf("Please choose an option.\n");
	printf("1.) Bubble Sort\n");
	printf("2.) Selection Sort\n");
	printf("3.) Insertion Sort\n");
	printf("4.) Linear Sort\n");
	printf("5.) Binary Sort\n");
	printf("6.) Exit\n");
	
	scanf("%d", &num_choice);
	
	generate_random_int_array(arrayTen, 10);
	generate_random_int_array(arrayFifty, 50);
	generate_random_int_array(arrayHundred, 100);
	generate_random_int_array(arrayFiveHundred, 500);
	generate_random_int_array(arrayThousand, 1000);
	generate_random_int_array(arrayFiveThousand, 5000);
	generate_random_int_array(arrayTenThousand, 10000);
	generate_random_int_array(arrayFifteenThousand, 15000);
	generate_random_int_array(arrayTwentyThousand, 20000);		
	
	
	
		
	//------------case-switch to determine what program to run.-------------------------
	
		switch(num_choice)
		{
		case 1:
		
			//Bubble Sort 
			time(&start);				//Tracks Time
		  
		  bubble_sort( arrayTen, 10, sortedArrayTen);
		  //bubble_sort( arrayTen, 10, sortedArrayTen);
		  //bubble_sort( arrayTen, 10, sortedArrayTen);

		  time(&end);			//Ends Time
		  diffTen = difftime (end, start);//3;
		  
		  time(&start);
		  
		  bubble_sort( arrayFifty, 50, sortedArrayFifty);
		  //bubble_sort( arrayFifty, 50, sortedArrayFifty);
		  //bubble_sort( arrayFifty, 50, sortedArrayFifty);
		  		  
		  time(&end);
		  diffFifty = difftime (end, start);//3;		  
		  		  
		  time(&start);
		  		  
		  bubble_sort( arrayHundred, 100, sortedArrayHundred);
		  //bubble_sort( arrayHundred, 100, sortedArrayHundred);
		  //bubble_sort( arrayHundred, 100, sortedArrayHundred);
		  
		  time(&end);
		  diffHundred = difftime (end, start);//3;		  
		  
		  time(&start);
		  		  		  		  
		  bubble_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //bubble_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //bubble_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  
		  time(&end);
		  diffFiveHundred = difftime (end, start);//3;		  
		  		  		  
		  time(&start);
		  
		  bubble_sort( arrayThousand, 1000, sortedArrayThousand);
		  //bubble_sort( arrayThousand, 1000, sortedArrayThousand);
		  //bubble_sort( arrayThousand, 1000, sortedArrayThousand);		  
		  
		  time(&end);
		  diffThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  bubble_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //bubble_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //bubble_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  
		  time(&end);
		  diffFiveThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  bubble_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  //bubble_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  		  
		  //bubble_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  		  
		  time(&end);
		  diffTenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  bubble_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);	
		  //bubble_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  
		  //bubble_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  	  
		  
		  time(&end);
		  diffFifteenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  bubble_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
			//bubble_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);	
		  //bubble_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    	    
		  
		 	time(&end);
		  diffTwentyThousand = difftime (end, start);//3;

			//Prints the results of the Bubble Sort
		  
		  printf("The elapsed time for bubble sorting 10 is: %f seconds\n", diffTen);
		  printf("The elapsed time for bubble sorting 50 is: %f seconds\n", diffFifty);
		  printf("The elapsed time for bubble sorting 100 is: %f seconds\n", diffHundred);
		  printf("The elapsed time for bubble sorting 500 is: %f seconds\n", diffFiveHundred);
		  printf("The elapsed time for bubble sorting 1000 is: %f seconds\n", diffThousand);
		  printf("The elapsed time for bubble sorting 5000 is: %f seconds\n", diffFiveThousand);
		  printf("The elapsed time for bubble sorting 10000 is: %f seconds\n", diffTenThousand);
		  printf("The elapsed time for bubble sorting 15000 is: %f seconds\n", diffFifteenThousand);
		  printf("The elapsed time for bubble sorting 20000 is: %f seconds\n", diffTwentyThousand);
		  
		break;

		case 2:
		
			//Selection Sort

			time(&start);		//Starts Tracking Time
		  
		  selection_sort( arrayTen, 10, sortedArrayTen);
		  //selection_sort( arrayTen, 10, sortedArrayTen);
		  //selection_sort( arrayTen, 10, sortedArrayTen);
		  
		  time(&end);		//Ends the Time Tracking
		  diffTen = difftime (end, start);//3;   Takes the difference between start and end
		  
		  time(&start);
		  
		  selection_sort( arrayFifty, 50, sortedArrayFifty);
		  //selection_sort( arrayFifty, 50, sortedArrayFifty);
		  //selection_sort( arrayFifty, 50, sortedArrayFifty);
		  		  
		  time(&end);
		  diffFifty = difftime (end, start);//3;		  
		  		  
		  time(&start);
		  		  
		  selection_sort( arrayHundred, 100, sortedArrayHundred);
		  //selection_sort( arrayHundred, 100, sortedArrayHundred);
		  //selection_sort( arrayHundred, 100, sortedArrayHundred);
		  
		  time(&end);
		  diffHundred = difftime (end, start);//3;		  
		  
		  time(&start);
		  		  		  		  
		  selection_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //selection_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //selection_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  
		  time(&end);
		  diffFiveHundred = difftime (end, start);//3;		  
		  		  		  
		  time(&start);
		  
		  selection_sort( arrayThousand, 1000, sortedArrayThousand);
		  //selection_sort( arrayThousand, 1000, sortedArrayThousand);
		  //selection_sort( arrayThousand, 1000, sortedArrayThousand);
		  
		  time(&end);
		  diffThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  selection_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //selection_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //selection_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  
		  time(&end);
		  diffFiveThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  selection_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  //selection_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  		  
		  //selection_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  
		  time(&end);
		  diffTenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  selection_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  
		  //selection_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  		  
		  //selection_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  
		  		  
		  time(&end);
		  diffFifteenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  selection_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  //selection_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  //selection_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  
		 	time(&end);
		  diffTwentyThousand = difftime (end, start);//3;

			//Prints results of selection sorting
		  
		  printf("The elapsed time for selection sorting 10 is: %f seconds\n", diffTen);
		  printf("The elapsed time for selection sorting 50 is: %f seconds\n", diffFifty);
		  printf("The elapsed time for selection sorting 100 is: %f seconds\n", diffHundred);
		  printf("The elapsed time for selection sorting 500 is: %f seconds\n", diffFiveHundred);
		  printf("The elapsed time for selection sorting 1000 is: %f seconds\n", diffThousand);
		  printf("The elapsed time for selection sorting 5000 is: %f seconds\n", diffFiveThousand);
		  printf("The elapsed time for selection sorting 10000 is: %f seconds\n", diffTenThousand);
		  printf("The elapsed time for selection sorting 15000 is: %f seconds\n", diffFifteenThousand);
		  printf("The elapsed time for selection sorting 20000 is: %f seconds\n", diffTwentyThousand);
		  
		  break;
		  
		case 3:
		
			//Insertion sort

			time(&start);		//Starts Time tracking for array
		  
		  insertion_sort( arrayTen, 10, sortedArrayTen);
		  //insertion_sort( arrayTen, 10, sortedArrayTen);
		  //insertion_sort( arrayTen, 10, sortedArrayTen);
		  
		  time(&end);		//Ends Time Tracking for array
		  diffTen = difftime (end, start);//3; // Finds elapsed time 
		  
		  time(&start);
		  
		  insertion_sort( arrayFifty, 50, sortedArrayFifty);
		  //insertion_sort( arrayFifty, 50, sortedArrayFifty);
		  //insertion_sort( arrayFifty, 50, sortedArrayFifty);
		  		  
		  time(&end);
		  diffFifty = difftime (end, start);//3;		  
		  		  
		  time(&start);
		  		  
		  insertion_sort( arrayHundred, 100, sortedArrayHundred);
		  //insertion_sort( arrayHundred, 100, sortedArrayHundred);
		  //insertion_sort( arrayHundred, 100, sortedArrayHundred);
		  
		  time(&end);
		  diffHundred = difftime (end, start);//3;		  
		  
		  time(&start);
		  		  		  		  
		  insertion_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //insertion_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  //insertion_sort( arrayFiveHundred, 500, sortedArrayFiveHundred);		  
		  
		  time(&end);
		  diffFiveHundred = difftime (end, start);//3;		  
		  		  		  
		  time(&start);
		  
		  insertion_sort( arrayThousand, 1000, sortedArrayThousand);
		  //insertion_sort( arrayThousand, 1000, sortedArrayThousand);
		  //insertion_sort( arrayThousand, 1000, sortedArrayThousand);
		  
		  time(&end);
		  diffThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  insertion_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //insertion_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  //insertion_sort( arrayFiveThousand, 5000, sortedArrayFiveThousand);		  		  
		  
		  time(&end);
		  diffFiveThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  insertion_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  //insertion_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  		  
		  //insertion_sort( arrayTenThousand, 10000, sortedArrayTenThousand);		  
		  
		  time(&end);
		  diffTenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  insertion_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  
		  //insertion_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  		  
		  //insertion_sort( arrayFifteenThousand, 15000, sortedArrayFifteenThousand);		  
		  		  
		  time(&end);
		  diffFifteenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  insertion_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  //insertion_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  //insertion_sort( arrayTwentyThousand, 20000, sortedArrayTwentyThousand);		    
		  
		 	time(&end);
		  diffTwentyThousand = difftime (end, start);//3;
		  
			//Prints results of insertion sort
		  printf("The elapsed time for insertion sorting 10 is: %f seconds\n", diffTen);
		  printf("The elapsed time for insertion sorting 50 is: %f seconds\n", diffFifty);
		  printf("The elapsed time for insertion sorting 100 is: %f seconds\n", diffHundred);
		  printf("The elapsed time for insertion sorting 500 is: %f seconds\n", diffFiveHundred);
		  printf("The elapsed time for insertion sorting 1000 is: %f seconds\n", diffThousand);
		  printf("The elapsed time for insertion sorting 5000 is: %f seconds\n", diffFiveThousand);
		  printf("The elapsed time for insertion sorting 10000 is: %f seconds\n", diffTenThousand);
		  printf("The elapsed time for insertion sorting 15000 is: %f seconds\n", diffFifteenThousand);
		  printf("The elapsed time for insertion sorting 20000 is: %f seconds\n", diffTwentyThousand);
		  
		break;	
		
		case 4:
		
		//Linear Search
		printf("Please choose a number to search for through linear searching:");
		scanf("%d",&linearChoice);
		
		time(&start);		//Starts the time tracking for running linear search for this array
		  
		  linear_search( arrayTen, 10, linearChoice, &location);
		  //linear_search( arrayTen, 10, linearChoice, &location);
		  //linear_search( arrayTen, 10, linearChoice, &location);
		  
		  time(&end);		//Ends the time tracked for running linear search for this array
		  diffTen = difftime (end, start);//3;   Finds the elapsed time for linear search
		  
		  time(&start);
		  
		  linear_search( arrayFifty, 50, linearChoice, &location);
		  //linear_search( arrayFifty, 50, linearChoice, &location);
		  //linear_search( arrayFifty, 50, linearChoice, &location);
		  		  
		  time(&end);
		  diffFifty = difftime (end, start);//3;		  
		  		  
		  time(&start);
		  		  
		  linear_search( arrayHundred, 100, linearChoice, &location);
		  //linear_search( arrayHundred, 100, linearChoice, &location);
		  //linear_search( arrayHundred, 100, linearChoice, &location);
		  
		  time(&end);
		  diffHundred = difftime (end, start);//3;		  
		  
		  time(&start);
		  		  		  		  
		  linear_search( arrayFiveHundred, 500, linearChoice, &location);		  
		  //linear_search( arrayFiveHundred, 500, linearChoice, &location);		  
		  //linear_search( arrayFiveHundred, 500, linearChoice, &location);		  
		  
		  time(&end);
		  diffFiveHundred = difftime (end, start);//3;		  
		  		  		  
		  time(&start);
		  
		  linear_search( arrayThousand, 1000, linearChoice, &location);
		  //linear_search( arrayThousand, 1000, linearChoice, &location);
		  //linear_search( arrayThousand, 1000, linearChoice, &location);
		  
		  time(&end);
		  diffThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  linear_search( arrayFiveThousand, 5000, linearChoice, &location);		  		  
		  //linear_search( arrayFiveThousand, 5000, linearChoice, &location);		  		  
		  //linear_search( arrayFiveThousand, 5000, linearChoice, &location);		  		  
		  
		  time(&end);
		  diffFiveThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  linear_search( arrayTenThousand, 10000, linearChoice, &location);		  
		  //linear_search( arrayTenThousand, 10000, linearChoice, &location);		  		  
		  //linear_search( arrayTenThousand, 10000, linearChoice, &location);		  
		  
		  time(&end);
		  diffTenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  linear_search( arrayFifteenThousand, 15000, linearChoice, &location);		  
		  //linear_search( arrayFifteenThousand, 15000, linearChoice, &location);		  		  
		  //linear_search( arrayFifteenThousand, 15000, linearChoice, &location);		  
		  		  
		  time(&end);
		  diffFifteenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  linear_search( arrayTwentyThousand, 20000, linearChoice, &location);		    
		  //linear_search( arrayTwentyThousand, 20000, linearChoice, &location);		    
		  //linear_search( arrayTwentyThousand, 20000, linearChoice, &location);		    
		  
		 	time(&end);
		  diffTwentyThousand = difftime (end, start);//3;

			//Prints the results of Linear search for each array
		  
		  printf("The elapsed time for linear searching 10 is: %f seconds\n", diffTen);
		  printf("The elapsed time for linear searching 50 is: %f seconds\n", diffFifty);
		  printf("The elapsed time for linear searching 100 is: %f seconds\n", diffHundred);
		  printf("The elapsed time for linear searching 500 is: %f seconds\n", diffFiveHundred);
		  printf("The elapsed time for linear searching 1000 is: %f seconds\n", diffThousand);
		  printf("The elapsed time for linear searching 5000 is: %f seconds\n", diffFiveThousand);
		  printf("The elapsed time for linear searching 10000 is: %f seconds\n", diffTenThousand);
		  printf("The elapsed time for linear searching 15000 is: %f seconds\n", diffFifteenThousand);
		  printf("The elapsed time for linear searching 20000 is: %f seconds\n", diffTwentyThousand);
		  
		break;
	  
	  case 5:

		//Binary Search
		printf("Please choose a number to search for through binary searching:");
		scanf("%d",&binaryChoice);
		
		time(&start);		//Starts tracking time for binary search for this array
		  
		  binary_search( arrayTen, 10, binaryChoice, &location);
		  //binary_search( arrayTen, 10, binaryChoice, &location);
		  //binary_search( arrayTen, 10, binaryChoice, &location);
		  
		  time(&end);		//Ends Tracking time for binary search for this array
		  diffTen = difftime (end, start);//3;		Finds the elapsed Time
		  
		  time(&start);
		  
		  binary_search( arrayFifty, 50, binaryChoice, &location);
		  //binary_search( arrayFifty, 50, binaryChoice, &location);
		  //binary_search( arrayFifty, 50, binaryChoice, &location);
		  		  
		  time(&end);
		  diffFifty = difftime (end, start);//3;		  
		  		  
		  time(&start);
		  		  
		  binary_search( arrayHundred, 100, binaryChoice, &location);
		  //binary_search( arrayHundred, 100, binaryChoice, &location);
		  //binary_search( arrayHundred, 100, binaryChoice, &location);
		  
		  time(&end);
		  diffHundred = difftime (end, start);//3;		  
		  
		  time(&start);
		  		  		  		  
		  binary_search( arrayFiveHundred, 500, binaryChoice, &location);		  
		  //binary_search( arrayFiveHundred, 500, binaryChoice, &location);		  
		  //binary_search( arrayFiveHundred, 500, binaryChoice, &location);		  
		  
		  time(&end);
		  diffFiveHundred = difftime (end, start);//3;		  
		  		  		  
		  time(&start);
		  
		  binary_search( arrayThousand, 1000, binaryChoice, &location);
		  //binary_search( arrayThousand, 1000, binaryChoice, &location);
		  //binary_search( arrayThousand, 1000, binaryChoice, &location);
		  
		  time(&end);
		  diffThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  binary_search( arrayFiveThousand, 5000, binaryChoice, &location);		  		  
		  //binary_search( arrayFiveThousand, 5000, binaryChoice, &location);		  		  
		  //binary_search( arrayFiveThousand, 5000, binaryChoice, &location);		  		  
		  
		  time(&end);
		  diffFiveThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  binary_search( arrayTenThousand, 10000, binaryChoice, &location);		  
		  //binary_search( arrayTenThousand, 10000, binaryChoice, &location);		  		  
		  //binary_search( arrayTenThousand, 10000, binaryChoice, &location);		  
		  
		  time(&end);
		  diffTenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  binary_search( arrayFifteenThousand, 15000, binaryChoice, &location);		  
		  //binary_search( arrayFifteenThousand, 15000, binaryChoice, &location);		  		  
		  //binary_search( arrayFifteenThousand, 15000, binaryChoice, &location);		  
		  		  
		  time(&end);
		  diffFifteenThousand = difftime (end, start);//3;		  
		  
		  time(&start);
		  
		  binary_search( arrayTwentyThousand, 20000, binaryChoice, &location);		    
		  //binary_search( arrayTwentyThousand, 20000, binaryChoice, &location);		    
		  //binary_search( arrayTwentyThousand, 20000, binaryChoice, &location);		    
		  
		 	time(&end);
		  diffTwentyThousand = difftime (end, start);//3;

			//Prints the results of elapsed time for Binary searched arrays
		  
		  printf("The elapsed time for binary searching 10 is: %f seconds\n", diffTen);
		  printf("The elapsed time for binary searching 50 is: %f seconds\n", diffFifty);
		  printf("The elapsed time for binary searching 100 is: %f seconds\n", diffHundred);
		  printf("The elapsed time for binary searching 500 is: %f seconds\n", diffFiveHundred);
		  printf("The elapsed time for binary searching 1000 is: %f seconds\n", diffThousand);
		  printf("The elapsed time for binary searching 5000 is: %f seconds\n", diffFiveThousand);
		  printf("The elapsed time for binary searching 10000 is: %f seconds\n", diffTenThousand);
		  printf("The elapsed time for binary searching 15000 is: %f seconds\n", diffFifteenThousand);
		  printf("The elapsed time for binary searching 20000 is: %f seconds\n", diffTwentyThousand);
		
		 	break; 
	  	
  	case 6:
  	
  	//Exit 
  	
  		return 0;
  	
  	break;
		  
		}
	
	}
	while( 1 == 1);


	//Your code goes here!


	/* Wrap up */

	return 0;
}
