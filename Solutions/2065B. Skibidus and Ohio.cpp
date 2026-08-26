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
        bool has_pair = false;
        for(ll i = 0; i < (ll)s.size() - 1; i++){
            if(s[i] == s[i+1]){
                has_pair = true;
                break;
            }
        }
        cout << (has_pair ? 1 : (ll)s.size()) << endl;
    }
    return 0;
}
