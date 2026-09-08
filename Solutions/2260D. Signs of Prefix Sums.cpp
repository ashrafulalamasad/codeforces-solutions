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
        if(s[0] == '0' || s.find("00") != string::npos){
            cout << -1 << endl;
            continue;
        }
        bool one = true;
        if(s.find("+-") != string::npos || s.find("-+") != string::npos){
            one = false;
        }
        ll i = 0;
        while(i < n && one){
            if(s[i] == '0'){
                i++;
                continue;
            }
            ll j = i;
            while(j < n && s[j] == s[i]){
                j++;
            }
            if(j < n && s[j] == '0' && (j - i) % 2 == 0){
                one = false;
            }
            i = j;
        }
        if(one){
            cout << 1 << endl;
            continue;
        }
        if(s.find("+--+") == string::npos && s.find("-++-") == string::npos){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
    return 0;
}
