#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Questions.h"

int successCount;
int passCount;

int totalTestCases, totalAssertions;

int assert_equal_int(int, int);
int assert_equal_char(char, char);
void tearDown(int result);

//=========Question 1==================================
    
    void TestQ1_for() {

        printf("\n=== TestQ1_for() ===\n");

        int actual = Q1_for(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_for(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_for(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);		
    }

    void TestQ1_while() {

        printf("\n=== TestQ1_while() ===\n");

        int actual = Q1_while(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_while(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_while(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
		tearDown(result);
    }

    void TestQ1_dowhile() {

        printf("\n=== TestQ1_dowhile() ===\n");

        int actual = Q1_dowhile(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_dowhile(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_dowhile(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
		tearDown(result);
    }

    void TestQ1_for_Custom()
    {
        printf("\n=== TestQ1_for_Custom() ===\n");
        
        // Add three more test cases here

        int actual = Q1_for(8);
        int expected = 63000;
        int result = assert_equal_int(expected, actual);

        actual = Q1_for(69);
        expected = 7245;
        result &= assert_equal_int(expected, actual);

        actual = Q1_for(108);
        expected = 4860;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);
    }

    void TestQ1_while_Custom()
    {
        printf("\n=== TestQ1_while_Custom() ===\n");

        // Add three more test cases here
        int actual = Q1_while(92);
        int expected = 5060;
        int result = assert_equal_int(expected, actual);
        
        actual = Q1_while(10);
        expected = 50500;
        result &= assert_equal_int(expected, actual);
        
        actual = Q1_while(7);
        expected = 71071;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);
    }

    void TestQ1_dowhile_Custom()
    {
        printf("\n=== TestQ1_dowhile_Custom() ===\n");

        // Add three more test cases here
        int actual = Q1_dowhile(19);
        int expected = 26182;
        int result = assert_equal_int(expected, actual);

        actual = Q1_dowhile(2);
        expected = 250500;
        result &= assert_equal_int(expected, actual);

        actual = Q1_dowhile(79);
        expected = 6162;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);
    }

//===========================================================
//=================Question 2================================
    void TestQ2_Model() {
        
        printf("\n=== TestQ2_Model() ===\n");

        float threshold = 3.7;
	    float input = -10.1;
        int actual = Q2_FPN(input, threshold);
        int expected = -999;
        int result = assert_equal_int(expected, actual);

        input = -6.2;
        actual = Q2_FPN(input, threshold);
        expected = 0;
        result &= assert_equal_int(expected, actual);

        input = -2.4;
        actual = Q2_FPN(input, threshold);
        expected = 1;
        result &= assert_equal_int(expected, actual);

        input = 1.8;
        actual = Q2_FPN(input, threshold);
        expected = 2;
        result &= assert_equal_int(expected, actual);

        input = 4.9;
        actual = Q2_FPN(input, threshold);
        expected = 3;
        result &= assert_equal_int(expected, actual);

        input = 91.1;
        actual = Q2_FPN(input, threshold);
        expected = -999;
        result &= assert_equal_int(expected, actual);

        tearDown(result);
    }   

    void TestQ2_Custom()
    {
        printf("\n=== TestQ2_Custom() ===\n");

        // Add three more test cases here
        float threshold = 5.0;
	    
        float input = -2.0;
        int actual = Q2_FPN(input, threshold);
        int expected = 1;
        int result = assert_equal_int(expected, actual);

        input = -4.3;
        actual = Q2_FPN(input, threshold);
        expected = 1;
        result &= assert_equal_int(expected, actual);

        input = 1.2;
        actual = Q2_FPN(input, threshold);
        expected = 2;
        result &= assert_equal_int(expected, actual);

        input = 8.4;
        actual = Q2_FPN(input, threshold);
        expected = 3;
        result &= assert_equal_int(expected, actual);

        input = 11.6;
        actual = Q2_FPN(input, threshold);
        expected = -999;
        result &= assert_equal_int(expected, actual);

        input = -8.2;
        actual = Q2_FPN(input, threshold);
        expected = 0;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);
    }


//===========================================================
//=================Question 3================================   
    void TestQ3_none() {
        
        printf("\n=== TestQ3_none() ===\n");

        int input = 5;
        int expected[100]={0};
        int actual[100]={0};
        int expectedCount = 0;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_10() {
        
        printf("\n=== TestQ3_10() ===\n");

        int input = 10;
        int expected[100]={0},actual[100]={0};
        expected[0]= 6;
        int expectedCount=1;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_1000() {
        
        printf("\n=== TestQ3_1000() ===\n");

        int input = 1000;
        int expected[100]={0};
        int actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        int expectedCount=3;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }
      
    void TestQ3_10000() {
        
        printf("\n=== TestQ3_10000() ===\n");

        int input = 10000;
        int expected[100]={0},actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        expected[3]=8128;
        int expectedCount=4;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
    
    	int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }
    
    void TestQ3_neg() {
        
        printf("\n=== TestQ3_neg() ===\n");

        int input = -1000;
        int expected[100]={0},actual[100]={0};
        int expectedCount=0;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_Custom()
    {
        printf("\n=== TestQ1_dowhile() ===\n");

        int result = 0;

        // Add another test case here
        int input = 3;
        int expected[100]={0};
        int actual[100]={0};
        int expectedCount = 0;
        int actualCount = Q3(input,actual);
        result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);
        
        tearDown(result);
    }



//===========================================================
//=================Question 4================================ 
    void TestQ4_8() {

        printf("\n=== TestQ4_8() ===\n");

        int targetArray[8] = {6, 13, 0, -7, 28, 1, 45, -4};
		int inputSize = 8;
        int expectedArray[8] = {-7, -4, 0, 1, 6, 13, 28, 45};
        int expectedPass = 7;
        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result = assert_equal_int(expectedPass, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_16() {

		printf("\n=== TestQ4_16() ===\n");

        int targetArray[16] = {11, 3, -2, 88, 10, 25, 103, 91, -44, 0, 233, -85, 1015, -7, -411, -27};
		int inputSize = 16;
        int expectedArray[16] = {-411, -85, -44, -27, -7, -2, 0, 3, 10, 11, 25, 88, 91, 103, 233, 1015};
        int expectedPass = 15;
        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result = assert_equal_int(expectedPass, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_25() {

		printf("\n=== TestQ4_25() ===\n");

        int targetArray[25] = {889, 12, 69, 7, -25, 25, 353, -1422, -1, -65535, 11, 89, 63, -375, 227, 55, 3688, -324, 71, -6, -31, 88, 477, -5225, -91};
		int inputSize = 25;
        int expectedArray[25] = {-65535, -5225, -1422, -375, -324, -91, -31, -25, -6, -1, 7, 11, 12, 25, 55, 63, 69, 71, 88, 89, 227, 353, 477, 889, 3688};

        // three possible passes, all valid.  We are not grading for efficiency optimization.
        int expectedPass1 = 23;
        int expectedPass2 = 24;
        int expectedPass3 = 25;         

        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result;

        if(actualPass == expectedPass1)
            result = assert_equal_int(expectedPass1, actualPass);
        else if(actualPass == expectedPass2)
            result = assert_equal_int(expectedPass2, actualPass);
        else
            result = assert_equal_int(expectedPass3, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_Custom()
    {
        printf("\n=== TestQ4_Custom() ===\n");

        int result = 0;

        // Add another test case here
        int targetArray[9] = {2, 47, -92, -7, 0, 49, 14, -69, 87};
		int inputSize = 9;
        int expectedArray[9] = {-92, -69, -7, 0, 2, 14, 47, 49, 87};
        int expectedPass = 7;
        int actualPass = Q4_Bubble(targetArray, inputSize);        
        result = assert_equal_int(expectedPass, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    }

  
    
//===========================================================
	int runAllTests(int argc, char const *argv[]) {
		
		TestQ1_for();   
		TestQ1_while(); 
        TestQ1_dowhile();    
        TestQ1_for_Custom();    // Add three more test cases in here
        TestQ1_while_Custom();  // Add three more test cases in here
        TestQ1_dowhile_Custom(); // Add three more test cases in here

        TestQ2_Model();
        TestQ2_Custom(); // Add three more test cases in here

        TestQ3_none();
        TestQ3_10();
        TestQ3_1000();
        TestQ3_10000();
        TestQ3_Custom(); // Add one more test case in here

        TestQ4_8();
        TestQ4_16();
        TestQ4_25();
        TestQ4_Custom();  // Add one more test case in here

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