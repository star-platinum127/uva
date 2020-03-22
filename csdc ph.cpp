#include <iostream>
#include<algorithm>
#include<iomanip>
#include<cmath> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
bool tr(int s,int k){
	int t;
	if(s==1 || k==1) return true;
	if((k==0||s==0) && s!=1 && k!=1) return false;
	while(true){
		t=s%k;
		if(t==0) break;
		else{
			s=k;
			k=t;
		}
	}
	if(k>1) return false;
	else return true;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n){
		double c=0;
		if(n==0) break;
		double fi=n*(n-1)/2;
		int sc[n];
		for(int i=0;i<n;i++) cin>>sc[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(tr(sc[i],sc[j])==true) c++;
			}
		}
		double final1;
		final1=sqrt(6*fi/c);
		if(c==0) cout<<"No estimate for this data set."<<endl;
		else cout<<fixed<<setprecision(6)<<final1<<endl;		
	}
	return 0;
}
