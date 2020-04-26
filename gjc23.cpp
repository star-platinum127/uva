#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	double max1=-1e9;
	double x1,y1;
	int id;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x1>>y1;
		if(x1*x1+y1*y1>max1){
			max1=x1*x1+y1*y1;
			id=i+1;
		} 
	}
	cout<<id<<" "<<max1<<endl;
	return 0;
}
