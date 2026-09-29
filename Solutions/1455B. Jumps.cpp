#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x; cin >> x;
        ll jump = 0, sum = 0;
        while(sum < x){
            jump++;
            sum += jump;
        }
        if(sum == x + 1) jump++;
        cout << jump << endl;
    }
    return 0;
}
