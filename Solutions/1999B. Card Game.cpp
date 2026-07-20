#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a1, a2, b1, b2, ans = 0; cin >> a1 >> a2 >> b1 >> b2;
        vector<ll>a = {a1,a2}; vector<ll>b = {b1,b2};
        for(ll i=0; i<2; i++){
            for(ll j=0; j<2; j++){
                ll sw=0,bw=0;
                if(a[i] > b[j]) sw++;
                else if(a[i] < b[j]) bw++;
                if(a[1-i] > b[1-j]) sw++;
                else if(a[1-i] < b[1-j]) bw++;
                if(sw > bw) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
