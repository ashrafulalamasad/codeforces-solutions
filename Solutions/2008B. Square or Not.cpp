#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        ll r = (ll)sqrt((double)n);
        while(r * r > n) r--;
        while((r + 1) * (r + 1) <= n) r++;
        if(r * r != n){
            cout << "No" << endl;
            continue;
        }
        ll ok = 1;
        for(ll i = 0; i < r && ok; i++){
            for(ll j = 0; j < r; j++){
                ll border = (i == 0 || i == r - 1 || j == 0 || j == r - 1);
                if((border && s[i * r + j] == '0') || (!border && s[i * r + j] == '1')){
                    ok = 0;
                    break;
                }
            }
        }
        if(ok){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
