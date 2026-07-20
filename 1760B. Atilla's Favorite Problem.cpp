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
        char mx = s[0];
        for(char c:s){
            if(c > mx){
                mx = c;
            }
        }
        cout << mx - 'a' + 1 << endl;
    }
    return 0;
}
