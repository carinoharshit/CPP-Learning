/*--------------------(Pair Initilization)--------------------*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string> p;

  // Initilization Method-1
	p = make_pair(2, "abc");
	cout << p.first << " " << p.second << endl;
	
	// Initilization Method-2
	p = {4, "xyz"};
	cout << p.first << " " << p.second << endl;
}

/* 

INPUT:

OUTPUT: 
2 abc
4 xyz

*/
