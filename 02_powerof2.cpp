// Point to remember : (n&n-1) has same bits as n except the rightmost setbit


// check if a number is power of 2
//  concept : If a number is power of 2, then it has only 1 set bit
//  n-1 will have all set bits after that position

#include <bits/stdc++.h>
using namespace std;
int powerof2(int n)
{
    // return (n & n - 1);
    return n && !(n & (n - 1)); // to handle case when n is zero --- > n&& is added
}

signed main()
{
    cout << powerof2(16) << endl;
    cout << powerof2(17) << endl;
    return 0;
}