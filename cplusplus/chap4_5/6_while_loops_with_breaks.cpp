//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
using namespace std;

func complicatedWhileLoop() {
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold = 0;
    int counter = 1;
    double costOfOneBox = 10;
    cout << "Enter the number of volunteers: ";
    cin >> numOfVolunteers;
    while (counter <= numOfVolunteers)
    {
        cout << "Enter the number of boxes sold by volanteer "
        << counter << " : ";
        cin >> numOfBoxesSold;
        totalNumOfBoxesSold += numOfBoxesSold;
        counter++;
    }
    cout << "The number of boxes soldP: " << totalNumOfBoxesSold << endl;
    
    cout << "The total money made by selling cookies: $" << totalNumOfBoxesSold * costOfOneBox << endl;
    if (numOfVolunteers != 0)
        cout << "The average number of boxes sold by each volunteer: "
        << totalNumOfBoxesSold / numOfVolunteers << endl;
    else
        cout << "No input." << endl;
    
}

int main() {
    basicWhileLoop()
    complicatedWhileLoop()
    return 0;
}
