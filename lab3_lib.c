/** lab3_lib.c: implements sorting and searching functions.
*
*
* Name:
* Email:
* Course: CNIT 315
* Lab batch:
* Lab assignment: 3
* Date:
*
* Collaborators:
*
*/

#include <stdio.h>
#include <string.h> //for memcpy

#include "lab3_lib.h"

/*
 * Pro-tip: use this function to copy arrays.
 */
void deep_copy_array(int* array_from, int* array_to, int array_length){
	//Read more about memcpy over here: http://www.cplusplus.com/reference/cstring/memcpy/
	memcpy(array_to, array_from, array_length*sizeof(int));
}

/*
 * Pro-tip:use this function to generate random arrays.
 */
int generate_random_int_array(int* array, int array_length){
	/* Initialize */
	int i;
	/* Validate input */
	if(!array){
		printf("Error: Input array was NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: required array size < 1\n");
		return 1;
	}
	/* Generate random values */
	for (i = 0; i < array_length; i++) {
		array[i] = rand()%100;
	}
	return 0;
}


int bubble_sort(int* array_unsorted, int array_length, int* array_sorted){
	/* Initialize */

	//Put your variable declarations here.
	int temp;
	int i;
	int j;
	/* Validate input */
	if(!array_unsorted){
		printf("Error: Unsorted array was NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: unsorted array size < 1\n");
		return 1;
	}
	if(array_sorted == NULL){
		printf("Error: sorted array is NULL\n");
		return 1;
	}
	/* Sort array */
	
	//I can has code?
	deep_copy_array( array_unsorted, array_sorted, array_length);
	
	for (i = 0; i < (array_length - 1); i++)
	{
	
		for(j = 1; j < array_length; j++)
		{
		
			if ( array_sorted[j] < array_sorted[j-1] )
			{
			
			temp = array_sorted[j];
			array_sorted[j] = array_sorted[j-1];
			array_sorted[j-1] = temp;
			
			}
			
		
		}
	
	}

	return 0; //Change me!
}


int selection_sort(int* array_unsorted, int array_length, int* array_sorted){
	/* Initialize */
	int i;
	int j;
	int min;
	int minidx;
	int temp;
	//Put your variable declarations here.

	/* Validate input */
	if(!array_unsorted){
		printf("Error: Unsorted array was NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: unsorted array size < 1\n");
		return 1;
	}
	if(array_sorted == NULL){
		printf("Error: sorted array is NULL\n");
		return 1;
	}
	/* Sort array */

	deep_copy_array( array_unsorted, array_sorted, array_length);
	
	for( i = 0; i < (array_length - 1); i++)
	{
	
		min = array_sorted[i];
		minidx = i;
		
		for(j = i + 1; j < array_length; j++)
		{
		
			if(array_sorted[j] < min)
			{
			
			min = array_sorted[j];
			minidx = j;

			}
		
		}
		
		if(min < array_sorted[i])
		{
		
			temp = array_sorted[i];
			array_sorted[i] = min;
			array_sorted[minidx] = temp; 
		
		}
	
	}
	
	//Let the code-pocalypse begin!

	return 0; //Change me!
}

int insertion_sort(int* array_unsorted, int array_length, int* array_sorted){
	/* Initialize */
	
	//Put your variable declarations here.
	int temp;
	int i;
	int j;

	/* Validate input */
	if(!array_unsorted){
		printf("Error: Unsorted array was NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: unsorted array size < 1\n");
		return 1;
	}
	if(array_sorted == NULL){
		printf("Error: sorted array is NULL\n");
		return 1;
	}
	/* Sort array */

	//Round 4: CODE!
	
	deep_copy_array( array_unsorted, array_sorted, array_length);
	
	for (i = 1; i < array_length; i++) 
	{
        temp = array_sorted[i];
        for (j = i; j > 0 && temp < array_sorted[j - 1]; j--) {
            array_sorted[j] = array_sorted[j - 1];
        }
        array_sorted[j] = temp;
  }

	return 0; //Change me!
}

int linear_search(int* array, int array_length, int value, int* location){
	/* Initialize */
	//Put your variable declarations here.

	int found;
	int i;
	found = 0;
	i = 0;

	/* Validate input */
	if(!array){
		printf("Error: array pointer is NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: array size < 1\n");
		return 1;
	}
	if(!location){
		printf("Error: location variable is NULL\n");
		return 1;
	}
	/* Search array */
	//All of your code-base are belong to us.

	while (i < array_length && found == 0)
	{
	
	if(array[i] == value)
	{
	
		found = 1;
		*location = i;
	
	}
	
	i++;
	
	}

	return 0; //Change me!
}

/*
 * You will have to implement this entire function! Remember to check for
 * input errors like the other functions.
 */
int binary_search(int* array, int array_length, int value, int* location){

	//Initialize
	int found;
	int left;
	int right;
	int midpt;
	
	left = 0;
	right = array_length - 1;
	found = 0;
	

	/* Validate input */
	if(!array){
		printf("Error: array pointer is NULL\n");
		return 1;
	}
	if(array_length < 1){
		printf("Error: array size < 1\n");
		return 1;
	}
	if(!location){
		printf("Error: location variable is NULL\n");
		return 1;
	}
	//Code here
	
	while(left <= right && found == 0)
	{
	
		midpt = (int) ((left + right) / 2);
		if (value == array[midpt])
		{
		
			found = 1;
			*location = midpt;
		
		}
		else if(value > array[midpt])
		{
		
			left = midpt + 1;
		
		}
		else
		{
		
			right = midpt - 1;
		
		}
	
	}
	
	
	//The cake is a lie.

	return 0;
}
