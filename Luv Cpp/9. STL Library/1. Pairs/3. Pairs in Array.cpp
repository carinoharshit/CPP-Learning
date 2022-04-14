// Initilizing pair wise array to maintain relation b/w 2 arrays
#include <bits/stdc++.h>
using namespace std;

int main(){
	// int a[]={1,2,3};
	// int b[]={2,3,4};
	pair<int, int> p_arr[3];
	p_arr[0] = {1,2};
	p_arr[1] = {2,3};
	p_arr[2] = {3,4};

	for(int i=0; i<3; i++){
		cout << p_arr[i].first << " " << p_arr[i].second << endl;	
	}

	cout << "After Swapping:" << endl;

	swap(p_arr[0], p_arr[2]);
	for(int i=0; i<3; i++){
		cout << p_arr[i].first << " " << p_arr[i].second << endl;	
	}
} 

/* 

INPUT:

OUTPUT: 
1 2
2 3
3 4
After Swapping:
3 4
2 3
1 2

*/
