#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
main(){
    int n;
    cout<<"Enter length of array";
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    int target;
    cout<<"Enter the element to search";
    cin>>target;
    if(binary_search(num.begin(),num.end(),target)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    // int mid,low,high;
    // low=0;
    // high=n-1;
    // while (low<=high)
    // {
    //  mid=(low+high)/2;
    //  if(num[mid]==target){
    //     cout<<"Element found";
    //     break;
    //  }
    //  else if(num[mid]<target){
    //     low=mid+1;
    //  }   
    //  else {
    //     high=mid-1;
    //  }
    // }
    // if(low>high){
    //     cout<<"Element not found";
    // }
    
    
    }