#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main() {
    // declaring vector with initialization
    vector<int> vec = {34,2,3,2,3,2,3121,332};
    
    // for declaring iterator  data_type with container :: iterator  iterator_name;
    // vec.begin() --> a iterator that hold the address of the first element of the vector
    // vec.end() --> a iterator that hold the address of the end
    vector<int>::iterator it;
    int front = *vec.begin();
    int back = *(vec.end()-1);
    cout<<front<<" "<<back<<endl;
    it = vec.begin();
    for(;it!=vec.end();it++){
        // can modify values with the iterator
        if(it==vec.begin()+3) {
            *it = 100;
        }
        if(it==vec.begin()+2){
            vec.erase(it); // will deallocate the space from the vector for all occurence of *it
        }
        cout<<*it<<"\t";
    }
}