/* Input Format

You are given two strings, a and b, separated by a new line. 
Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  a and b respectively. 
In the second line print the string produced by concatenating a and b . 
In the third line print two strings separated by a space, a' and b' . a' and b' are the same as a and b, respectively,
 except that their first characters are swapped.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1,s2;                   //Take two strings
    cin>>s1>>s2;                    //Input the values into the string variables
    cout << s1.size() << " " <<s2.size() << endl;   // To print the first line of output

    string sum= s1+s2;          //To output the sum of two strings
    cout<< sum<<endl;

    char temp;
    temp=s1[0];                 // Simply swapped the first character of the strings
    s1[0]=s2[0];
    s2[0]=temp;

    cout<<s1<<" "<<s2<<endl;
    return 0;
}

