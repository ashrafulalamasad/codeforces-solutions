#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size();
        ll first = n - 1, last = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '0' && i < first){
                first = i;
            }
            if(s[i] == '1' && i > last){
                last = i;
            }
        }
        cout << first - last + 1 << endl;
    }
    return 0;
}
