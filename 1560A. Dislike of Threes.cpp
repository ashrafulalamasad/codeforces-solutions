#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k, cnt = 0, i = 1; cin >> k;
        while(1){
            if(i % 3 != 0 && i % 10 != 3) cnt++;
            if(cnt == k){
                cout << i << endl;
                break;
            }
            i++;
        }
    }
    return 0;
}
