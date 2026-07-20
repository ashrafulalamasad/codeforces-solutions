#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n;
        vector<string> a(n);
        for(ll i = 0; i < n; ++i) cin >> a[i];
        for(ll i = n - 1; i >= 0; --i){
            for(ll j = 0; j < 4; ++j){
                if(a[i][j] == '#') cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
