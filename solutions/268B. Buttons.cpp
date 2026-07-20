#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll first_part = n * (n + 1) / 2;
    ll second_part = n * (n - 1) * (n - 2) / 6;
    cout << first_part + second_part << endl;
    return 0;
}
