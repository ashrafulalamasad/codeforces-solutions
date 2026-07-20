#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            ans += arr[i];
        }
        bool two_minus = false, one_minus = false;
        for(ll i = 0; i < n; i++){
            if(i+1 < n && arr[i] == -1 && arr[i+1] == -1){
                two_minus = true;
                break;
            }else if(arr[i] == -1){
                one_minus = true;
            }
        }
        if(two_minus){
            ans -= (-2);
            ans += 2;
        }else if(!one_minus){
            ans -= 4;
        }
        cout << ans << endl;
    }
    return 0;
}
