#include<bits/stdc++.h>
using namespace std;



void Swap(int arr[],int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int partition(int arr[], int l, int h){

    int pivot = arr[h];
    int i= l-1;

    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            Swap(arr, i,j);
        }
    }

    Swap(arr, i+1, h);
    return i+1;
}


void Quicksort(int arr[],int l,int h){

    if(l<h)
    {

    int pi= partition(arr,l,h);

    Quicksort(arr , l, pi-1);
    Quicksort(arr , pi+1,h);

    }
}




int main(){
    int arr[5]={5,3,4,1,2};
    Quicksort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}