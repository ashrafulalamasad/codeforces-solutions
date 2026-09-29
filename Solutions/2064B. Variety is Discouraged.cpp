#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), frequency(n + 1, 0);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            frequency[a[i]]++;
        }
        ll bestLength = 0, bestLeft = -1, bestRight = -1, currentLength = 0;
        for(ll i = 0; i < n; i++){
            if(frequency[a[i]] == 1) currentLength++;
            else currentLength = 0;
            if(currentLength > bestLength){
                bestLength = currentLength;
                bestLeft = i - currentLength + 1;
                bestRight = i;
            }
        }
        if(bestLength == 0) cout << 0 << endl;
        else cout << bestLeft + 1 << " " << bestRight + 1 << endl;
    }
    return 0;
}
