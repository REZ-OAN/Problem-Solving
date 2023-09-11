#include<iostream>
// to use vector we need to include the library of vector
#include<vector>
using namespace std;

int main(){
    // Decalration
    // basic type vector<data_type> vector_name(size); 
    vector<int> vec1(5);
    // with initialization
    vector<int> vec2(5,100);
    // input to the vec1 will be normal like c++ array
    int i;
    for(i=0;i<5;i++){
        cin>>vec1[i];
    }
    // if we do not mention the size then
    vector<int> vec3;
    /*
        working of .push_back(element)
        appends a element to the end of the vector
        vec3.push_back(1); --> vec3 will have 1 in it's container
        vec3.push_back(2); --> vec3 will have 1,2 in it's container
        // the elements are in the order they had pushed 

        working of .pop_back()
        vec3.pop_back(); --> last element was 2 so it will be removed from the vec3
        
        working of .size()
        vec3.size();  --> this will give the size of the vector which is now 1

        working of .back() --> gives us the last element
        working of .front() --> gives us the first element
        working of .clear() --> delete the all allocated space

    */
    // input to the vec3 
    int a=0;
    for(i=0;i<5;i++){
        cin>>a;
        vec3.push_back(a); // add element to the last of the vector

    }
    // another declaration format
    vector<int> vec4;
    // now want to fix the size
    vec4.resize(10);// it will  allocate 10 new space for the vector vec4
    vec4.assign(12,0);// it will allocate 12 space and every space filled with 0
    for(i = 0 ;i<vec4.size();i++){
        cout<<vec4[i]<<endl;
    }
    // you can take input like normal array    
    for(i=0;i<vec4.size();i++){
        cin>>vec4[i];
    }
}