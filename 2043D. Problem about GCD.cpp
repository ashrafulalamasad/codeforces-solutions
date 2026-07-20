#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r, G; cin >> l >> r >> G;
        ll L = (l + G - 1) / G;
        ll R = r / G;
        if(L > R){
            cout << "-1 -1\n";
            continue;
        }
        ll ansA = -1, ansB = -1;
        for(ll d = 0; d <= 100 && L + d <= R; d++){
            for(ll i = 0; i <= d; i++){
                ll j = d - i;
                ll a = L + i;
                ll b = R - j;
                if(a > b) continue;
                if(__gcd(a, b) == 1){
                    ansA = a; ansB = b;
                    break;
                }
            }
            if(ansA != -1) break;
        }
        if(ansA == -1){
            cout << "-1 -1\n";
        }else{
            cout << ansA * G << " " << ansB * G << endl;
        }
    }
    return 0;
}
