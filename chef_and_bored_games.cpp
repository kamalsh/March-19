/* Chef has recently been playing a lot of chess in preparation for the ICCT (International Chef Chess Tournament).

Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. He starts counting the number of squares with odd side length on his chessboard..

However, Chef is not satisfied. He wants to know the number of squares of odd side length on a generic N∗N chessboard.  */

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
