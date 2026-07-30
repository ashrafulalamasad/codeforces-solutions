#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll a[100001];

bool palindrome(ll l, ll r){
    if(l >= r) return true;
    if(a[l] != a[r]) return false;
    return palindrome(l + 1, r - 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    if(palindrome(0, n - 1)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
