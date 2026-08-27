#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, x; cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl << n << endl;
            for(ll i = 0; i < n; i++){
                cout << 1 << " \n"[i == n - 1];
            }
        }else if(k == 1){
            cout << "NO" << endl;
        }else if(k == 2){
            if(n % 2 == 0){
                cout << "YES" << endl << n / 2 << endl;
                for(ll i = 0; i < n / 2; i++){
                    cout << 2 << " \n"[i == n / 2 - 1];
                }
            }
            else cout << "NO" << endl;
        }else{
            if(n == 1){
                cout << "NO" << endl;
            }else if(n % 2 == 0){
                cout << "YES" << endl << n / 2 << endl;
                for(ll i = 0; i < n / 2; i++){
                    cout << 2 << " \n"[i == n / 2 - 1];
                }
            }else{
                cout << "YES" << endl << 1 + (n - 3) / 2 << endl << 3 << " ";
                for(ll i = 0; i < (n - 3) / 2; i++){
                    cout << 2 << " \n"[i == (n - 3) / 2 - 1];
                }
            }
        }
    }
    return 0;
}
