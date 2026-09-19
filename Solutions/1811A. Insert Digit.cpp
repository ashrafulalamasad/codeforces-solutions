#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, d; cin >> n >> d;
        string s; cin >> s;
        ll pos = n;
        for(ll i = 0; i < n; i++){
            if(s[i] - '0' < d){
                pos = i; break;
            }
        }
        for(ll i = 0; i < pos; i++){
            cout << s[i];
        }
        cout << (char)('0' + d);
        for(ll i = pos; i < n; i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
