#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        ll mx = 1, cur = 1;
        for(ll i = 1; i < n; i++){
            if(s[i] == s[i - 1]){
                cur++;
            }else{
                cur = 1;
            }
            mx = max(mx, cur);
        }
        cout << mx + 1 << endl;
    }
    return 0;
}
