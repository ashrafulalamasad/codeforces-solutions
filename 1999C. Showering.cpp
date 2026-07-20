#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast; 
    tc{
        ll n, s, m, prev = 0; cin >> n >> s >> m; bool ok = 0;
        for(ll i=0; i<n; i++){
            ll l, r; cin >> l >> r;
            if(!ok && l-prev >= s){
                cout << "YES\n";
                ok = 1;
            }
            prev=r;
        }
        if(!ok && m-prev >= s) cout << "YES\n";
        else if(!ok) cout << "NO\n";
    }
    return 0;
}
