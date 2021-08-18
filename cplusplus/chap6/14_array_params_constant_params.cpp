//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

void fillArray(int list[], int listSize)
{
    int index;
    cout<<"Enter "<<listSize<<" integers"<<endl;
    for (index = 0; index < listSize; index++)
        cin >> list[index];
}
void printArray(int list[], int listSize)
{
    int index;
    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
    cout<<endl;
}
void copyArray(int list1[], int src, int list2[],
               int tar, int numOfElements)
{
    for (int index = tar; index < tar + numOfElements; index++)
    {
        list2[index] = list1[src];
src++; }
}
int main() {
    int myList[5];
    int yourList[5]= {0};
    fillArray(myList,5);
    cout<<"After calling fillArray function"<<endl;
    printArray(myList,5);
    copyArray(myList,1,yourList,2,3);
    cout<<"After calling copyArray function"<<endl;
    printArray(yourList,5);
}







void swap(int , int &);
void printArray(int list[], int);
int main() {
    int myList[5] = {2,4,6,8,10};
    swap(myList[0],myList[3]);
    cout<<"After calling swap function"<<endl;
    printArray(myList,5);
}
void swap(int x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
void printArray(int list[], int listSize)
{
    int index;
    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
    cout<<endl;
}



void printArray(const int list[], int listSize)
{
    int index;
    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
    cout<<endl;
}
int sumArray(const int list[], int listSize)
{
    int index;
    int sum = 0;
    for (index = 0; index < listSize; index++)
        sum = sum + list[index];
    return sum;
}
int main() {
    int myList[5]={3,5,7,8,4};
    printArray(myList,5);
    cout<<"Sum = "<<sumArray(myList,5)<<endl;
}
