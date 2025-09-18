#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
main(){
    // int a;
    // use std:cout/cin when not using namespace std
    // cout<<"enter a number";
    // cin>>a;
    // cout<<"The number is:"<<a;
    // vector<data type> variable name;
    vector<int> num={1,5,3,2,4};
    // for(int i=0;i<num.size();i++){
    //     cout<<num[i]<<"\n";
    // }
    // cout<<num.front()<<"\n"; //to access first element in a vector
    // cout<<num.back()<<"\n";  //to access last element in a vector
    num.push_back(6); //to add element to last
    // for(int i=0;i<num.size();i++){
    //     cout<<num.at(i)<<"\n";
    // }
    num.pop_back(); //to remove an element if no value given it will delete the last one
    // for(int i=0;i<num.size();i++){
    //     cout<<num[i]<<"\n";
    // }
    // cout<<num.empty(); //check for an empty vector 0 false 1 true
    // for (int var:num){ //var is intialize with same data tyep as of vector 
    //     cout<<var<<"\n";
    // }
    vector<int> num1;
    num1.assign(num.begin(),num.end()); //assign value to vector from some other vector
    for(int i=0;i<num1.size();i++){
        cout<<num1[i]<<"\n";
    }
    cout<<endl;
    num1.assign(3,7);//assign value 3= no of times 7=value to be assigned
    for(int var:num1){
        cout<<var<<"\n";
    }
    //swap to do 
    std::sort(num.begin(),num.end()); //sort
    for(int var:num){
        cout<<var<<"\n";
    }
}