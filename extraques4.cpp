/*Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort 
the array, i.e., put all 0s first, then all 1s and all 2s in last. */

//gonna use bubblesort here
void bubblesort (int A[], int size){
for(int i=0; i<size-1; i++){
for(int j=0; j<size-1; j++){
if(A[j] > A[j+1]){
int temp = A[j];
A[j]= A[j+1];
A[j+1]= temp;
}}};
}

# include <iostream>
using namespace std; 
int main () {
int arr[]= {0,1,2,0,1,2};
int n= sizeof(arr)/ sizeof(int);

bubblesort (arr,n);
for(int i=0; i<n ; i++){
cout<<arr[i]<<" ";
}

return 0;
}
