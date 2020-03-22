#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int o1[2]={0,0};
	int o2[2]={0.0};
	int a1,a2;
	for(int i=0;i<n;i++){
		cin>>a1>>a2;
		if(a1==1){
			o1[a2]++;
		}else{
			o2[a2]++;
		}
	}
	int b1,b2;
	cin>>b1,b2;
	if(b1==1){
		if(o1[0]>o1[1]) cout<<0<<" ";
		else cout<<1<<" ";
	}else{
		if(o2[0]>o2[1]) cout<<0<<" ";
		else cout<<1<<" ";
	}
	if(b2==1){
		if(o1[0]>o1[1]) cout<<0<<endl;
		else cout<<1<<endl;
	}else{
		if(o2[0]>o2[1]) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}
