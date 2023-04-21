/*
Longest consecutive run of 1's in binary
*/

#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int cnt = 0, ans = 0;
    vector<int> v;
    while (n > 0)
    {
        cnt = n & 1;
        n = n >> 1;
        if (cnt == 1)
            ans++;
        else
        {
            v.push_back(ans);
            ans = 0;
        }
    }
    v.push_back(ans);
    sort(v.begin(), v.end());
    // for(int i:v)cout<<i<<" ";
    return v[v.size() - 1];
}
int main()
{
    cout << solve(13);
}