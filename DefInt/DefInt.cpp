//
//  DefInt.cpp
//  DefInt
//
//  Created by YUN GAO on 16/2/19.
//  Copyright (c) 2016年 YUN GAO. All rights reserved.
//

#include "DefInt.h"



DefInt::DefInt(int a,int b,double(*Function_)(double x))
    {
        this->a=a;
        this->b=b;
        Function=Function_;
    }


    double DefInt::ByTrapzoid(int n){
        double h=(b-a)/n;
        double sum;
        sum=Function(a+h)+Function(a+n*h+h);
        for (int i=2; i<=n; i++) {
            sum=2*Function(a+i*h)+sum;
        }
        return h*sum/2;
        
    }
    double DefInt::Simpson(){
        return (b-a)/6*(Function(a)+4*Function((a+b)/2)+Function(b));
    }
