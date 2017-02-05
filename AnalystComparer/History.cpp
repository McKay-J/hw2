//
// Created by McKay Jensen on 1/30/17.
//

#include "History.h"

int History::load(std::ifstream& inputStream)
{
    m_simulation = std::stoi(getTrimmedLine(inputStream));
    m_seedMoney  = std::stoi(getTrimmedLine(inputStream));
}
