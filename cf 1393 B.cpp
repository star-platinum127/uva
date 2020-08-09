#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
int v1,v3,v2,v4;
int arr[100005];
int bct[100005];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	flag=0;
	cin>>n;
	int maxi=-1e9;
	memset(bct,0,sizeof(bct));
	for(int i=0;i<n;i++){
		cin>>arr[i];
		bct[arr[i]]++;
		maxi=max(maxi,arr[i]);
	}
	int t;
	cin>>t;
	v1=0,v2=0,v3=0;
	for(int i=1;i<=maxi;i++){
		if(bct[i]>=8) v4++;
		else if(bct[i]>=6){
			v3++;
		} 
		else if(bct[i]>=4){
			v2++;
		}
		else if(bct[i]>=2){
			v1++;
		}
	}
	while(t--){
		char c;
		int buf;
		cin>>c>>buf;
		maxi=max(maxi,buf);
		if(c=='+')bct[buf]++;
		else bct[buf]--;
		if(c=='+'){
			if(bct[buf]==6){
				v3++;
				v2--;
			}
			else if(bct[buf]==8){
				v4++;
				v3--;
			}
			else if(bct[buf]==4){
				v2++;
				v1--;
			}
			else if(bct[buf]==2){
				v1++;
			}
		}else{
			if(bct[buf]==7){
				v4--;
				v3++;
			}
			else if(bct[buf]==5){
				v3--;
				v2++;
			}
			else if(bct[buf]==3){
				v2--;
				v1++;
			}
			else if(bct[buf]==1){
				v1--;
			}
		}
		if(flag==1 && c=='+'){
			cout<<"YES"<<endl;
			continue;
		}else flag=0;
		if(v3>0 && (v1>0 || v2>0 || v3>1)){
			cout<<"YES"<<endl;
			flag=1;
			continue;
		}
		else if(v2>1 || (v2>0 && v1>1) || v4>0){
			cout<<"YES"<<endl;
			flag=1;
			continue;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
