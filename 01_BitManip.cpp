#include <iostream>
using namespace std;
int getBit(int n, int i)
{
    return ((n & (1 << i)) != 0);
}
// Set bit at a position --> 1
// Unset bit at a position --> 0
int setBit(int n, int i)
{
    return (n | (1 << i));
}
int clearBit(int n, int i) // Clear bit means at that position, make zero ('0')
{
    return (n & ~(1 << i));
}
int updateBit(int n, int i, int value)
{
    // for updating a bit, we first clearbit and set bit
    n = n & ~(1 << i);
    return (n | (value << i));
}
signed main()
{
    cout << " getbit(5,1) = " << getBit(5, 1) << endl;
    cout << " setbit(5,1) = " << setBit(5, 1) << endl;
    cout << " clearbit(5,1) = " << clearBit(5, 1) << endl;
    cout << " updatebit(5,1,1) = " << updateBit(5, 1, 1) << endl;
    return 0;
}
