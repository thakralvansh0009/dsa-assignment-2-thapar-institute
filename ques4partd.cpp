// Write a program to sort the strings in alphabetical order. 
# include <iostream>
using namespace std;

void bubblesort(int A[], int n){
for(int i=0; i<n-1; i++){
for(int j=0; j<n-1; j++){
if(A[j] > A[j+1]){
int temp= A[j];
A[j]= A[j+1];
A[j+1]= temp;
}}}
}

void sortedstring (int A[], int n, char string[]){
for(int i=0; i<n; i++){
string[i]= (char)A[i];
}
}

int main () {
char str[]= "helloworld";
int size=0, i=0;
while (str[i] != '\0'){
size++; i++;
}
cout<<"The size of the string is : "<<size;
cout <<"\n";
int arr[size];
for(i=0; i<size; i++){
arr[i]= (int)str[i];
}
bubblesort(arr,size);
for(i=0; i<size; i++){
cout<<arr[i]<<" ";
}
sortedstring (arr, size, str);
cout<<"The sorted string is : "<<str;
return 0;
}
