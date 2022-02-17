// Logic : if two same numbers are xored, that gives zero
//, when zero is xored with unique number it gives unique number as result
#include <bits/stdc++.h>
using namespace std;
int unique(int a[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
        xorsum = xorsum ^ a[i];
    return xorsum;
}
signed main()
{
    int a[] = {1, 1, 2, 3, 4, 5, 6, 6, 4, 3, 2}; // unique element is 5
    cout << unique(a, 11);
    return 0;
}