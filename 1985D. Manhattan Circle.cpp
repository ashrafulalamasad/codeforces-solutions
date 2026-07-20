#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        ll minr = 1e9, maxr = -1, minc = 1e9, maxc = -1;
        for(ll i=1; i<=n; i++){
            string s; cin >> s;
            for(ll j=1; j<=m; j++){
                if(s[j-1] == '#'){
                    minr = min(minr,i);
                    maxr = max(maxr,i);
                    minc = min(minc,j);
                    maxc = max(maxc,j);
                }
            }
        }
        cout << (minr+maxr)/2 << " " << (minc+maxc)/2 << "\n";
    }
    return 0;
}
