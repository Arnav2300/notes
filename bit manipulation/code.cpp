#include <iostream>
using namespace std;

void get_ith_bit(int n, int b)
{
    int mask = 1 << b;
    n = n & mask;
    if (n > 0)
        cout << b << "th bit is 1.";
    else
        cout << b << "th bit is 0.";
}

void clear_ith_bit(int &n, int b)
{
    int mask = ~(1 << b);
    n = n & mask;
    cout << n;
}

void set_ith_bit(int &n, int b)
{
    int mask = (1 << b);
    n = n | mask;
    cout << n;
}

void update_ith_bit(int &n, int i, int v)
{
    int mask = v << i;
    clear_ith_bit(n, i);
    n = n | mask;
    cout << n;
}

void clear_lasti_bits(int &n, int i)
{
    int mask = -1 << i;
    n = n & mask;
    cout << n;
}

void clear_bits_in_range(int &n, int i, int j)
{
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
    cout << n;
}

void count_set_bits(int n)
{
    int cnt = 0;
    while (n > 0)
    { // will run log n times, every num has at most log n set bits.
        int last_bit = (n & 1);
        cnt += last_bit;
        n = n >> 1;
    }
    cout << cnt;
}

void count_bits_faster(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    cout << ans;
}

void dec_to_bin(int n)
{
    int ans = 0, p = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += p * last_bit;
        p = p * 10;
        n = n >> 1;
    }
    cout << ans;
}

int main()
{
    int n = 13, b;
    // cin >> n >> b;
    // get_ith_bit(5,2);
    // clear_ith_bit(13, 2);
    // set_ith_bit(5, 0);
    // update_ith_bit(n,2,0);
    // clear_lasti_bits(n,2);
    // clear_bits_in_range(31, 1, 3);
    // count_bits_faster(15);
    dec_to_bin(13);
    return 0;
}
