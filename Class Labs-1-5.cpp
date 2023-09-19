#include <iostream>
using namespace std;

class Person {
   string name; 
   int age;      
public:
   Person(string n, int a) : name {n}, age {a} { //파러미터가 있는 생성자
      cout << "Constructor with parameter" << endl;
   }
   Person(const Person & p) = delete;

   void show() {
      cout << name << ", " << age << endl;
   }
}; 

int main(int argc, char const* argv[]) 
{
   Person hong("Gil-Dong Hong", 28);  // 파러미터가 있는 생성자 호출  
 
   Person man = hong; // 북사 생성자 호출 (man 객체는 hong 객체의 내용을 복사하여 생성) 
  
   return 0;
}