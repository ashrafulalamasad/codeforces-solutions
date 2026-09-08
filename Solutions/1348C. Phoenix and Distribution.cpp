#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; string s; cin >> s;
        sort(s.begin(), s.end());
        if(s[k - 1] != s[0]){
            cout << s[k - 1] << endl;
            continue;
        }
        if(s[k] == s[n - 1]){
            cout << s[0] << string((n - k + k - 1) / k, s[k]) << endl;
        }else{
            cout << s[0] << s.substr(k) << endl;
        }
    }
    return 0;
}
