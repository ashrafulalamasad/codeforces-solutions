#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        if(k < n || k > 2 * n - 1){
            cout << -1 << endl;
        }else{
            ll t = 2 * n - k, cur = k + 1;
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < n; j++){
                    if(i == j && i < t){
                        cout << i + 1 << " ";
                    }else if(j == 0 && i >= t){
                        cout << i + 1 << " ";
                    }else if(i == 0 && j >= t){
                        cout << n + 1 + j - t << " ";
                    }else{
                        cout << cur << " ";
                        cur++;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}
