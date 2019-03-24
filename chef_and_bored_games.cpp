#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T,N;
   cin>>T;
   while(T--)
   {
    int sum=0;
    cin>>N;
    if(N%2==0)
    {
      while(N>=2)
      {
    	sum = sum+pow(N,2);
    	N=N-2;
       }
    }
    else
    
      while(N>=1)
      {
      	sum = sum +pow(N,2);
      	N=N-2;
      }
      
      cout<<sum<<endl;
   }
   return 0;
}
