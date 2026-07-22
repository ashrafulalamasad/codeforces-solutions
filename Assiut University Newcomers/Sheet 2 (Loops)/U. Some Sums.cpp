#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, a, b; cin >> n >> a >> b;
    ll total = 0;
    for(ll i = 1; i <= n; i++){
        ll x = i, sum = 0;
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        if(sum >= a && sum <= b) total += i;
    }
    cout << total << endl;
    return 0;
}
