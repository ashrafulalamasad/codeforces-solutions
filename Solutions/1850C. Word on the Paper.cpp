#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        char grid[8][8]; string word;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> grid[i][j];
            }
        }
        for(int j=0; j<8; j++){
            for(int i=0;i<8;i++){
                if(grid[i][j] != '.') word += grid[i][j];
            }
        }
        cout << word << endl;
    }
    return 0;
}
