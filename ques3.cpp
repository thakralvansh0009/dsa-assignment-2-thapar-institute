//Given an array of n-1 distinct integers in the range of 1 to n, find the missing number 
// in it in a Sorted Array

# include <iostream>
using namespace std;

int missingnum(int A[], int size){
int ans;
for(int i=0; i<size; i++){
if(A[i] != i+1){
ans= i+1;
break;
}}
return ans;
}

int main (){
int arr[]= {1,2,3,5,5};
int n= sizeof(arr)/ sizeof(int);
int ele= missingnum(arr, n);
cout<<"missing number is : "<<ele;
return 0;
}
