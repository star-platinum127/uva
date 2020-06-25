#include <iostream>  
#include<algorithm>  
using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
  
int main(int argc, char** argv) {  
    long long a,b,n,c,d=1,sum1,i;  
    cin>>a>>b>>n;  
    c=a/b;  
    cout<<c<<".";  
      
    for(i=0;i<n;i++){  
        d=(a*10)/b%10;  
        cout<<d;  
        a=(a*10)%b;  
    }  
      
}  
