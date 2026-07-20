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
        unordered_map<ll, ll> memo;
        while(true){
            if(n <= 3){
                cout << 1 << endl;
                break;
            }
            if(memo.find(n) != memo.end()){
                cout << memo[n] << endl;
                break;
            }
            ll result = 1;
            while(n > 3){
                result *= 2;
                n /= 4;
            }
            memo[n] = result;
            cout << result << endl;
            break;
        }
    }
    return 0;
}
