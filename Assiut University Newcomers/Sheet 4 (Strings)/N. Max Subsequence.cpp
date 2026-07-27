#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; string s; cin >> s;
    char last = 0;
    ll ans = 0;
    for(char c: s){
        if(c != last){
            ans++;
            last = c;
        }
    }
    cout << ans << endl;
    return 0;
}
