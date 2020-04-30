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
       ll n,k;
       cin>>n>>k;
       if(n==0)
       {
           ll ans=0;
           ans=(k-1)*(k-1)+(k-1);
           ans=ans%MODM;
           cout<<ans<<endl;
       }
       else
       {
           ll ans=0;
           ll start=((n*n))%MODM;
           if(k==1)// if k=1;
           {
               cout<<start<<endl;
           }
           else// other cases if k!=1;
           {
               if(k%2==0)// no is even times;
               {
                  ll turn=(n+(k/2)-1);
                  ll add=((turn)*(turn+1))%MODM;
                  ans=(add+(n))%MODM;
               }
               else//no is odd times;
               {
                   ll turn=(n+(k/2)-1);
                   ll add=((turn)*(turn+1))%MODM;
                   ans=(add+n)%MODM;
                   ll ur=k/2;
                   ans=(ans+(2*ur))%MODM;
               }
               cout<<ans<<endl;
            }
        }
    }
	return 0;
}
