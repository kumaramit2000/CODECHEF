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
       ll n;
       cin>>n;
       string origion;
       cin>>origion;
       ll sum=0;
       for(int i=0;i<n;i++)
       {
           string x;
           cin>>x;
               if(x=="CONTEST_WON")
               {
                   ll rank;
                   cin>>rank;
                   sum+=300;
                   if(rank<20)
                   {
                       sum+=(20-rank);
                   }
               }
               else if(x=="TOP_CONTRIBUTOR")
               {
                   sum+=300;
               }
               else if(x=="BUG_FOUND")
               {
                   ll sevirty;
                   cin>>sevirty;
                   sum+=sevirty;
               }
               else if(x=="CONTEST_HOSTED")
               {
                   sum+=50;
               }
       }
       if(origion=="INDIAN")
       {
           cout<<sum/200<<endl;
       }
       else
       {
           cout<<sum/400<<endl;
       }
    }
	return 0;
}
