#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    bool color = false;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            char ch; cin >> ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y') color = true;
        }
    }
    cout << (color ? "#Color" : "#Black&White") << endl;
    return 0;
}
