#include<iostream>
using namespace std;

int main(){
int arr[100],n,key;

cout<<"Enter number of element: ";
cin>>n;

cout<<"Enter element:\n";
for(int i=0;i<n;i++){
cin>>arr[i];
}

cout<<"Enter element to search:";
cin>>key;

int low=0,high=n-1,mid, found=0;

while(low<=high){
mid=(low+high)/2;

if (arr[mid]==key){
cout<<"Element found at position:"<<mid;
found=1;
break;
}
else if(arr[mid]<key){
low=mid+1;
}
else{
high=mid-1;
}
}
return 0;
}


