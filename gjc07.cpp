#include <iostream>
#include<algorithm>
using namespace std; 
typedef long long ll;
int main() {
	ll n,m,d1,d2;
	cin>>n>>m>>d1>>d2;
	int k=0;
	while(true){
		k++;
		cout<<"Round "<<k<<":"<<endl;
		cout<<"You hit Dragon "<<m<<" points."<<endl;
		d1=d1-m;
		if(d1<=0){
			cout<<"You:"<<n<<" Dragon:"<<0<<endl;
			cout<<"You Win!"<<endl;
			break;
		}else cout<<"You:"<<n<<" Dragon:"<<d1<<endl; 
		cout<<"Dragon hits You "<<d2<<" points."<<endl;
		n=n-d2;
		if(n<=0){
			cout<<"You:"<<0<<" Dragon:"<<d1<<endl;
			cout<<"You Lose!"<<endl;
			break;
		}else cout<<"You:"<<n<<" Dragon:"<<d1<<endl;
		
	} 
	return 0;
}
