/*
 * CoinToss.h
 *
 */


 #ifndef COINTOSS_H_
 #define COINTOSS_H_

#include<cstdlib>
#include<iostream>
#include "Thrown.h"
#include<cassert>
using namespace std;

class CoinToss : public Thrown{ //CoinToss Class

private:
    int coinThrown;

public:
    void thrownOneCoin();
    int giveOneCoinThrownResult();
    CoinToss();
};

 #endif // COINTOSS_H_
