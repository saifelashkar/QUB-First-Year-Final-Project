#include "CoinToss.h"
#include "OneDice.h"
#include "TwoDices.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calculations(string& studentNumber){

    int sum = 0, middle = studentNumber.length() / 2, convert = studentNumber.length() % 2;
    for (int i = 0; i < middle; ++i)
        sum += (studentNumber[i] - '0') * (studentNumber[middle + i + convert] - '0');
    return (sum % 50) + 20;

}

void calculateAndPrintResults(int remainder, int calculator){

vector<vector<int>> results(calculator);
switch(remainder) {
case 0: {
    CoinToss coinToss;
    for (int i = 0; i < calculator; ++i){
        coinToss.thrownOneCoin();
        results[i] = {coinToss.giveOneCoinThrownResult()};
    }
    cout << "Coin Toss results: ";
    break;
}
case 1: {
    OneDice oneDice;
    for (int i = 0; i < calculator; ++i){
        oneDice.thrownOneDice();
        results[i]={oneDice.giveOneThrownResult()};
    }
    cout << "Dice Throw Results: ";
    break;
}
case 2:
    {
        TwoDices twoDices;
        for (int i = 0; i < calculator; ++i){
            twoDices.thrownTwoDices();
            results[i] = {twoDices.giveFirstThrownResult(), twoDices.giveSecondThrownResult()};
        }
        cout << "Two dices throw results:" << endl;
        break;
    }

}

    for (auto& result: results){

        for (int res : result)
            cout << res << " ";
        cout << endl;
    }

}

int main()
{
    string studentNumber;

    cout << "Please enter your Student Number" << endl;
    cin >> studentNumber;

    if (studentNumber.length() < 2 || studentNumber.length() > 8){
        cout << "You have entered the wrong length for a student number this program will be aborted.";
        return 1;
    }

    int remainder = stoi(studentNumber) % 3;
    int simulations = calculations(studentNumber);
    calculateAndPrintResults(remainder, simulations);

    return 0;
}
