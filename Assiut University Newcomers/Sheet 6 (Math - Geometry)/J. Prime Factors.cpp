#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    bool start = true;
    for(ll i = 2; i * i <= n; i++){
        ll cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        if(cnt > 0){
            if(!start) cout << "*";
            cout << "(" << i << "^" << cnt << ")";
            start = false;
        }
    }
    if(n > 1){
        if(!start) cout << "*";
        cout << "(" << n << "^" << 1 << ")";
    }
    cout << endl;
    return 0;
}
