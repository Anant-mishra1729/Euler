#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;

void solve()
{
    int a = 0;
    int b = 2;
    int c;
    int sum = 2;
    while(true)
    {
        c = 4*b + a; // For even fibbonacci series f(n) = 4 * f(n - 1) + f(n - 2)
        if(c > 4000000)
        {
            break;
        }
        sum += c;
        a = b;
        b = c;
    }
    cout << sum;
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