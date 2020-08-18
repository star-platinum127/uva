#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int maxi=0;
	cin>>n;
	int tmp,ans,cnt=0;
	for(int i=0;i<n;i++){
		cin>>tmp;
		cnt=(cnt>0)?cnt+tmp:tmp;
		maxi=max(maxi,cnt);
	}
	cout<<maxi<<endl;
	return 0;
}
