#include "CoinToss.h"

using namespace std;

CoinToss::CoinToss() : Thrown(2){
}

void CoinToss::thrownOneCoin(){
    coinThrown = giveAnumber();
}

int CoinToss::giveOneCoinThrownResult(){
    return coinThrown;
}
