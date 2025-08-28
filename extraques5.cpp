/* Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the 
remaining elements to the right*/

//arr[] = {1,2,3,2,4,5} --> arr[] = {1,2,2,3,2,2}

# include <iostream>
using namespace std; 
int main (){
int arr[] = {1,2,3,2,4,5};
int n= sizeof(arr)/ sizeof(int);

for(int i=0; i<n; i++){
if(arr[i]==2){
for(int j=n-1;j >i ; j--){
arr[j]= arr[j-1]; 
}
arr[i+1]=2;
i++;
}
}

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
return 0;
}

