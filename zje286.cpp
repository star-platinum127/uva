#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ll sum1=0;
	ll sum2=0;
	int c=0,c2=0;
	ll sc1,sc2;
	for(int i=0;i<4;i++){
		cin>>sc1;
		sum1+=sc1;
	}
	for(int i=0;i<4;i++){
		cin>>sc1;
		sum2+=sc1;
	}
	cout<<sum1<<":"<<sum2<<endl;
	if(sum1>sum2) c++;
	else c2++;
	sum1=0;
	sum2=0;
	for(int i=0;i<4;i++){
		cin>>sc1;
		sum1+=sc1;
	}
	for(int i=0;i<4;i++){
		cin>>sc1;
		sum2+=sc1;
	}
	cout<<sum1<<":"<<sum2<<endl;
	if(sum1>sum2) c++;
	else c2++;
	if(c>c2) cout<<"Win";
	else if(c<c2) cout<<"Lose";
	else cout<<"Tie";
	return 0;
}
