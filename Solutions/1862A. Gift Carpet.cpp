#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<string> carpet(n);
        for(ll i = 0; i < n; i++) cin >> carpet[i];
        string target = "vika"; ll matched = 0;
        for(ll j = 0; j < m && matched < 4; j++){
            bool found = false;
            for(ll i = 0; i < n; i++){
                if(carpet[i][j] == target[matched]){
                    found = true;
                    break;
                }
            }
            if(found){
                matched++;
            }
        }
        if(matched == 4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
