#pragma once

class iArray
{
    private:
        int size;
        int* data;

    public:
        iArray(int n)
        {
            size=n;
            data=new int[size];
        }

    ~iArray();

    void fillArray(int limit, int n);

    void print();

    int countOccurence(int x);

    int iReverseArrayElement();
};