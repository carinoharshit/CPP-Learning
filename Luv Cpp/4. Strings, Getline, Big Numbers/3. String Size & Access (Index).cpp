// NOTE: Index value always starts from 0 in c++ by default


/*------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    cout << str[0];    // We will get 0th index value of str, i.e. H
}
// OUTPUT: H


/*------------------------------------------------*/
// Assigning new values at particular indexes...
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    str[0] = 'a';    // we can't assign in "double quotes" as str[0] means one character
    cout << str;
}
// OUTPUT: aello  // zeroth index value is replaced by character 'a'


/*------------------------------------------------*/
// String SIZE Function
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    cout << str.size();    //  Count size of str..
}
// OUTPUT: 5


/*------------------------------------------------*/
// Iterating String through loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    for(int i = 0; i < str.size(); ++i){
        cout << str[i];
    }
}
// OUTPUT: Hello


/*------------------------------------------------*/
