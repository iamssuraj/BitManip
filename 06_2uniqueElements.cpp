#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int a[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
        xorsum = xorsum ^ a[i];
    int setbit = 0;
    int pos = 0;
    int tempxor = xorsum;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(a[i], pos - 1))
            newxor ^= a[i];
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
signed main()
{
    int a[] = {1, 1, 2, 3, 4, 5, 6, 6, 4, 2}; // unique elements are 5 and 3
    unique(a, 10);
    return 0;
}