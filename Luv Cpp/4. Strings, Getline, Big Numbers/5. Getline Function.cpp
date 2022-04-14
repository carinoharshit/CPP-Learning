// getline(cin ,s) can prints as it is value of 'cin'....

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; // testcase
    cin >> t;
    cin.ignore();  // ingnore cursor(/n)
    while(t--){
        string s;
        getline(cin, s);  // prints as it is 
        cout << s << endl;
    }
}


/* 

OUTPUT: 
2
as    ed
as  ds  cs

INPUT:
as    ed
as  ds  cs

*/
