//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

int main() {
    
    
    double maxValue = sales[0];
    for (int index = 1; index < 10; index++)
        if (sales[index] > maxValue)
            maxValue = sales[index];
    cout<<"largest sale = "<< maxValue;
    
    
    
    
    
    int maxIndex = 0;   // store the index of the first occurrence
                        // of the largest element in the array
    for (index = 1; index < 10; index++)
        if (sales[maxIndex] > sales[index])
            maxIndex = index;
    double largestSale = sales[maxIndex];
    
    
    
    
    int test[5];
    int sum = 0;
    double average;
    int index;
    cout << "Enter five test scores: "<<endl;
    for (index = 0; index < 5; index++)
    {
        cin >> test[index];
        sum = sum + test[index];
    }
    average = sum / 5.0;
    cout << "The average test score = " << average << endl;
    cout << "Test scores less than the average test score." << endl;
    for (index = 0; index < 5; index++)
        if (test[index] < average)
            cout << test[index]<<"\t";
    
    return 0;
    
    
    
    
    
    
    
    
    
    const int LIST_SIZE = 5;
    int List[LIST_SIZE] = {12,4,34,27,44};
    int searchItem;
    cout << "Enter a number to search for"<<endl;
    cin >> searchItem;
    bool found = false;
    int loc = 0;
    while (loc < LIST_SIZE && !found)
        if (List[loc] == searchItem)
            found = true;
    else
    loc++;
    if (found)
        cout<<"Element found at location "<< loc<<endl;
    else
        cout<<"Element not found"<<endl;
}
