#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string s; cin >> s;
    ll count1 = 0, count2 = 0;
    for(char c:s){
        if(c=='A'){
            count1++;
        }else{
            count2++;
        }
    }
    cout << ((count1==count2)? "Friendship" : (count1>count2)? "Anton" : "Danik") << endl;
    return 0;
}
