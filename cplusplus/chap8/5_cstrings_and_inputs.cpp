//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>
#include<cstring>

int main() {
    // insert code here...
    
    char name1[] = {'A','h','m','a','d','\0'}; //Array size = 6
    char name2[]="Omar"; //Arraysize=5
    
    char name1[]={'A','h','m','a','d'}; //Arraysize=5
    char name2[]="Omar";
    
    
    char name[8]="Omar";
    
    
    
    
    
    
    
    char str[20] = "Good Day";
    int length = 0;
    while(str[length] != '\0')
        length++;
    cout << "length = "<<length;
    
    
    
    
    char str1[10];
    char str2[10];
    char discard;
    cout <<"Enter a string..."<<endl;
    cin.get(str1, 10);
    cin.get(discard);
    cin.get(str2, 10);
    cout <<"str1 = "<<str1<<"\t";
    cout <<discard;
    cout <<"str2 = "<<str2<<"\t";
    
    
    
    
    
    char str1[10] = "Ahmad";
    char str2[10] = "Ali";
    int result = 0;
    for(int i = 0; i < 10 ;i++)
    {
        if(str1[i] > str2[i])
        {
    result = 1;
    break; }
        else if(str1[i] < str2[i])
        {
    result = -1;
    break; }
    }
    cout << "result = "<<result<<endl;
    
    
    
    
    if(result > 0)
        cout<< str1 <<" is greater than "<<str2<<endl;
    else if (result < 0)
         cout<< str1 <<" is less than "<<str2<<endl;
    else
    cout<< str1 <<" is equal "<<str2<<endl;
    
    
    
    
    char studentName[21];
    char myname[16];
    char yourname[16];
    strcpy(myname, "John Robinson");
    cout<< myname<<" has ";
    cout<< strlen(myname) <<" letters"<<endl;
    int len = strlen("Sunny Day");
    cout<<"Sunny Day has "<< len <<" letters"<<endl;
    strcpy(yourname, "Lisa Miller");
    strcpy(studentName, yourname);
    cout<<"Student name = "<<studentName<<endl;
    cout<<"Your name = "<<yourname<<endl;
    cout<< strcmp("Bill", "Lisa")<<endl;
    strcpy(yourname, "Kathy Brown");
    strcpy(myname, "Mark G. Clark");
    cout<<strcmp(myname, yourname)<<endl;
    
    
    
    
}


