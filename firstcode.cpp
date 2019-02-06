#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector <int> v2 = {10,14,32,64,16};
	
	for(int i=o; i < 3; i++){
		v2.pop_back()
	}
	
	for(int j=0; j < 3; j++){
		v2.push_back(0);
	}
	
	for(int p = 0; p < v2.size(); p++){
		cout << v2[p] << " ";
	}
	
	return 0;
}
