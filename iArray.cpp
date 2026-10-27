#include "iArray.h"
#include <iostream>

using namespace std;

//1ai) destructor to free the allocated memory
iArray :: ~iArray()
{
    delete[] data;
}

//1aii) the fillArray(int limit, int n), to generate the n numbers between 0 and provided limit
void iArray :: fillArray(int limit, int n)
{
    for (int i=0; i<n; i++)
    {
        data[i] = rand() % limit;
    }
}

//1aiii) the print function, to print the array in one line on the console seperate with space
void iArray :: print()
{
    for (int i=0; i<size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    
}

//1aiiii) the countOccurence(int x), to count the occurence of the 'x' item
int iArray :: countOccurence(int x)
{
    int total=0;

    for (int i=0; i<size; i++)
    {
        if (data[i]=='x')
        {
            total++;
        }
    }
}

//1aiiiii) the iReverseArrayElement() will reverse the array without using standard template library
int iArray :: iReverseArrayElement()
{
    int first=0;
    int last=size - 1;

    while (first<last)
    {
        int temp = data[first];
        data[first] = data[last];
        data[last] = temp;

        first++;
        last--;
    }

    return 1;
}