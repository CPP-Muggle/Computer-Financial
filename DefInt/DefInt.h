//
//  DefInt.h
//  DefInt
//
//  Created by YUN GAO on 16/2/19.
//  Copyright (c) 2016年 YUN GAO. All rights reserved.
//

#ifndef DefInt_h
#define DefInt_h

class DefInt
{
    private:
    //integration limits
    double a;
    double
    b;
    //pointer to f(x)
    double(*Function)(double x);
    
    public:
    DefInt(int a,int b,double(*Function_)(double x));
    double ByTrapzoid(int n);
    double Simpson();
};
#endif
