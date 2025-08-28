// Code the Bubble sort with the following elements: 64 34 25 12 22 11 90

# include <iostream>
using namespace std; 

void bubblesort (int A[], int size){
for(int i= 0; i<size-1; i++){
for(int j= 0; j< size-1; j++){
if(A[j] > A[j+1]){
int temp= A[j];
A[j]= A[j+1];
A[j+1]= temp;
}}}
}


int main (){
int arr[]= {64,34,25,12,22,11,90};
int n = sizeof(arr)/ sizeof(int);
bubblesort (arr, n);
for (int i=0; i<n; i++){
cout << arr[i]<<" ";
}
return 0;
}
