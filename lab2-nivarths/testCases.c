#include <stdlib.h>
#include <stdio.h>

#include "Questions.h"
    
int successCount;
int passCount;

int totalTestCases, totalAssertions;

int assert_equal_int(int, int);
int assert_equal_char(char, char);
int assert_equal_double(double, double, double);
void tearDown(int result);
    
    
//=========Question 1==================================
void TestQ1_add() {

    printf("\n=== TestQ1_add() ===\n");
	int result = 1; // true;
	
	int i;
	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double input2[5] = {1.50, 2.00, 3.30, 9.90, 1.00};
	double actual[5];
	double expected [5] = {5.10, 6.78, 9.30, 19.90, 1.01};

	add_vectors(input1,input2,actual,n);
	
	for (i=0; i<n; i++)
		result &= assert_equal_double(expected[i], actual[i],0.009);		

    tearDown(result);		
}
    
void TestQ1_scalar_prod() {

    printf("\n=== TestQ1_scalar_prod() ===\n");
	int result = 1; // true;

	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double input2[5] = {1.50, 2.00, 3.30, 9.90, 1.00};
	double expected=133.770 ;
	double actual = scalar_prod(input1,input2,n);

	result &= assert_equal_double(expected, actual,0.009);

	tearDown(result);
}

void TestQ1_norm() {

    printf("\n=== TestQ1_norm() ===\n");
	int result = 1; // true;

	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double expected=13.108 ;
    double actual = norm2(input1,n);

	result &= assert_equal_double(expected, actual,0.009);

	tearDown(result);
}

void TestQ1_add_Custom1() {

    printf("\n=== TestQ1_add_Custom1() ===\n");
	int result = 1;

	// Add one more test cases here
	int i;
	int n = 5;
	double input1[5] = {1.54, 5.34, 0.16, 30.21, 90.00};
	double input2[5] = {82.10, 0.24, 69.60, 33.11, 50.00};
	double actual[5];
	double expected [5] = {83.64, 5.58, 69.76, 63.32, 140.00};

	add_vectors(input1,input2,actual,n);
	
	for (i=0; i<n; i++)
		result &= assert_equal_double(expected[i], actual[i],0.009);
    printf("[Q1 REMINDER]: Add 1/3 more test case under TestQ1_add_Custom1()!!\n");		

    tearDown(result);		
}
void TestQ1_add_Custom2() {

    printf("\n=== TestQ1_add_Custom2() ===\n");
	int result = 1;

	// Add one more test cases here
	int i;
	int n = 5;
	double input1[5] = {2.70, 11.43, 16.00, 21.03, 0.90};
	double input2[5] = {1.28, 4.20, 6.96, 13.31, 0.05};
	double actual[5];
	double expected [5] = {3.98, 15.63, 22.96, 34.34, 0.95};

	add_vectors(input1,input2,actual,n);
	
	for (i=0; i<n; i++)
		result &= assert_equal_double(expected[i], actual[i],0.009);		

    printf("[Q1 REMINDER]: Add 2/3 more test case under TestQ1_add_Custom2()!!\n");		

    tearDown(result);		
}
void TestQ1_add_Custom3() {

    printf("\n=== TestQ1_add_Custom3() ===\n");
	int result = 1;

	// Add one more test cases here
	int i;
	int n = 5;
	double input1[5] = {7.20, 13.43, 61.29, 12.30, 19.78};
	double input2[5] = {2.18, 2.60, 96.66, 11.11, 5.55};
	double actual[5];
	double expected [5] = {9.38, 16.03, 157.95, 23.41, 25.33};

	add_vectors(input1,input2,actual,n);
	
	for (i=0; i<n; i++)
		result &= assert_equal_double(expected[i], actual[i],0.009);
    printf("[Q1 REMINDER]: Add 3/3 more test case under TestQ1_add_Custom3()!!\n");		

    tearDown(result);		
}
    
