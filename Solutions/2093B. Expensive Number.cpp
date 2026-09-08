#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string n; cin >> n;
        ll last = 0;
        for(ll i = 0; i < (ll)n.size(); i++){
            if(n[i] != '0') last = i;
        }
        ll zeros = 0;
        for(ll i = 0; i < last; i++){
            if(n[i] == '0') zeros++;
        }
        cout << (ll)n.size() - zeros - 1 << endl;
    }
    return 0;
}
