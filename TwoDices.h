/*
 * TwoDices.h
 *
 */
#ifndef TWODICES_H_
#define TWODICES_H_
#include<cstdlib>
#include<iostream>
#include "Thrown.h"
#include "OneDice.h"
#include<cassert>
using namespace std;

class TwoDices : public OneDice{ //TwoDice Class
private:
    int oneDiceThrown;
    int secondThrown;
    int m_range = 6;

public:
    TwoDices();
    void thrownTwoDices();
    int giveFirstThrownResult();
    int giveSecondThrownResult();
};

#endif // TWODICES_H_
