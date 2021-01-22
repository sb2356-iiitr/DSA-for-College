#include <bits/stdc++.h>
//#include <iostream>
typedef long long ll;
using namespace std;

// function to count the divisors 
bool isPerfect(ll n)
{
    double sr = sqrt(n);
    return ((sr-floor(sr)) == 0);
} 

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    stack <ll> s;
    

    return 0;
}