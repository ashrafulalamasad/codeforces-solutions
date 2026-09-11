#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string b, s, r; cin >> b;
        for(char c = 'a'; c <= 'z'; c++){
            if(b.find(c) != string::npos){
                r += c;
            }
        }
        map<char, char> mapping;
        ll k = (ll)r.size();
        for(ll i = 0; i < k; i++){
            mapping[r[i]] = r[k - 1 - i];
        }
        for(ll i = 0; i < n; i++){
            s += mapping[b[i]];
        }
        cout << s << endl;
    }
    return 0;
}
