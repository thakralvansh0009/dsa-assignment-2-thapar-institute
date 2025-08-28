// reverse a string
# include <iostream>
using namespace std;
int main () {
char str[]="nancy";
int m=0, size=0;
while (str[m] != '\0'){
size++; m++;
}
cout<<"The size of the string is  : "<<size;
cout<<"\n";
for (int i=0,j=size-1; j>i; i++,j--){
char temp= str[i];
str[i]= str[j];
str[j]= temp;
}
cout<<"The reverse of the string is : "<< str;
return 0;
}
