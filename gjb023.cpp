#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void honai(int n,int top,int from,int to){
	if(n==top)cout<<"Ring "<<n<<" from "<<from<<" to "<<to<<endl;
	else{
		honai(n-1,top,from,6-(from+to));
		honai(n,n,from,to);
		honai(n-1,top,6-(from+to),to);
	}
}

int main(int argc, char** argv) {
	int d;
	cin>>d;
	honai(d,1,1,3);
	return 0;
}
