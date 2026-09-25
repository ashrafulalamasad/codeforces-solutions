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
        string a; cin >> a;
        string b; cin >> b;
        string c; cin >> c;
        bool ok = false;
        for(ll i = 0; i < n; i++){
            if(c[i] != a[i] && c[i] != b[i]){
                ok = true;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
