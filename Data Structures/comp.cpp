#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool exp2(ll n)
{
    if (n == 1)
    {
        return false;
    }
    
    return (n>0 && (n&(n-1)) == 0);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("ip.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        // Type your code here...
        ll n, s = 0;
        cin >> n;
        ll a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        if (s%2 == 0 && n%2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    
    return 0;
}