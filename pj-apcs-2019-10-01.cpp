#include <iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		ll sum1=0;
		ll u1[n];
		for(int i=0;i<n;i++){
			cin>>u1[i];
		}
		for(int i=3;i<n;i++){
			sum1=0;
			if(abs(u1[i]-u1[i-1])<5) continue;
			if(abs(u1[i]-u1[i-1])>=5){
				for(int j=1;j<=3;j++){
					sum1+=u1[i-j];
				}
				u1[i]=sum1-max(u1[i-3],max(u1[i-2],u1[i-1]))-min(u1[i-3],min(u1[i-2],u1[i-1]));
			}
		}
		for(int i=0;i<n-1;i++) cout<<u1[i]<<" ";
		cout<<u1[n-1];
		cout<<endl;	
	}

	return 0;
}
