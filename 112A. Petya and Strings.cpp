#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s1, s2; cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    cout << ((s1==s2) ? 0 : (s1<s2) ? -1 : 1) << endl;
    return 0;
}
