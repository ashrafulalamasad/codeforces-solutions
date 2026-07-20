#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<ll> determineDigits(ll n, ll d){
    vector<ll> ans; ans.push_back(1);
    if(n >= 3 || d % 3 == 0){
        ans.push_back(3);
    }
    if(d == 5){
        ans.push_back(5);
    }
    if(n >= 3 || (n == 2 && d == 7)){
        ans.push_back(7);
    }
    if(n >= 6){
        ans.push_back(9);
    }else{
        ll factorial = 1;
        ll i = 2;
        while(i <= n){
            factorial *= i;
            i++;
        }
        if((factorial * d) % 9 == 0){
            ans.push_back(9);
        }
    }
    return ans;
}

int main()
{
    fast;
    tc{
        ll n, d; cin >> n >> d;
        vector<ll> ans = determineDigits(n, d);
        for(ll digit : ans){
            cout << digit << " ";
        }
        cout << endl;
    }
    return 0;
}
