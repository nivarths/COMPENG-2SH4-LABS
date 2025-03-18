#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr[])
{

    // This is the first programming (scripting) question without any initial setup as hints.

    // This is also the first question requiring you to come up with an algorithm on paper 
    // with mathematical analysis before implementing the code.

    // High Level Hint:
    //  Assume a 3x3 square matrix, look at the SUM of the row and column indices of each element.
    //  You should be able to see a numerical pattern after doing so.

    int i = 0;
    int j = 0;
    int col = 0;
    int row = 0;
    int index = 0;              // indexing variable for arr[], to scan mat[][]
    for(col = 0; col < N3; col++)
    {
        i = 0;
        j = col;

        while(i < N3 && j >= 0)
        {
            arr[index++] = mat[i][j];
            i++;
            j--;
        }

    }

    for(row = 1; row < N3; row++)
    {
        i = row;
        j = N3 - 1;

        while(i < N3 && j >= 0)
        {
            arr[index++] = mat[i][j];
            i++;
            j--;
        }
    }

    

}
