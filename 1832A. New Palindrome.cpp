#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        vector<ll>freq(26,0);
        for(char c:s) freq[c-'a']++;
        ll distinct = 0;
        for(ll i = 0; i < 26; i++){
            if(freq[i]/2 > 0) distinct++;
        }
        cout << (distinct > 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
