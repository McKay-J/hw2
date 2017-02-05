//
// Created by McKay Jensen on 1/30/17.
//

#ifndef ANALYSTCOMPARER_HISTORY_H
#define ANALYSTCOMPARER_HISTORY_H
#include "PurchaseSale.h"
#include "Utils.h"

class History {
private:
    int m_simulation;
    int m_seedMoney;
    PurchaseSale** m_purchaseSales;
    int m_purchaseSalesCount;
    int m_currentPurchaseSale;

public:
    int load(std::ifstream&);
    int getSimulationDays(){return getSimulationDays();}
    int getInitialMoney(){return m_seedMoney();}
    int computeTotalProfitLoss();
    int computeProfiLossPerDay();
    void resetIteration();
    PurchaseSale nextPurchaseSale();

};


#endif //ANALYSTCOMPARER_HISTORY_H
