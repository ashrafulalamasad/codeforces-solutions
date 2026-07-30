#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s; ll n = s.size();
    for(ll i = 0; i < n / 2; i++){
        ll j = n - 1 - i;
        if(s[i] != '?' && s[j] != '?' && s[i] != s[j]){
            cout << -1 << endl;
            return 0;
        }
        if(s[i] == '?' && s[j] != '?'){
            s[i] = s[j];
        }else if(s[i] != '?' && s[j] == '?'){
            s[j] = s[i];
        }else if(s[i] == '?' && s[j] == '?'){
            s[i] = s[j] = 'a';
        }
    }
    if(n % 2 == 1 && s[n / 2] == '?') s[n / 2] = 'a';
    cout << s << endl;
    return 0;
}
