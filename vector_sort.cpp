/* You are given N integers.Sort the N integers and print the sorted order.
Store the N integers in a vector.Vectors are sequence containers representing arrays that can change in size.
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> kam;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        kam.push_back(k);
    }
    sort(kam.begin(),kam.end());
     for(int i=0;i<n;i++){
         cout<<kam[i] << " ";
    }

    return 0;
}
