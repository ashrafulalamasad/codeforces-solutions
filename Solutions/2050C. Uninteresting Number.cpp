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
        ll sum = 0, c2 = 0, c3 = 0, ok = 0;
        for(ll i = 0; i < s.size(); i++){
            ll d = s[i] - '0';
            sum = sum + d;
            if(d == 2) c2++;
            if(d == 3) c3++;
        }
        ll need = (9 - sum % 9) % 9;
        for(ll i = 0; i <= c2 && i < 10; i++){
            for(ll j = 0; j <= c3 && j < 10; j++){
                if((2 * i + 6 * j) % 9 == need){
                    ok = 1;
                }
            }
        }
        if(ok == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
