#include "OneDice.h"

using namespace std;

OneDice::OneDice() : Thrown(6){
};

void OneDice::thrownOneDice(){
    oneDiceThrown = giveAnumber();
}

int OneDice::giveOneThrownResult(){
    return oneDiceThrown;
}
