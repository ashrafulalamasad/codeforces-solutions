#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        if(s.size() > 10){
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
        else cout << s << endl;
    }
    return 0;
}
