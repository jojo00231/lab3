#include<iostream>
using namespace std;

int main()
{
   float x , n=6 , sum ;
   
   while(n<=19)
   {
       x = 1/n ;
       sum=sum+x ;
       n=n+1 ;
       
   }
    cout << sum ;

    return 0 ;
}