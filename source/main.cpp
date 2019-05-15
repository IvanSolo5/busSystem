//
//  main.cpp
//  Exam_1
//
//  Created by Ivan Solodyankin on 10/9/18.
//

#include <iostream>
#include "Student.h"
#include "Bus.h"
#include <vector>
using namespace std;
int main()
{
    //Note: you should not need to alter this code at all for your tests to pass.
    vector<Student> studentsListing;
    
    studentsListing.push_back( Student("Radia Perlman", "Boys and Girls Club", 1) );
    studentsListing.push_back( Student("Ada Lovelace", "Shadle", 2) );
    studentsListing.push_back( Student("Grace Hopper", "Rogers HS", 3) );
    studentsListing.push_back( Student("Claude Shannon", "Liberty Park", 4) );
    studentsListing.push_back( Student("Bjarne Stroustrup ", " Liberty Park", 4) );
    Bus AlphaOmega( 35, "509-466-2701" );
    for (int m = 0; m < studentsListing.size(); m++) {
        AlphaOmega.AddStudent(studentsListing[m] );
    }
    int errors = 0;
    if (AlphaOmega.GetBusStopForStudent("George Boole") != -1) {
        errors++;
        cout << "error: Get not handling unknown student correctly\n";
    }
    if (AlphaOmega.GetBusStopForStudent("Ada Lovelace") != 2) {
        errors++;
        cout << "error: Get not handling \"Ada Lovelace\" correctly\n";
    }
    if (AlphaOmega.GetDestinationForStudent("Donald Knuth") != "") {
        errors++;
        cout << "error: not handling get destination correctly\n";
    }
    if (AlphaOmega.GetDestinationForStudent("Grace Hopper") != "Rogers HS") {
        errors++;
        cout << "error: not handling \"Grace Hopper\" student correctly\n";
    }
    if (errors == 0) cout << "Passed\n";
    else cout << "Errors: " << errors << endl;
}

