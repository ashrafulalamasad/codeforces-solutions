#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        ll highest = 0, secondHighest = 0;
        for(ll bit = 62; bit >= 0; bit--){
            if(n & (1LL << bit)){
                if(highest == 0) highest = 1LL << bit;
                else if(secondHighest == 0) secondHighest = 1LL << bit;
            }
        }
        bool possible = secondHighest != 0 && ((m & highest) || m < 2 * secondHighest);
        if(!possible){
            cout << -1 << endl;
            continue;
        }
        vector<ll> answer = {n, m};
        if((m & highest) == 0 && (m & secondHighest) == 0){
            answer = {n, m ^ secondHighest, m};
        }
        cout << answer.size() - 1 << endl;
        for(ll value : answer) cout << value << " ";
        cout << endl;
    }
    return 0;
}
