#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
   for(int i=0;i<n-1;i++){
      for(int j = i+1 ; j < n ; j++){
         if(arr[j]<arr[i]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   for(int i=0 ; i<n ; i++){
      cout<<arr[i]<<" ";
   }
}


int main(){
   int n;
   cout<<"Enter number of elements to be filled in an array :->"<<endl;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cout<< "Enter "<<i<<" th number of element";
      cin>>arr[i];
   }

   selectionSort(arr , n);

}