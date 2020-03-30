/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
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
       ll g;
       cin>>g;
       for(int kk=0;kk<g;kk++)
       {
       ll i,n,q;
       cin>>i>>n>>q;
       ll hc=0,tc=0;
       if(i==1)
       {
           if(n%2==0)
           {
               hc=n/2;
               tc=n/2;
           }
           else
           {
               hc=n/2;
               tc=n/2+1;
           }
       }
       else
       {
           if(n%2==0)
           {
               hc=n/2;
               tc=n/2;
           }
           else
           {
               hc=n/2+1;
               tc=n/2;
           }
       }
       if(q==1)
       {
           cout<<hc<<endl;
       }
       else
       {
           cout<<tc<<endl;
       }
       }
    }
	return 0;
}
