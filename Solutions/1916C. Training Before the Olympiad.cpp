#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0, odd = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum = sum + x;
            odd = odd + x % 2;
            if(i > 0){
                ll left = odd;
                ll loss = 0;
                if(left >= 2) left -= 2;
                else if(left == 1) loss++, left = 0;
                ll olya = i / 2;
                ll masha = (i - 1) / 2;
                ll rounds = min(masha, left / 3);
                loss += rounds;
                left -= 3 * rounds;
                masha -= rounds;
                if(masha > 0 && left > 0){
                    loss += left == 1 ? 1 : 2;
                    left = 0;
                }
                if(olya > (i - 1) / 2 && left > 0) loss++;
                cout << sum - loss << " ";
            }else cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
