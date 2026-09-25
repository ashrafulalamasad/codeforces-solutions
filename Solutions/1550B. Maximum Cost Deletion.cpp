#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        string s; cin >> s; ll groups = 1;
        for(ll i = 1; i < n; i++){
            if(s[i] != s[i - 1]) groups++;
        }
        if(b >= 0) cout << n * a + n * b << endl;
        else cout << n * a + (groups / 2 + 1) * b << endl;
    }
    return 0;
}
