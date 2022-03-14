#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

void Student::assignDetail(int id, char pName[]){

studentId=id;
  strcpy(name,pName)

  
}
void student::display(){

  cout<<"student numberis : "<<studentId<<endl;
  cout<<"student name is : "<<name<<endl;
}

/* Assign studentId and name
Student::assignDetails() {
  
}

 Display StudentId and Name
Student::display() {
  
}
*/