#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll lo=2, hi=999;
        while(lo < hi){
            ll mid = (lo+hi)/2;
            cout << "? 1 " << mid << endl;
            cout.flush();
            ll res; cin >> res;
            if(res == mid) lo = mid+1;
            else hi = mid;
        }
        cout << "! " << lo << "\n";
        cout.flush();
    }
    return 0;
}
