#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size(), diff = 0; string x(n, '0'), y(n, '0');
        for(ll i = n - 1; i >= 0; i--){
            ll d = s[i] - '0';
            if(d % 2 == 0){
                x[i] = '0' + d / 2;
                y[i] = '0' + d / 2;
            }else{
                if(diff <= 0){
                    x[i] = '0' + (d + 1) / 2;
                    y[i] = '0' + (d - 1) / 2;
                    diff++;
                }else{
                    x[i] = '0' + (d - 1) / 2;
                    y[i] = '0' + (d + 1) / 2;
                    diff--;
                }
            }
        }
        cout << stoll(x) << " " << stoll(y) << "\n";
    }
    return 0;
}
