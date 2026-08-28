#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; string s; cin >> n >> s;
        for(ll i = 0; i + 2 < n; i++){
            if(s.compare(i, 5, "mapie") == 0){
                ans++;
                i += 4;
            }else if(s.compare(i, 3, "map") == 0 || s.compare(i, 3, "pie") == 0){
                ans++;
                i += 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