void TestQ1_scalar_prod_Custom1() {

    printf("\n=== TestQ1_scalar_prod_Custom1() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {7.20, 13.43, 61.29, 12.30, 19.78};
	double input2[5] = {2.18, 2.60, 96.66, 11.11, 5.55};
	double expected = 6221.34;
	double actual = scalar_prod(input1,input2,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 1/3 more test case under TestQ1_scalar_prod_Custom1()!!\n");		

	tearDown(result);
}
void TestQ1_scalar_prod_Custom2() {

    printf("\n=== TestQ1_scalar_prod_Custom2() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {2.70, 11.43, 16.00, 21.03, 0.90};
	double input2[5] = {1.28, 4.20, 6.96, 13.31, 0.05};
	double expected = 442.78;
	double actual = scalar_prod(input1,input2,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 2/3 more test case under TestQ1_scalar_prod_Custom2()!!\n");		

	tearDown(result);
}
void TestQ1_scalar_prod_Custom3() {

    printf("\n=== TestQ1_scalar_prod_Custom3() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {1.54, 5.34, 0.16, 30.21, 90.00};
	double input2[5] = {82.10, 0.24, 69.60, 33.11, 50.00};
	double expected = 5639.10;
	double actual = scalar_prod(input1,input2,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 3/3 more test case under TestQ1_scalar_prod_Custom3()!!\n");		

	tearDown(result);
}

void TestQ1_norm_Custom1() {

    printf("\n=== TestQ1_norm_Custom1() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {7.20, 13.43, 61.29, 12.30, 19.78};
	double expected=67.31 ;
    double actual = norm2(input1,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 1/3 more test case under TestQ1_norm_Custom1()!!\n");	

	tearDown(result);
}
void TestQ1_norm_Custom2() {

    printf("\n=== TestQ1_norm_Custom2() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {2.70, 11.43, 16.00, 21.03, 0.90};
	double expected=28.93 ;
    double actual = norm2(input1,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 2/3 more test case under TestQ1_norm_Custom2()!!\n");	

	tearDown(result);
}
void TestQ1_norm_Custom3() {

    printf("\n=== TestQ1_norm_Custom3() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 5;
	double input1[5] = {1.54, 5.34, 0.16, 30.21, 90.00};
	double expected=95.09 ;
    double actual = norm2(input1,n);

	result &= assert_equal_double(expected, actual,0.009);

    printf("[Q1 REMINDER]: Add 3/3 more test case under TestQ1_norm_Custom3()!!\n");	

	tearDown(result);
}

//===========================================================
//=================Question 2================================  

void TestQ2() {

    printf("\n=== TestQ2() ===\n");
	int result = 1; // true;

	int n = 3;
	int input[3][3] = {{1, 2, 3},{ 5, 8, 9},{ 0, 3, 5}};
	int expected[9]= {1, 2, 5, 3, 8, 0, 9, 3, 5};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
        result &= assert_equal_int(expected[i], actual[i]);

	tearDown(result);
}

void TestQ2_Custom1() {

    printf("\n=== TestQ2_Custom1() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 3;
	int input[3][3] = {{3, 1, 2},{ 0, 4, 9},{ 5, 8, 7}};
	int expected[9]= {3, 1, 0, 2, 4, 5, 9, 8, 7};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
        result &= assert_equal_int(expected[i], actual[i]);

    printf("[Q2 REMINDER]: Add 1/3 more test case under TestQ2_Custom1()!!\n");	

	tearDown(result);
}
void TestQ2_Custom2() {

    printf("\n=== TestQ2_Custom2() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 3;
	int input[3][3] = {{3, 2, 1},{ 9, 8, 5},{ 5, 3, 0}};
	int expected[9]= {3, 2, 9, 1, 8, 5, 5, 3, 0};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
        result &= assert_equal_int(expected[i], actual[i]);

    printf("[Q2 REMINDER]: Add 2/3 more test case under TestQ2_Custom2()!!\n");	

	tearDown(result);
}
void TestQ2_Custom3() {

    printf("\n=== TestQ2_Custom3() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n = 3;
	int input[3][3] = {{2, 3, 4},{ 6, 9, 0},{ 1, 4, 6}};
	int expected[9]= {2, 3, 6, 4, 9, 1, 0, 4, 6};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
        result &= assert_equal_int(expected[i], actual[i]);

    printf("[Q2 REMINDER]: Add 3/3 more test case under TestQ2_Custom3()!!\n");	

	tearDown(result);
}


    
//===========================================================
//=================Question 3================================   
void TestQ3_1() {

    printf("\n=== TestQ3_1() ===\n");
	int result = 1; // true;

	int n=8;
	int input[]={0,0,23,0,-7,0,0,48};
	struct Q3Struct actual[8] = {0};
	struct Q3Struct expected[8] = {{23, 2}, {-7, 4}, {48, 7}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
        result &= assert_equal_int(expected[i].val, actual[i].val);
		result &= assert_equal_int(expected[i].pos, actual[i].pos);
	}

	tearDown(result);
}

void TestQ3_zeros() {

    printf("\n=== TestQ3_zeros() ===\n");
	int result = 1; // true;

	int n=8;
	int input[]={0,0,0,0,0,0,0,0};
	struct Q3Struct actual[8] = {0};
	struct Q3Struct expected[8] = {0};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		result &= assert_equal_int(expected[i].val, actual[i].val);
		result &= assert_equal_int(expected[i].pos, actual[i].pos);
	}

	tearDown(result);
}

void TestQ3_combined() {

    printf("\n=== TestQ3_combined() ===\n");
	int result = 1; // true;

	int n=8;
	int input[]={0,0,23,0,-7,0,0,48};
	struct Q3Struct int_result[8] = {0};
	int expected[8] = {0,0,23,0,-7,0,0,48};
	int actual[8] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 8, int_result, 3);

	int i;
	for (i=0; i<n; i++){
		result &= assert_equal_int(expected[i], actual[i]);
	}

	tearDown(result);
}

void TestQ3_combined_Custom1() {

    printf("\n=== TestQ3_combined_Custom1() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n=8;
	int input[]={0,73,14,0,0,22,0,0};
	struct Q3Struct int_result[8] = {0};
	int expected[8] = {0,73,14,0,0,22,0,0};
	int actual[8] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 8, int_result, 3);

	int i;
	for (i=0; i<n; i++){
		result &= assert_equal_int(expected[i], actual[i]);
	}
    printf("[Q3 REMINDER]: Add 1/2 more test case under TestQ3_combined_Custom1()!!\n");	

	tearDown(result);
}
void TestQ3_combined_Custom2() {

    printf("\n=== TestQ3_combined_Custom2() ===\n");
	int result = 1; 

	// Add one more test cases here
	int n=8;
	int input[]={11,0,0,0,-11,0,0,8};
	struct Q3Struct int_result[8] = {0};
	int expected[8] = {11,0,0,0,-11,0,0,8};
	int actual[8] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 8, int_result, 3);

	int i;
	for (i=0; i<n; i++){
		result &= assert_equal_int(expected[i], actual[i]);
	}

    printf("[Q3 REMINDER]: Add 2/2 more test case under TestQ3_combined_Custom2()!!\n");	

	tearDown(result);
}
    

//===========================================================
//=================Question 4================================   
void TestQ4_BubbleSort_1() 
{
    printf("\n=== TestQ4_BubbleSort_1() ===\n");
	int result = 1; // true;

	int n=6;
	struct Q4Struct input[]={{10, 'c'}, {2, 'B'}, {-5, 'k'}, {12, 'z'}, {77, 'a'}, {-42, '?'}};	
	struct Q4Struct expected[]={{-42, '?'}, {-5, 'k'}, {2, 'B'}, {10, 'c'}, {12, 'z'}, {77, 'a'}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

	tearDown(result);
}

void TestQ4_BubbleSort_2() 
{
    printf("\n=== TestQ4_BubbleSort_2() ===\n");
	int result = 1; // true;

	int n=8;
	struct Q4Struct input[]={{-23, '='}, {78, ' '}, {11, 'Y'}, {-2, '0'}, {41, '+'}, {0, 'm'}, {55, 'T'}, {-9, 'o'}};	
	struct Q4Struct expected[]={{-23, '='}, {-9, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {41, '+'}, {55, 'T'}, {78, ' '}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

	tearDown(result);
}

void TestQ4_BubbleSort_Custom() 
{
    printf("\n=== TestQ4_BubbleSort_Custom() ===\n");
	int result = 1;

	// Add one more test cases here
	int n=6;
	struct Q4Struct input[]={{2, 'B'}, {10, 'c'}, {77, 'a'}, {12, 'z'}, {-5, 'k'}, {-42, '?'}};	
	struct Q4Struct expected[]={{-42, '?'}, {-5, 'k'}, {2, 'B'}, {10, 'c'}, {12, 'z'}, {77, 'a'}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

    printf("[Q4 REMINDER]: Add 1 more test case under TestQ4_BubbleSort_Custom()!!\n");	

	tearDown(result);
}

void TestQ4_SelectionSort_1() 
{
    printf("\n=== TestQ4_SelectionSort_1() ===\n");
	int result = 1; // true;

	int n=6;
	struct Q4Struct input[]={{10, 'c'}, {2, 'B'}, {-5, 'k'}, {12, 'z'}, {77, 'a'}, {-42, '?'}};	
	struct Q4Struct expected[]={{-42, '?'}, {-5, 'k'}, {2, 'B'}, {10, 'c'}, {12, 'z'}, {77, 'a'}};		
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

	tearDown(result);
}

void TestQ4_SelectionSort_2() 
{
	printf("\n=== TestQ4_SelectionSort_2() ===\n");
	int result = 1; // true;
	
	int n=8;
	struct Q4Struct input[]={{-23, '='}, {78, ' '}, {11, 'Y'}, {-2, '0'}, {41, '+'}, {0, 'm'}, {55, 'T'}, {-9, 'o'}};	
	struct Q4Struct expected[]={{-23, '='}, {-9, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {41, '+'}, {55, 'T'}, {78, ' '}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

	tearDown(result);
}

void TestQ4_SelectionSort_Custom() 
{
    printf("\n=== TestQ4_SelectionSort_Custom() ===\n");
	int result = 1;

	// Add one more test cases here
	int n=8;
	struct Q4Struct input[]={{-9, 'o'}, {55, 'T'}, {-2, '0'}, {11, 'Y'}, {0, 'm'}, {41, '+'}, {78, ' '}, {-23, '='}};	
	struct Q4Struct expected[]={{-23, '='}, {-9, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {41, '+'}, {55, 'T'}, {78, ' '}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		result &= assert_equal_int(expected[i].intData, input[i].intData);
		result &= assert_equal_char(expected[i].charData, input[i].charData);
	}

    printf("[Q4 REMINDER]: Add 1 more test case under TestQ4_SelectionSort_Custom()!!\n");	

	tearDown(result);
}



//===========================================================
	int runAllTests(int argc, char const *argv[]) {
		
		TestQ1_add();
		TestQ1_scalar_prod();
		TestQ1_norm();

		TestQ1_add_Custom1();
		TestQ1_add_Custom2();
		TestQ1_add_Custom3();
		TestQ1_scalar_prod_Custom1();
		TestQ1_scalar_prod_Custom2();
		TestQ1_scalar_prod_Custom3();
		TestQ1_norm_Custom1();
		TestQ1_norm_Custom2();
		TestQ1_norm_Custom3();

		TestQ2();
		TestQ2_Custom1();
		TestQ2_Custom2();
		TestQ2_Custom3();

		TestQ3_1();
		TestQ3_zeros();
		TestQ3_combined();
		TestQ3_combined_Custom1();
		TestQ3_combined_Custom2();

		TestQ4_BubbleSort_1();
		TestQ4_BubbleSort_2();
		TestQ4_BubbleSort_Custom();
		TestQ4_SelectionSort_1();
		TestQ4_SelectionSort_2();
		TestQ4_SelectionSort_Custom();

		return (successCount == totalAssertions);
	}

int main(int argc, char const *argv[]) {
  		
	successCount = 0;
	passCount = 0;
    totalAssertions = 0;
    totalTestCases = 0;
    
	int successCode = runAllTests(argc, argv);

    printf("\n=== Lab Test Report ===");
	if(successCode)	printf("\nPassed All Tests\n"); 
	else			printf("\nFailed Tests, Check Failure\n");

	printf("Test Case Score (Graded): %d / %d\n", passCount, totalTestCases);
    printf("Total Assertion Score (For Reference): %d / %d\n\n", successCount, totalAssertions);

	return successCode? EXIT_SUCCESS : EXIT_FAILURE;
}
    
int assert_equal_int(int a, int b)
{
	int result = (a == b);
	if(result)	
		successCount++;
	else
	{
		printf("\t\t[ASSERTION] Expected: %d, but Actual: %d \n", a, b);	
	}

    totalAssertions++;
	return result;
}

int assert_equal_char(char a, char b)
{
	int result = (a == b);
	if(result)	
		successCount++;
	else
	{
		printf("\t\t[ASSERTION] Expected: %c, but Actual: %c \n", a, b);	
	}

    totalAssertions++;
	return result;
}


int assert_equal_double(double a, double b, double tolRange)
{
	int result = ((a <= (b + tolRange)) && (a >= (b - tolRange)));
	if(result)	
		successCount++;
	else
	{
		printf("\t\t[ASSERTION] Expected: %f, but Actual: %f \n", a, b);	
	}

    totalAssertions++;
	return result;
}

void tearDown(int result)
{
    totalTestCases++;
    
    if(result) 
    {
        passCount++;
        printf("Passed\n");
    }
    else
    {
        printf("!!! FAILED !!!\n");
    }
} 
    
