/*
Find a unique number in array where all numbers except one, are present thrice*/
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int unique(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < 64; i++) // array of 64 bits
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            // if ((a[j] & 1 << i)) // checking if the bit is set
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3)
            res = setBit(res, i);
    }
    return res;
}

// Logic : Here we consider an array of 64 bits and fill the number of setbits at a particular
//  position in the array at same position
signed main()
{
    int a[] = {1, 1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 5, 5}; // unique element -> 3
    cout << unique(a, 13) << endl;
    return 0;
}