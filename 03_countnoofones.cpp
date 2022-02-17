// Point to remember : (n&n-1) has same bits as n except the rightmost setbit

#include <bits/stdc++.h>
using namespace std;
int count_1s(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

signed main()
{
    cout << count_1s(5) << endl; // 5 --> 101 --> 2 ones
    return 0;
}