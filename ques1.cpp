// Implement the Binary search algorithm regarded as a fast search algorithm with 
// run-time complexity of Ο(log n) in comparison to the Linear Search.

# include <iostream>
using namespace std; 

void searcharray (int A[], int size , int num, int left, int right){
int mid;
while (left <= right){
mid= (left +right)/2;
if(A[mid]== num){
cout<<"Element found at index: "<<mid;
break;
}
else if (A[mid]> num){
right= mid-1;
}
else if(A[mid] < num){
left= mid+1;
}
}
}

int main (){
int arr[]= {1,2,3,4,5};
int n = sizeof(arr)/ sizeof(int);
int ele;
cout<<"Enter the num: ";
cin>>ele;
int l=0, r=n;
searcharray (arr, n, ele, l,r);
return 0;
}
