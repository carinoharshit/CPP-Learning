/*--------------------(Copying and Referencing Pair)--------------------*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	pair<int, string> p;
	p = {2, "abcd"};
	
	//copying p to p1
	pair<int, string> p1 = p;  
	p1.first = 3;
	p1.second = "xyz";
	cout << p.first << " " << p.second << endl;

  //we used reference '&' hence value can be changed
	pair<int, string> &p2 = p;  
	p2.first = 3;
	p2.second = "xyz";
	cout << p.first << " " << p.second << endl;
}

/* 

INPUT:

OUTPUT: 
2 abcd
3 xyz

*/
