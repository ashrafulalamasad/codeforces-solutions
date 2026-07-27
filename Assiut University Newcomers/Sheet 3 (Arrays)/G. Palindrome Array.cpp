#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    bool isPalindrome = true;
    for(ll i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - 1 - i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
