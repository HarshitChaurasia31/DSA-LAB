#include <iostream>
#include <vector>
using namespace std;
main(){
    vector <int> num={1,2,3,4,5};
    for (int var:num){
        cout<<var<<"\n";
    }
    // num.insert(num.begin()+1,7);
    // for (int var:num){
    //     cout<<var<<"\n";
    // }
    // num.insert(num.begin()+2,3,8);
    //  for (int var:num){
    //     cout<<var<<"\n";
    // }
    num.erase(num.begin()+1);
     for (int var:num){
        cout<<var<<"\n";
    }
}