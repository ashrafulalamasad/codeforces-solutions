#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];
        ll t2 = count(arr.begin(), arr.end(),2);
        if(t2 == 0){
            cout << 1 << endl;
            continue;
        }else if(t2 % 2 == 1){
            cout << -1 << endl;
            continue;
        }else if(t2 % 2 == 0){
            ll pos = -1, mid = t2/2, cnt = 0;
            for(ll i = 0; i < n; i++){
                if(arr[i] == 2){
                    cnt++;
                }
                if(cnt == mid){
                    pos = i;
                    break;
                }
            }
            cout << pos + 1 << endl;
        }
    }
    return 0;
}
