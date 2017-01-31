//
// Created by McKay Jensen on 1/30/17.
//

#ifndef ANALYSTCOMPARER_ANALYST_H
#define ANALYSTCOMPARER_ANALYST_H
#include "History.h"
#include <string>



class Analyst {
private:
    std::string m_name
    std::string m_initials
    History m_history

public:
    int load(std::ifstream)
    float getStockPerformance(std::string)
    std::string getName(){return m_name;}
    std::string getInitials(){return m_initials;}
    History getHistory(){return m_history;}
};


#endif //ANALYSTCOMPARER_ANALYST_H
