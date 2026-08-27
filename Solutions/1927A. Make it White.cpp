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
        ll first = -1, last = -1;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'B'){
                if(first == -1) first = i;
                last = i;
            }
        }
        cout << last - first + 1 << endl;
    }
    return 0;
}
