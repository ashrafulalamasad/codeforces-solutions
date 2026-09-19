#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll LIM = 1000000; vector<ll> good(LIM + 1, 0);
    for(ll k = 2; k * k + k + 1 <= LIM; k++){
        ll sum = 1 + k + k * k, pw = k * k;
        while(sum <= LIM){
            good[sum] = 1;
            if(pw > LIM / k) break;
            pw = pw * k;
            sum = sum + pw;
        }
    }
    tc{
        ll n; cin >> n;
        if(n <= LIM && good[n]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
