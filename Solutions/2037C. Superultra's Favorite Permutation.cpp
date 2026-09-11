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
        if(n < 5){
            cout << -1 << endl;
        }else{
            for(ll i = 2; i <= n; i = i + 2){
                if(i != 4){
                    cout << i << " ";
                }
            }
            cout << 4 << " " << 5 << " ";
            for(ll i = 1; i <= n; i = i + 2){
                if(i != 5){
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
