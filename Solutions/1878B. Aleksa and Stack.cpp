#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n);
        a[0]=2;
        for(ll i=1; i<n; ++i){
            a[i] = a[i-1]+3;
        }
        for(ll i=0; i<n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
