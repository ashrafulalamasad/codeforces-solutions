#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll factorial(ll num){
    if(num <= 1) return 1;
    return num * factorial(num - 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
