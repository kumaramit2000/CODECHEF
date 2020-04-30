/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
#define pb push_back
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       ll n=s.length();
       string ls="";
       string rs="";
       for(int i=1;i<n;i++)
       {
           ls+=s[i];
       }
       ls+=s[0];
       rs+=s[n-1];
       for(int i=0;i<n-1;i++)
       {
           rs+=s[i];
       }
       if(ls==rs)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
	return 0;
}
