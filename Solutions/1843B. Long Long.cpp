#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0, ops = 0; cin >> n;
        bool inSeg = false;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum += abs(x);
            if(x < 0){
                if(!inSeg){
                    ops++;
                    inSeg = true;
                }
            }else if(x > 0){
                inSeg = false;
            }
        }
        cout << sum << " " << ops << endl;
    }
    return 0;
}
