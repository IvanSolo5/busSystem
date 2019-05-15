//
//  Bus.cpp
//  Exam_1
//
//  Created by Ivan Solodyankin on 10/9/18.
//  Copyright © 2018 Ivan Solodyankin. All rights reserved.
///I affirm that all code given below was written solely by me, Ivan Solodyankin, and that any help I received adhered to the rules stated for this exam.

#include "Bus.h"
#include "Student.h"
#include <iostream>
#include <string>


using namespace std;

Bus::Bus()
    {
        BusNumber_ = 1;
        CellPhone_ = "5095555555";
    }
Bus::Bus(int BusNumber, string CellPhone)
{
    BusNumber_ = BusNumber;
    CellPhone_ = CellPhone;
}
int Bus::GetBusStopForStudent(string Name) // Impliments -- finds bus stop will student Name get off/on at
{
    for(int i = 0; i < 5; i ++)
    {
        if(Name == studentsListing[i].GetName())
        {
            return studentsListing[i].BusStop();
        }
    }
    return -1;
}
string Bus::GetDestinationForStudent(string Name) // Impliments-- Search list of students on the bus for Name Return Destination string once student found
{
    for(int i = 0; i < 5; i ++)
    {
        if(Name ==studentsListing[i].GetName())
        {
            return studentsListing[i].GetDestination();
        }
    }
    return "";
}



void Bus::AddStudent(Student& student)       /// Impliments Add a student to list of students on this bus
{
        studentsListing.push_back(student);
}
int Bus::GetTripDistance()
{
    return 10;
}

double Bus::GetTripCost()
{
    return 14.80;
}











