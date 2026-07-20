#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, count = 1; cin >> n;
    string prev, curr; cin >> prev;
    for(ll i=1; i<n; i++){
        cin >> curr;
        if(curr != prev){
            count++;
        }
        prev = curr;
    }
    cout << count << endl;
    return 0;
}
