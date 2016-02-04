#include <vector>
#include <iostream>

using namespace std;

vector<int> countingSort(vector<int> vec,int n,int max){
    
    vector<int> count,sorted;
    
    count.reserve(max+1);
    count = {0};
    sorted.reserve(n);
    
    for(int i=0;i<n;i++){
        count[vec[i]]++;
    }
    
    for(int i=1;i<=max;i++)
        count[i]+=count[i-1]; 
  
    
    for(int j=n-1;j>=0;j--){
        sorted[count[vec[j]]-1] = vec[j];
        count[vec[j]]--;
    }
  
    return sorted;
}

int main() {
    
    int n,max=0;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
        if(a>max)
            max = a;
    }
    vec = countingSort(vec,n,max);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}


