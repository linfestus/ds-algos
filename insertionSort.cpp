#include <iostream>


using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int arr[],int n){
    
    for(int i=0;i<n;i++){
       int val = arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>val){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
}

int main() {
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    insertionSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    delete [] arr;
    return 0;
}


