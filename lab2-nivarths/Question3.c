#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


// this is the very first question without hints in the comments.  read the manual to develop your own algorithm

// Read Questions.h to understand the definition of Q3Struct

void efficient(const int source[], struct Q3Struct effVector[], int size)
{
    int index = 0;
    int i = 0;
    for(i = 0; i < size; i++)
    {
        if(source[i] != 0)
        {
            effVector[index].val = source[i];
            effVector[index].pos = i;
            index++;
        }
    }

}

void reconstruct(int source[], int m, const struct Q3Struct effVector[], int n)
{
    int i = 0;
    for(i = 0; i < m; i++)
    {
        source[i] = 0;
    }

    for(i = 0; i < n; i++)
    {
        source[effVector[i].pos] = effVector[i].val;
    }

}
