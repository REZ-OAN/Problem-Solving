#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    //declaration of set
    set<int> s1; // ascending order
    set<int,greater<int>> s2; // descending order
    /*
        .insert(element); // add element to the set if the element is not present
        .erase(element/address);  // will remove the all occurences of the element
        .clear(); // deallocate all the memory from the set
        .size(); // to know the size of the set 
    */
   s1.insert(10);
   s1.insert(1);
   s1.insert(11);
   s1.insert(2);
   s1.insert(10);
   // to access the set we must need iterator because set does not support indexing method
   set<int>::iterator it = s1.begin();
   while(it!=s1.end()){
    cout<<*it<<endl;
    it++;
   }
   
   s2.insert(10);
   s2.insert(1);
   s2.insert(11);
   s2.insert(2);
   s2.insert(10);
   it = s2.begin();
    while(it!=s2.end()){
    cout<<*it<<endl;
    it++;
   }
   // to know the size
   cout<<s2.size()<<endl;
   // to erase 10 
    s2.erase(10);
   it = s2.begin();
    while(it!=s2.end()){
    cout<<*it<<endl;
    it++;
   }
   // to clear all
   s2.clear();
   cout<<s2.size()<<endl;
}