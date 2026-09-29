#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll zero = count(s.begin(), s.end(), '0');
        ll one = s.size() - zero;
        ll usedZero = 0, usedOne = 0, length = 0;
        for(char current : s){
            if(current == '0'){
                if(usedOne == one) break;
                usedOne++;
            }else{
                if(usedZero == zero) break;
                usedZero++;
            }
            length++;
        }
        cout << s.size() - length << endl;
    }
    return 0;
}
