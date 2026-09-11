#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        ll first = n, last = -1;
        for(ll i = 0; i < n / 2; i++){
            if(s[i] != s[n - 1 - i]){
                first = min(first, i);
                last = i;
            }
        }
        bool possible = true;
        for(ll i = first; i <= last; i++){
            if(s[i] == s[n - 1 - i]){
                possible = false;
            }
        }
        cout << (possible ? "Yes" : "No") << endl;
    }
    return 0;
}
