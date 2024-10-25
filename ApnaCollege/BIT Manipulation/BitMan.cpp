#include <bits/stdc++.h>

using namespace std;

// To get the bit
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
// To set the bit,set bit means to set the position of the bit to 1
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
// To clear the bit,clear bit means to clear the position of the bit to 0
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1) << endl;
    return 0;
}