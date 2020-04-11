#include <iostream>
#include <cstring>
using namespace std;

// map info 
int map_size;
char map[20][20];

	/* 根據現在的位置與接下來的方向指令，判斷下一步合不合法。
	（這個函式可用於 isArrived 裡） */
bool isValid(int current[], char dir){
	if(dir=='U') current[0]-=1;
	else if(dir=='D') current[0]+=1;
	else if(dir=='R') current[1]+=1;
	else if(dir=='L') current[1]-=1;
	if(current[0]<0 || current[1]<0 || current[0]>=map_size || current[1]>=map_size) return false;
	else if(map[current[0]][current[1]]=='o') return false;
	else return true;		
}

	/* 最終是否可以成功取得口罩 */
bool isArrived(int start[], int end[], char command[]){
	for(int i=0;i<strlen(command);i++){
		if(isValid(start,command[i])==true){
			if(start[0]==end[0] &&start[1]==end[1]) return true;
		}else return false;
	}
	return false;
}

	/* Your code will be put here */

	int main() {

		char command[100];
		int start[2]; // position: (start[0], start[1])
		int end[2];

		// read map size
		cin>>map_size;

		// read map
		for (int i=0; i<map_size; i++) {
			for (int j=0; j<map_size; j++) {
				cin>>map[i][j];
			}
		}

		// read start and end position
		cin>>start[0]>>start[1];
		cin>>end[0]>>end[1];

		// read command
		cin>>command;

		if (isArrived(start, end, command)) 
			cout<<"Get the mask";
		else cout<<"Cry";
	}
