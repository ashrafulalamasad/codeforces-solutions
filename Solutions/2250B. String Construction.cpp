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
        ll m = n - k;
        if(m == 1){
            cout << -1 << endl;
            continue;
        }
        ll E = k;
        ll countA = (m + 1) / 2;
        ll countB = m / 2;
        ll EA, EB;
        if(m % 2 == 0){
            if(E % 2 == 0){EA = E / 2; EB = E / 2;}
            else{EA = (E + 1) / 2; EB = (E - 1) / 2;}
        }else{
            if(E % 2 == 0){EA = E / 2; EB = E / 2;}
            else {EA = (E - 1) / 2; EB = (E + 1) / 2;}
        }
        vector<ll> lens(m,1);
        lens[0] += EA;
        if(countB > 0) lens[1] += EB;
        string s; s.reserve(n);
        for(ll i = 0; i < m; i++){
            char c = (i % 2 == 0) ? '0':'1';
            s.append(lens[i], c);
        }
        cout << s << endl;
    }
}
