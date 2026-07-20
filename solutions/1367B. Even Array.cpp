#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll evenWrong = 0, oddWrong = 0;
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if(i % 2 != x % 2){
                if(i % 2 == 0) evenWrong++;
                else oddWrong++;
            }
        }
        if(evenWrong == oddWrong) cout << evenWrong << endl;
        else cout << -1 << endl;
    }
    return 0;
}
