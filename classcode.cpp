#include <iostream>
#include <vector>

int main(){
	vector <int> v2={10,14,32,64,16};
	
	for(int a=0; a<4; a++){
		cout << v2[a] << " ";
	}
	
	for(int i=0; i<4; i++){
		v2.pop_back();
	}
	
	for(int j=0; j<4; j++){
		v2.push_back(4);
	}
	
	for(int z=0; z<4; z++){
		cout << v2[z] << " ";
	}
	
	return 0;
}
