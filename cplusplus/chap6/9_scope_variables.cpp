//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

const double RATE = 10.50;
      int z = 1;
      double t = 11.5;
      void one(int x = 2, char y = 'a');
      void two(int a = 3, int b = 4, char x = 'b');
      void three(int one = 5, double y = 12.5, int z = 6);

int main() {
          int num = 7, first = 8;
          double x = 13.5, y = 14.5, z = 15.5;
          char name = 'c', last = 'd';
          cout<<"main: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<num<<"\n"
              <<first<<"\t"<<x<<"\t"<<y<<"\t"<<name<<"\t"<<last<<endl;
          one();
          two();
          three();
}


void one(int x, char y)
{
        cout<<"one: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<x<<"\n"
            <<y<<endl;
}

int w = 9;

void two(int a, int b, char x)
{
    int count = 10;
    cout<<"two: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<a<<"\n"
    <<b<<"\t"<<x<<"\t"<<count<<"\t"<<w<<endl;
}

void three(int one, double y, int z)
{
    char ch = 'e';
    int a = 11;
    cout<<"three 1: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<one<<"\n"
    <<y<<"\t"<<z<<"\t"<<ch<<"\t"<<a<<"\t"<<w<<endl;
    //Block four
    {
        int x = 12;
        char a = 'f';
        cout<<"four: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<one<<"\n"
        <<y<<"\t"<<z<<"\t"<<x<<"\t"<<a<<"\t"<<w<<endl;
    }//end Block four
    cout<<"three 2: "<<RATE<<"\t"<<z<<"\t"<<t<<"\t"<<one<<"\n"
    <<y<<"\t"<<z<<"\t"<<ch<<"\t"<<a<<"\t"<<w<<endl;
}
