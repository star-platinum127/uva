#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	double arr[205][205];
	double rea[205][205];
	while(cin>>n){
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++) cin>>arr[i][j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				rea[i][j]=pow(arr[i][0]-arr[j][0],2)+pow(arr[i][1]-arr[j][1],2);
			}
		}
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					rea[i][j]=min(rea[i][j],max(rea[i][k],rea[k][j]));
				}
			}
		}
		cout<<fixed<<setprecision(3)<<sqrt(rea[0][1])<<endl;
	}
	return 0;
}
