//
// Created by McKay Jensen on 1/30/17.
//

#include "Analyst.h"
 int Analyst::load(std::ifstream& inputStream)
 {
     m_name = getTrimmedLine(inputStream);
     m_initials = getTrimmedLine(inputStream);

 }

