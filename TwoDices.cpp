#include "TwoDices.h"

using namespace std;

TwoDices::TwoDices() : OneDice() {}

void TwoDices::thrownTwoDices(){
OneDice::thrownOneDice();
secondThrown = giveAnumber();
};

int TwoDices::giveFirstThrownResult(){
    return giveOneThrownResult();
}

int TwoDices::giveSecondThrownResult(){
    return secondThrown;
}

