#include<bits/stdc++.h>
using namespace std;
 int mySqrt(int x) {
            double eps = 1e-6;
            double high = (double)x;
            double low =(double) 1;
            while(high-low>eps){
                double mid = (high+low)/2;
                if( mid * mid < x) {
                    low = mid;
                }
                else {
                    high = mid;
                }
            }
            return (int)high;
    }
int main() {
    int x  ;
    cin>>x;
    cout<<mySqrt(x)<<endl; // floor value
}