/*
Sort Integers by The Number of 1 Bits
*/

#include <bits/stdc++.h>
using namespace std;
int setBits(int a)
{
    int ans = 0;
    while (a > 0)
    {
        a = a & (a - 1);
        ans++;
    }
    return ans;
}

bool cmp(int a, int b)
{
    int resA = setBits(a);
    int resB = setBits(b);
    if (resA == resB)
    {
        return a < b;
    }
    return resB > resA;
}
vector<int> sortByBits(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), cmp);
    return arr;
}
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    sortByBits(v);
    for (int i : v)
        cout << i << " ";
}