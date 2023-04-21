/*
Hamming distance- num of pos at which corresponding bits are diff
*/

#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y)
{
    int m = x ^ y;
    int ans = 0;
    while (m > 0)
    {
        m = m & (m - 1);
        ans++;
    }
    return ans;
}

int main()
{
    cout << hammingDistance(3, 4);
    return 0;
}