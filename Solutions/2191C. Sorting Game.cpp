#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s; cin >> s;
        string sorted = s;
        sort(sorted.begin(), sorted.end());
        if(s == sorted) cout << "Bob" << endl;
        else{
            vector<ll> idx;
            for(ll i = 0; i < n; i++) if(s[i] != sorted[i]) idx.push_back(i + 1);
            cout << "Alice" << endl;
            cout << idx.size() << endl;
            for(ll i = 0; i < (ll)idx.size(); i++){
                if(i) cout << " ";
                cout << idx[i];
            }
            cout << endl;
        }
    }
    return 0;
}
