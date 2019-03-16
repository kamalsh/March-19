You have to complete the function vector parseInts(string str). str will be a string consisting of comma-separated integers, and you have to return a vector of int representing the integers.

Note If you want to know how to push elements in a vector, solve the first problem in the STL chapter.

Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it. 




#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v;
    stringstream ss(str);
    for(int j=0;j<str.length();j++){
        char ch;
        int k;
        while ( ss >> k) {      //   Check whether the next value is integer value
          v.push_back(k);
          ss >> ch;             //   Get rid of the commas
        } 
    }
    
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


