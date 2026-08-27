#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, d = 0, c = 0; cin >> n;
        string s, t; cin >> s >> t;
        for(ll i = 0; i < n; i++){
            if(s[i] != t[i]){
                d++;
            }
            if(s[i] != t[n - 1 - i]){
                c++;
            }
        }
        if(d == 0){
            cout << 0 << endl;
            continue;
        }
        ll direct;
        if(d % 2 == 1){
            direct = 2 * d - 1;
        }else{
            direct = 2 * d;
        }
        ll reversed;
        if(c == 0){
            reversed = 2;
        }else if(c % 2 == 0){
            reversed = 2 * c - 1;
        }else{
            reversed = 2 * c;
        }
        cout << min(direct, reversed) << endl;
    }
    return 0;
}
