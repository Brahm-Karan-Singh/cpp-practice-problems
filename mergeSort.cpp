#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l , int mid, int r,int n){
    int i = l;
    int j = mid+1;  
    int k = l;
    int b[n];

    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            b[k] = a[i];
            k++;i++;
        }else{
            b[k] = a[j];
            j++;k++;
        }
    }

    while(i<=mid){
        b[k] = a[i];
        k++;i++;
    }
    while(j<=r){
        b[k] = a[j];
        k++;j++;
    }

    for(int i=l;i<=r;i++){
        a[i] = b[i];
    }

}

void mergeSort(int a[],int l,int r ,int n){
    //checks if there are more than two elements in an array
    if(l<r)
    { 
        int mid = (l+r)/2;
        mergeSort(a,l,mid,n);
        mergeSort(a,mid + 1,r,n);

        merge(a, l, mid, r,n);
    }

}

int main(){
    int n;
    cout<<"Enter no. of elements in an array"<<endl;
    cin>>n;

    int a[n];
    int l = 0,r = n-1;
    cout<<"Enter elements in an array \n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    mergeSort(a , l , r,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}