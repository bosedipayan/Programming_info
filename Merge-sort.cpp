#include<bits/stdc++.h>
using namespace std;


void Merge(int arr[], int l, int mid, int h){

    int n=mid+1-l;
    int m=h-mid;

    int a[n];
    int b[m];

    for(int i=0;i<n;i++){
        a[i]=a[l+i];
    }

    for(int i=0;i<m;i++){
        b[i]=b[mid+1+i];
    }


    int i=0;
    int j=0;
    int k=l;

    while(i<n &&  j<m){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++; k++;
        }
        else{
            arr[k]=b[j];
            j++; k++;
        }
    }

    while(i<n){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<m){
        arr[k]=b[j];
        k++; j++;
    }


}


void MergeSort(int arr[] ,int l,int h)
{
    if(l<h){
        int mid = l+h/2;

        MergeSort(arr ,l , mid);
        MergeSort(arr , mid+1, h);

        Merge(arr , l ,mid , h);
    }
    
}





int main(){

    int arr[]={5,4,3,2,1};
    MergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}