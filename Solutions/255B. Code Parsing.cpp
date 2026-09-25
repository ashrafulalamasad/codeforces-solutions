#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll cx = 0, cy = 0;
    for(ll i = 0; i < (ll)s.size(); i++){
        if(s[(size_t)i] == 'x') cx++;
        else cy++;
    }
    if(cx > cy) cout << string((size_t)(cx - cy), 'x') << endl;
    else cout << string((size_t)(cy - cx), 'y') << endl;
    return 0;
}
