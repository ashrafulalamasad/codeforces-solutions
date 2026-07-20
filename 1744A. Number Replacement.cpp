#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;
        vector<char> num_to_letter(51, 0);
        bool possible = true;
        for(ll i = 0; i < n; i++){
            if(num_to_letter[a[i]] != 0 && num_to_letter[a[i]] != s[i]){
                possible = false;
                break;
            }
            num_to_letter[a[i]] = s[i];
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
