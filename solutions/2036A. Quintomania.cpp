#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> notes(n);
        for(ll i = 0; i < n; i++) cin >> notes[i];
        bool perfect = true;
        for(ll i = 1; i < n; i++){
            ll diff = abs(notes[i] - notes[i - 1]);
            if (diff != 5 && diff != 7){
                perfect = false;
                break;
            }
        }
        if(perfect) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
