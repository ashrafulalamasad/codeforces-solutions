#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, sum = 0; cin >> n;
    vector<ll> a(n); vector<ll> b(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i] / 2;
        sum += b[i];
    }
    for(ll i = 0; i < n; i++){
        if(sum == 0) break;
        if(a[i] % 2 != 0){
            if(a[i] > 0 && sum < 0){ b[i]++; sum++; }
            else if(a[i] < 0 && sum > 0){ b[i]--; sum--; }
        }
    }
    for(ll i = 0; i < n; i++) cout << b[i] << endl;
    return 0;
}
