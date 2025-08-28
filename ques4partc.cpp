// Write a program to delete all the vowels from the string.

# include <iostream>
using namespace std;

void removevowel (char str[], int n){
int k=0;
for(k=0; k<n; k++){
if(str[k]=='a' || str[k]== 'e' || str[k]== 'i'|| str[k]== 'o'|| str[k]== 'u'){
for(int j=k; j< n; j++){
str[j]= str[j+1];
}
n--;
}}
}
int main(){
char str[]="nancy garg";
int size=0, i=0;
while(str[i] != 0){
size++; i++;
}
cout<<"The size of the string is: "<<size;
cout<<"\n";
removevowel (str, size);
cout<<"The new string is : "<< str;
}
