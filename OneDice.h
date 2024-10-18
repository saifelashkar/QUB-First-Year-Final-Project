/*
 * OneDice.h
 *
 */
#ifndef ONEDICE_H_
#define ONEDICE_H_

#include <cstdlib>
#include <iostream>
#include "Thrown.h"
#include <cassert>
using namespace std;

class OneDice:public Thrown{ //OneDice Class
private:
    int oneDiceThrown;

public:
    void thrownOneDice();
    int giveOneThrownResult();
    OneDice();
};
#endif // ONEDICE_H_
