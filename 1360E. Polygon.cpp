#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; vector<string> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        bool ok = true;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                if(a[i][j]=='1'){
                    if(i==n-1 || j==n-1) continue;
                    if(a[i+1][j]=='0' && a[i][j+1]=='0') ok = false;
                }
            }
        }
        cout << (ok?"YES":"NO") << endl;
    }
    return 0;
}
