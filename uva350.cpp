#include <iostream>
#include<vector>
#include<algorithm>
using namespace std; 
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<ll> v,all;
int main(int argc, char** argv) {
	ll a,c=0,c1=0;
	ll z,i,m,l,new1;
	while(cin>>a){
		c+=1;
		v.push_back(a);
	}
	for(int i=0;i<4;i++){
		v.pop_back();
		c--;
	}
	for(int i=1;i<=c/4;i++){
		c1=0;
		l=v[3];
		z=v[0];
		ll q=v[1];
		m=v[2];
		new1=(z*l+q)%m;
		all.push_back(new1);
		while(count(all.begin(),all.end(),new1)==1){		
			new1=(z*new1+q)%m;
			all.push_back(new1);
			c1++;
		}	
		reverse(v.begin(),v.end());
		for(int j=0;j<4;j++){
			v.pop_back();
		}
		all.clear();
		reverse(v.begin(),v.end());
		if(i==4){
			cout<<"Case"<<" "<<i<<": "<<c1<<endl;
		}else{
			cout<<"Case"<<" "<<i<<": "<<c1<<endl;
		}
		
	}
	return 0;
}
