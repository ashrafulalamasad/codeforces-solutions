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
        vector<ll> arr(n), freq(n+1, 0);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        bool found = false;
        for(ll i = 0; i < n; i++){
            if(freq[arr[i]] >= 3){
                cout << arr[i] << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << "-1" << endl;
        }
    }
    return 0;
}
