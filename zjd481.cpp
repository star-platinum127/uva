#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll aa[101][101],bb[101][101],cc[101][101];
int main(int argc, char** argv) {
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		if(b!=c) cout<<"Error";
		else{
			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++) cin>>aa[i][j];
			}
			for(int i=0;i<c;i++){
				for(int j=0;j<d;j++) cin>>bb[i][j];
			}
			for(int i=0;i<a;i++){
				for(int j=0;j<d;j++){
					cc[i][j]=0;
					for(int k=0;k<c;k++){
						cc[i][j]+=aa[i][k]*bb[k][j];
					}
					cout<<cc[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
