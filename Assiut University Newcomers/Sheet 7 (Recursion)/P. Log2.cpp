#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll log2_rec(ll num){
    if(num == 1) return 0;
    return 1 + log2_rec(num / 2);
}

int main()
{
    fast;
    ll n; cin >> n;
    cout << log2_rec(n) << endl;
    return 0;
}
