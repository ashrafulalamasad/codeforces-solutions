#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--){
        for(ll i = 0; i < n - 1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
