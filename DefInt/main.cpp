//
//  main.cpp
//  DefInt
//
//  Created by YUN GAO on 16/2/19.
//  Copyright (c) 2016年 YUN GAO. All rights reserved.
//
#include "DefInt.h"
#include <iostream>
using namespace std;

double f(double x){
    //std::cout<<"2*x+3 trapezoidal approximation:";
    return x*x*x-x*x+1;//the f(x)
    
}

int main(int argc, const char * argv[]) {
    
    cout<<"computing integrety by trapzoid";
    cout<<DefInt(1.0,2.0,*f).ByTrapzoid(100)  << endl;
    cout<<"computing integrety by simpson";
    cout<<DefInt(1.0,2.0,*f).Simpson();
    return 0;
}
