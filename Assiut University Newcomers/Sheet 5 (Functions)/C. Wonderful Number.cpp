#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string toBinary(ll n){
    string res = "";
    while(n > 0){
        res += (n % 2) + '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

bool isPalindrome(string s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main()
{
    fast;
    ll n; cin >> n;
    if(n % 2 == 1 && isPalindrome(toBinary(n))){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
