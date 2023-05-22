#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int>&v , int key) {
    int mid ;
    int low = 0;
    int high= v.size()-1;
    while(low<high){
        mid = ((high - low)/2) + low;
        if(v[mid]>key) {
            high = mid;
        }
        else if(v[mid]<=key){
           low= mid +1;
        }
        
    }
   if(v[low] > key)return low;
   if(v[high]>key)return high;
    return -1;
}

int main() {
    vector<int>v={1,4,3,6,29,6,3,7};
    sort(v.begin(),v.end());
    int key1 = 5;
    int key2 = 29;
    cout<<upperBound(v,key1)<<endl;
    cout<<upperBound(v,key2)<<endl;

    return 0;
}