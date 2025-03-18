
#include "Questions.h"

int Q1_for(int num){
	int sum = 0; 
	int i = 0;
	
	// calculate your sum below..this has to use for loop
	for(i = num; i <= 1000; i += num){
		sum += i;
	}
	// here, we return the calcualted sum:
	return sum; 
}
int Q1_while(int num){
	int sum = 0;
	int i = 0;

	// calculate your sum below..this has to use while loop
	while(i <= 1000){
		sum += i;
		i += num;
	}

	// here, we return the calcualted sum:
	return sum;
}
int Q1_dowhile(int num){
	int sum = 0; 
	int i = 0;
	
	// calculate your sum below..this has to use do-while loop
	do {
		sum += i;
		i += num;
	}
	while(i <= 1000);
	  
	
	// here, we return the calcualted sum:
	return sum; 
}
//===============================================================================================
int Q2_FPN(float Q2_input, float Q2_threshold){
	
	int result;
	// Determine which range does Q2_input fall into.  Keep in mind the floating point number range.
	// Assign the correct output to the result.
	if(Q2_input >= -2 * Q2_threshold && Q2_input < -1 * Q2_threshold)
		return 0;
	
	else if(Q2_input >= -1 * Q2_threshold && Q2_input < 0)
		return 1;
	
	else if(Q2_input >= 0 && Q2_input < 1 * Q2_threshold)
		return 2;

	else if(Q2_input >= 1 * Q2_threshold && Q2_input <= 2 * Q2_threshold)
		return 3;

	else
		return -999;            
	// Finally, return the result.
	return result;
}
//===============================================================================================
int Q3(int Q3_input, int perfect[]){
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	int counts = 0;
	int i = 0;
	int sum = 0; 
	int num = 0;

		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	for(num = 1; num <= Q3_input; num++){
		sum = 0;
		for(i = 1; i <= (num/2); i++){
			if(num % i == 0){
				sum += i;
			}
		}

		if(sum == num){
		perfect[counts] = num;
		counts++; 
		}	
	
	}   
	return counts;
}
//===============================================================================================
int Q4_Bubble(int array[], int size){
	
	// This variable tracks the number of passes done on the array to sort the array.
	int passes = 0;
	int swap = 0;
	int i = 0;
	int temp;
	
	// Pseudocode
	// 	1. Given an array and its size, visit every single element in the array up to size-2 (i.e. up to the second last element, omit the last element)
	//  2. For every visited element (current element), check its subsequent element (next element).  
	//     If the next element is smaller, swap the current element and the next element. 
	//  3. Continue until reaching size-2 element.  This is considered One Pass => increment pass count by one.
	//  4. Repeat 1-3 until encountering a pass in which no swapping was done.
	//   -> Sorting Completed.

	do{
		swap = 0;
		passes++;

		for(i = 0; i < size - 1; i++){
			if(array[i] >= array[i + 1]){
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
			}
		}
	} while(swap);

	// Finally, return the number of passes used to complete the Bubble Sort
	return passes;	
}