#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll fib(ll n){
    if(n <= 2) return n - 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    fast;
    ll n; cin >> n;
    cout << fib(n) << endl;
    return 0;
}
