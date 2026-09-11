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
        if(n % 7 == 0){
            cout << n << endl;
        }else{
            ll base = n / 10 * 10;
            for(ll d = 0; d <= 9; d++){
                if((base + d) % 7 == 0){
                    cout << base + d << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
