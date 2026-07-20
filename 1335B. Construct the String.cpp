#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        string s; s.reserve(n);
        for(ll i=0; i<n; i++){
            char c = 'a' + (i % b);
            s.push_back(c);
        }
        cout << s << endl;
    }
    return 0;
}
