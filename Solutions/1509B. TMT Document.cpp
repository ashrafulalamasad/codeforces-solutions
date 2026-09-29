#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        ll totalT = count(s.begin(), s.end(), 'T');
        ll totalM = count(s.begin(), s.end(), 'M');
        ll leftT = 0, leftM = 0;
        bool possible = totalT == 2 * totalM;
        for(ll i = 0; i < n && possible; i++){
            if(s[i] == 'T') leftT++;
            else leftM++;
            if(leftM > leftT || totalM - leftM > totalT - leftT) possible = false;
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
