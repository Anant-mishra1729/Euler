#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;

// Sum of multiples
int target = 999;
int multipleSum(int n)
{
    int p = target / n;
    return n * (p * (p + 1) / 2);
}

void solve()
{
    cout << multipleSum(3) + multipleSum(5) - multipleSum(15);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    cout << "\n";

    return 0;
}
