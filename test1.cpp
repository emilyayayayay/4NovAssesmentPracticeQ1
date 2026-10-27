#include <iostream>
#include "iArray.h"

using namespace std;

int main()
{
    int n=10;

    iArray* pi = new iArray(n);

    pi->fillArray(100,n);

    pi->print();

    //call countOccurance(int x)
    cout<<endl<<"The count of number 41 occurence is: " << pi->countOccurence(41) << endl;

    //call iReverseArrayElement
    pi->iReverseArrayElement();
    pi->print();

    return 0;
}