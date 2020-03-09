#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
bool si=false;
int main(int argc, char** argv) {
	int x;
	int c=0;
	cin>>x;
	int n;
	cin>>n;
	int ri[100];
	for(int i=1;i<=n;i++) cin>>ri[i];
	for(int i=1;i<=n;i++){
		if(i>=3){
			if(ri[i-2]==ri[i-1]){
				if(ri[i-1]==5) x=2;
				else if(ri[i-1]==2) x=0;
				else x=5;
			}
			else x=ri[i-1];
		}else if(i==2) x=ri[i-1];
		cout<<x<<" ";
		if((x==5 && ri[i]==0) || (x==2 && ri[i]==5) || (x==0 && ri[i]==2)){
			c++;
			cout<<": Lost at round "<<c;
			si=true;
			break;
		} 
		else if((x==0 && ri[i]==5) || (x==5 && ri[i]==2) || (x==2 && ri[i]==0)){
			c++;
			cout<<": Won at round "<<c;
			si=true;
			break;
		}else c++; 
	}
	if(si==false) cout<<": Drew at round "<<n;
	return 0;
}
