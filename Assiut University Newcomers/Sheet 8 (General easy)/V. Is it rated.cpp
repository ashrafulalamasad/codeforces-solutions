#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    bool rated = false;
    for(ll i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if(a[i] != b[i]) rated = true;
    }
    if(rated){
        cout << "rated" << endl;
        return 0;
    }
    for(ll i = 1; i < n; i++){
        if(a[i] > a[i - 1]){
            cout << "unrated" << endl;
            return 0;
        }
    }
    cout << "maybe" << endl;
    return 0;
}
