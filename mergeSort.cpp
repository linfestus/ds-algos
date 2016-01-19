#include <vector>
#include <iostream>

using namespace std;


void merge(vector<int> &vec, int p,int q,int r){
    int i=p;
    int k = p;
    int j = q+1;
    vector<int> vec1;
    
    vec1 = vec;
    
    while( i<=q && j<=r){
        if(vec[i]<vec[j]){
            vec1[k]=vec[i];
            i++;
            k++;
            
        }
        else{
            vec1[k] = vec[j];
            j++;
            k++;
        }
    }
    while(i<=q){
        vec1[k] = vec[i];
        k++;
        i++;
    }
    while(j<=r){
        vec1[k] = vec[j];
        j++;
        k++;
    }
    vec = vec1;
    
}

void mergeSort(vector<int> &vec,int p,int r){
    
    if(p<r){
        int q = (p+r)/2;
        mergeSort(vec, p,q);
        mergeSort(vec,q+1,r);
        merge(vec,p,q,r);
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
    mergeSort(vec, 0,n-1);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}


