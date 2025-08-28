// Write a program to convert a character from uppercase to lowercase.
# include <iostream>
using namespace std;

void strtoarray(int A[],int n, char str[]){
for(int i=0; i<n; i++){
A[i]= (int)str[i];
}}

void arraytostr (int A[],int n, char str[]){
for(int i=0; i<n; i++){
str[i]=(char)A[i];
}}

int main() {
char str[]= "HELLO";
int size=0, i=0;
while (str[i] != '\0'){
size++; i++;
}
cout<<"The size of the string is : "<<size;
cout <<"\n";
int arr[size];
strtoarray(arr, size,str);
for(i=0; i<size; i++){
arr[i]= arr[i]+32;
cout<< arr[i]<<" ";
}
cout<<"\n";
arraytostr (arr,size, str);
cout<<"The new string is  : "<<str;
return 0;
}
