#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person *p = new Person();

    string name = p -> name = "Carlos";
    int age = p -> age = 19;

    cout << name << endl;
    cout << age;
}