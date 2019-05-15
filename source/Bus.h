//
//  Bus.hpp
//  Exam_1
//I affirm that all code given below was written solely by me, Ivan Solodyankin, and that any help I received adhered to the rules stated for this exam.

//  Created by Ivan Solodyankin on 10/9/18.
//  Copyright © 2018 Ivan Solodyankin. All rights reserved.
//



#ifndef Bus_h_
#define Bus_h_
#include"Student.h"
#include<iostream>
#include<string>
using namespace std;

class Bus
{
private:
    vector<Student> studentsListing;
public:
    int BusNumber_;
    string CellPhone_;
    int TripDistance_;
    int TripCost_;
    Student name_;
    
    Bus();
   
    Bus(int BusNumber, string CellPhone); // Bus will have name and phone number
    
    void AddStudent(Student& student);    // Add a student to list of students on this bus
   
    int GetBusStopForStudent(string Name); // finds bus stop will student Name get off/on at
  
    string GetDestinationForStudent(string Name); // Search list of students on the bus for Name Return Destination string once student found
   
    int GetTripDistance(); // gets trip distance 
    
    double GetTripCost(); // gets trip cost

    
};
#endif


