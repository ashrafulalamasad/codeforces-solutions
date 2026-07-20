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
        bool ok = true;
        for(ll i = 0; i < n;){
            if(s[i] == 'W'){i++; continue;}
            ll j = i;
            while(j < n && s[j] != 'W') j++;
            if(j - i == 1){ok = false; break;}
            bool hasR = false, hasB = false;
            for(ll k = i; k < j; k++){
                if(s[k] == 'R') hasR = true;
                if(s[k] == 'B') hasB = true;
            }
            if(!hasR || !hasB){ok = false; break;}
            i = j;
        }
        cout << (ok? "YES":"NO") << endl;
    }
    return 0;
}
