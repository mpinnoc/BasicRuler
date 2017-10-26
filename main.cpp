//
//  main.cpp
//  Basic English Ruler
//
//  Created by Michelle Pinnock on 10/9/17.
//  Copyright © 2017 Michelle Pinnock. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    for(int i=0; i<=23; ++i)
    {
        
        if(i==0)
            cout << "- - - - ";
        
        int x= i+1/2;
        
        if(i%2==0)
        {
            cout << (x/2)<< "in"<< endl;
        }
        if(x%2==1)
        {
            cout << "-"<< endl;
            cout << "- -"<< endl;
            cout << "-"<< endl;
            cout << "- - - - ";
        }
        if(x%2==0)
        {
            cout << "- "<< endl;
            cout << "- - "<< endl;
            cout << "-"<< endl;
            cout << "- - -"<< endl;
        }
        num = x;
    }
    
    cout << (num/2)+1 << "in" <<endl;
    return 0;
}


