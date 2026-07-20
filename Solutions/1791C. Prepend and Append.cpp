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
        ll ans = n, l = 0, r = n-1;
        while(l<r && s[l]!=s[r]){
            l++; r--; ans-=2;
        }
        cout << ans << endl;
    }
    return 0;
}
