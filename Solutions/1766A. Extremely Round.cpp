#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll count_extremely_round(ll n){
    if (n < 10) return n;
    ll cnt = 0;
    for(ll d = 1; d <= 9; d++){
        ll num = d;
        while(num <= n){
            cnt++;
            num *= 10;
        }
    }
    return cnt;
}

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        cout << count_extremely_round(n) << endl;
    }
    return 0;
}
