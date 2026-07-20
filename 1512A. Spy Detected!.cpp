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
        vector<ll> a(n);
        for(auto &x:a) cin>>x;
        ll major = (a[0]==a[1] || a[0]==a[2]) ? a[0] : a[1];
        for(ll i=0; i<n; i++){
            if(a[i] != major){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
