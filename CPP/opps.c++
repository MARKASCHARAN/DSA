#include <iostream>
using namespace std;

class Person {

 public:
   string name;
   int age;

   Person(string n, int a){
    name = n;
    age = a;
   }

   void display(){
     cout << "Name: " << name << endl << "Age : " << age << endl;
   }

};

int main(){
  ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    Person s1("Kanishka", 20);
    s1.display();

    return 0;
}


