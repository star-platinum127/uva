#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define maxn 100010
int arr[maxn];
bool b[maxn];
int can[maxn];
int ans[maxn];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		b[arr[i]]=1;
	}
	for(int i=0;i<=n;i++){
		if(!b[i]) can[++cnt]=i;
	}
	cnt=0;
	arr[0]=arr[1];
	for(int i=1;i<=n;i++){
		if(arr[i]!=arr[i-1]) ans[i]=arr[i-1];
		else ans[i]=can[++cnt];
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
