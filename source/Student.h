//
//  Student.hpp
//  Exam_1
////I affirm that all code given below was written solely by me, Ivan Solodyankin, and that any help I received adhered to the rules stated for this exam.
//  Created by Ivan Solodyankin on 10/9/18.
//  Copyright © 2018 Ivan Solodyankin. All rights reserved.
//

#ifndef Student_h_
#define Student_h_

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student
{
private:
    string Name_;
    string Destination_;
    
public:
    int BusStop_;
    
    Student();
 
    Student(string Name, string Destination, int BusStop);   // student will have a name, their destination, and bus stop
    string GetName();   // Returns the student’s name
    string GetDestination();   // Returns the C.B.D. destination for the student
  
    int BusStop();     // What bus stop # will the student get off / on at
   
};

#endif /* Student_hpp */
