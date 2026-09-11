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
        bool possible = true;
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            ll position = i + 1;
            while(position % 2 == 0){
                position /= 2;
            }
            while(value % 2 == 0){
                value /= 2;
            }
            if(position != value){
                possible = false;
            }
        }
        if(possible){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
