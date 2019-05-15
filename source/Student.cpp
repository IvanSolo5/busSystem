//
//  Student.cpp
//  Exam_1
////I affirm that all code given below was written solely by me, Ivan Solodyankin, and that any help I received adhered to the rules stated for this exam.
//  Created by Ivan Solodyankin on 10/9/18.
//  Copyright © 2018 Ivan Solodyankin. All rights reserved.
//

#include "Student.h"
#include<iostream>
#include<string>

using namespace std;

Student::Student()   // creating a defult student
{
    Name_ = "Mike";
    Destination_ = "Shadle";
    BusStop_ = 1;
}
Student::Student(string Name, string Destination, int BusStop)
{
    Name_ = Name;
    Destination_ = Destination;
    BusStop_ = BusStop;
}
string Student::GetName()  // Returns the student’s name
{
    return Name_;
}
string Student::GetDestination()  // Returns the C.B.D. destination for the student
    {
        return Destination_;
    }
int Student::BusStop()    // What bus stop # will the student get off / on at?
{
    return BusStop_;
}
