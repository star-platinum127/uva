#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
bool arr[10001];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int nw=0;
	int fin=n;
	for(int i=0;i<n;i++) arr[i]=0;
	while(fin!=1){
		for(int i=0;i<m;i++){
			nw++;
			if(nw>n) nw=1;
			while(arr[nw-1]!=0){
				nw++;
				if(nw>n) nw=1;
			}
			if(i==m-1){
				arr[nw-1]=1;
				fin--;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}
