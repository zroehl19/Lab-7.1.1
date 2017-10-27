/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on October 27, 2017, 12:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(void) {

    int a = 8, b = 0, c = 0;
    
    cin >> b;
    
    try
    {
        if(b != 0)
        {
            c = a/b;
        }
        else if(b == 0)
        {
            cout << "Your input is invalid, you can't divide by zero" << endl;
        }
    }
    catch(exception e)
    {
    }
    cout << c << endl;
}

