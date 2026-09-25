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
        if(n % 2 == 1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            string ans = "";
            for(ll i = 0; i < n / 2; i++){
                char c = (i % 2 == 0 ? 'A' : 'B');
                ans.push_back(c);
                ans.push_back(c);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
