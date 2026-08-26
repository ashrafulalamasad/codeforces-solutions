#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
        ll s[4] = {s1, s2, s3, s4};
        ll max_idx = 0;
        for(ll i = 1; i < 4; i++) if(s[i] > s[max_idx]) max_idx = i;
        ll second_idx = (max_idx == 0) ? 1 : 0;
        for(ll i = 0; i < 4; i++){
            if(i != max_idx && s[i] > s[second_idx]) second_idx = i;
        }
        if((max_idx < 2) != (second_idx < 2)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
