/* Given two strings str1 and str2, determine if they form an anagram pair. Two strings are 
considered anagrams if one string can be rearranged to form the other string. */

// str1= evil , str2= vile
# include <iostream>
using namespace std;

int lengthofstring (char str[]){
int size=0,i=0;
while(str[i] != '\0') {
size++;i++;
}
return size;
}

void sorting (char str[], int length){
for(int i=0; i<length-1; i++){
for(int j=0; j<length-1; j++){
if((int)str[j]> (int)str[j+1]){
char temp= str[j];
str[j] = str[j+1];
str[j+1]= temp;
}}}
}

void anagram ( char string1[],int size1, char string2[], int size2){
int words=0, m=0, n=0;
if(size1== size2){
for(m=0, n=0; m<size1, n<size2; m++, n++){
if(string1[m] == string2[n]){
words++;
}
if(string1[m] != string2[n]){
cout<<"\nThe strings cant be anagrams";
break;
}}}
if(size1 != size2){
cout<<"\nThe strings cant be anagrams";
}
if(words== size1){
cout<<"\nThe strings can be anagrams";
}
}

int main (){
char str1[]= "evil";
int size1= lengthofstring (str1);
cout<<"The size of the string 1 is: "<<size1;

char str2[]= "table";
int size2= lengthofstring (str2);
cout<<"\nThe size of the string 2 is: "<<size2;
cout<<"\n";

sorting (str1, size1);
cout<< str1 <<"\n";

sorting (str2, size2);
cout<< str2;

anagram (str1, size1, str2 , size2);
}
