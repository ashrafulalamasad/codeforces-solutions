#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x[3], y[3];
    for(ll i=0; i<3; i++) cin >> x[i] >> y[i];
    if(x[0]==x[1]&&x[1]==x[2]||y[0]==y[1]&&y[1]==y[2]){
        cout << 1 << endl;
        return 0;
    }
    ll ans = 3;
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            bool ok = 1;
            ll ymin = 1e18, ymax = -1e18, xmin = 1e18, xmax = -1e18;
            for(ll k=0; k<3; k++){
                if(x[k]==x[i]){
                    ymin = min(ymin, y[k]);
                    ymax = max(ymax, y[k]);
                }
                if(y[k]==y[j]){
                    xmin = min(xmin, x[k]);
                    xmax = max(xmax, x[k]);
                }
                if(x[k]!=x[i]&&y[k]!=y[j]) ok = 0;
            }
            if(ok&&(ymin>=y[j]||ymax<=y[j])&&(xmin>=x[i]||xmax<=x[i])) ans = 2;
        }
    }
    cout << ans << endl;
    return 0;
}
