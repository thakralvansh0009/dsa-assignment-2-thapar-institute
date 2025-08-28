/*Find two numbers in an array whose difference equals K. Given an array arr[] and a positive 
integer k, the task is to count all pairs (i, j) such that i < j and absolute value of 
(arr[i] - arr[j]) is equal to k. */

# include <iostream>
#include <cstdlib>
using namespace std;

int countpairs (int A[], int size,int num, int total){
for(int i=0; i<size; i++){
for(int j=i+1; j<size; j++){
if( abs(A[i]- A[j])==num){
total++;
}}}
return total;
}

int main () {
int arr[]= {2,4,6,8,3,5};
int n= sizeof(arr)/ sizeof(int);
int k,count=0;
cout<<"Enter the value of k: ";
cin>>k;
int ans= countpairs(arr,n,k,count);
cout<<"The no. of total pairs are: "<<ans;
return 0;
}
