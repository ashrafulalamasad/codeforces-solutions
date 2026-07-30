#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool first = false;
ll idx = 0;

void printDigits(const string &num){
    if(idx == num.size()){
        idx = 0;
        cout << endl;
        first = false;
        return;
    }
    if(first) cout << " ";
    first = true;
    cout << num[idx];
    idx++;
    printDigits(num);
}

int main()
{
    fast;
    tc{
        string num; cin >> num;
        printDigits(num);
    }
    return 0;
}
