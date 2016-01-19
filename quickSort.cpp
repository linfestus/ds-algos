#include <vector>
#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int> &vec, int p,int r){
    int x = vec[r];
    int i = p-1;
    for(int j=p;j<r;j++){
        if(vec[j]<x){
            i++;
            swap(vec[i],vec[j]);
        }
        
    }
    swap(vec[i+1],vec[r]);
    return i+1;
}

void quickSort(vector<int> &vec,int p,int r){
    
    if(p<r){
        int q = partition(vec,p,r);
        quickSort(vec, p,q-1);
        quickSort(vec,q+1,r);
    }
}

int main() {
    
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    quickSort(vec, 0,n-1);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}


