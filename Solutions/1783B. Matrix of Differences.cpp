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
        ll k, val, total = n * n;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(i % 2 == 0){
                    k = i * n + j;
                }else{
                    k = i * n + (n - 1 - j);
                }
                if(k % 2 == 0){
                    val = 1 + k / 2;
                }else{
                    val = total - k / 2;
                }
                if(j > 0){
                    cout << " ";
                }
                cout << val;
            }
            cout << endl;
        }
    }
    return 0;
}
