# selectionSort

#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[],int n){
    int min=0,index=0;
    for(int i=0;i<n-1;i++){
        min = arr[i];
        index =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                index =j;
                min = arr[j];
            }
        }
        swap(arr[i],arr[index]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    selectionSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    delete [] arr;
    return 0;
}


