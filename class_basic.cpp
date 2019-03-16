/* We can store details related to a student in a class consisting of his age (int), first_name (string),
 last_name (string) and standard (int). 

You have to create a class, named Student, representing the student's details, as mentioned above,
 and store the data of a student. Create setter and getter functions for each element; 
 that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_strings() which returns the string consisting of the above elements,
separated by a comma(,). You can refer to stringstream for this.*/



#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age(int age){
        this->age=age;
    }
    int get_age(){
        return age;
    }
    void set_first_name(string name){
        first_name=name;
    }
    void set_last_name(string name){
        last_name=name;
    }
    void set_standard(int standard){
        this->standard=standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standard;
    }
    string to_strings(){
        return to_string(age) + "," + first_name + "," + last_name + "," + to_string(standard);  
}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_strings();
    
    return 0;
}

