/*
You are provided with a vector of N integers. Then, you are given 2 queries. 
For the first query, you are provided with 1 integer, which denotes a position in the vector. 
The value at this position in the vector needs to be erased.
The next query consists of 2 integers denoting a range of the positions in the vector.
The elements which fall under that range should be removed. 
The second query is performed on the updated vector which we get after performing the first query. 
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
    cin >> n;
    for(int i=0;i<n;i++){
      int k;
      cin >> k;
      kam.push_back(k);
    }
    int pos;
    cin>>pos;
    kam.erase(kam.begin()+pos-1);
  
    int start,end;
    cin >> start >> end;
    kam.erase(kam.begin()+(start-1),kam.begin()+(end-1));   
    int p;
    p=kam.size();
    cout<<p<<endl;
    for (int j=0;j<p;j++) {
      cout <<kam[j]<<" ";
    }

    return 0;
}
