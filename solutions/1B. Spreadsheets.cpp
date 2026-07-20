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
        ll r, c;
        if(sscanf(s.c_str(), "R%lldC%lld", &r, &c) == 2){
            string col_str = "";
            while(c > 0){
                col_str += (char)('A' + (c - 1) % 26);
                c = (c - 1) / 26;
            }
            reverse(col_str.begin(), col_str.end());
            cout << col_str << r << "\n";
        }else{
            string col_letters = "";
            ll row_num = 0;
            int i = 0;
            while(isalpha(s[i])){
                i++;
            }
            col_letters = s.substr(0, i);
            row_num = stoll(s.substr(i));
            ll col_num = 0;
            for(char ch : col_letters){
                col_num = col_num * 26 + (ch - 'A' + 1);
            }
            cout << "R" << row_num << "C" << col_num << "\n";
        }
    }
    return 0;
}
