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
       ll k,a,b;
       cin>>k>>a>>b;
       if(k==2)
       {
           if((a+b)%3==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else if(k==3)
       {
           ll sum=(a+b)+(a+b)%10;
           if(sum%3==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else
       {
           k-=3;
           ll ssum=a+b;
           ll round_2486=k/4;
           ll reminder=k%4;
           ll totalsum=0;
           if(ssum%5==0)
           {
               totalsum=ssum+ssum%10;
           }
           else if(ssum%5==1)
           {
               totalsum+=ssum+ssum%10;
               totalsum+=round_2486*20;
               if(reminder==1)
               {
                   totalsum+=2;
               }
               else if(reminder==2)
               {
                   totalsum+=6;
               }
               else if(reminder==3)
               {
                   totalsum+=14;
               }
           }
           else if(ssum%5==2)
           {
               totalsum+=ssum+ssum%10;
               totalsum+=round_2486*20;
               if(reminder==1)
               {
                   totalsum+=4;
               }
               else if(reminder==2)
               {
                   totalsum+=12;
               }
               else if(reminder==3)
               {
                   totalsum+=18;
               }
           }
           else if(ssum%5==3)
           {
               totalsum+=ssum+ssum%10;
               totalsum+=round_2486*20;
               if(reminder==1)
               {
                   totalsum+=6;
               }
               else if(reminder==2)
               {
                   totalsum+=8;
               }
               else if(reminder==3)
               {
                   totalsum+=12;
               }
           }
           else if(ssum%5==4)
           {
               totalsum+=ssum+ssum%10;
               totalsum+=round_2486*20;
               if(reminder==1)
               {
                   totalsum+=8;
               }
               else if(reminder==2)
               {
                   totalsum+=14;
               }
               else if(reminder==3)
               {
                   totalsum+=16;
               }
           }
           if(totalsum%3==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
    }
	return 0;
}
