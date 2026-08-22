#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll q; cin >> q; vector<ll> f;
    ll x = q, cnt = 0;
    while(x % 2 == 0){
        f.push_back(2);
        x /= 2;
        cnt++;
    }
    for(ll i = 3; i * i <= x; i += 2){
        while(x % i == 0){
            f.push_back(i);
            x /= i;
            cnt++;
        }
    }
    if(x > 1){
        f.push_back(x);
        cnt++;
    }
    if(cnt <= 1){
        cout << 1 << endl;
        cout << 0 << endl;
    }else if(cnt == 2){
        cout << 2 << endl;
    }else{
        cout << 1 << endl;
        cout << f[0] * f[1] << endl;
    }
    return 0;
}
