//
//  t_14.cpp
//  t_14
//
//  Created by Vladislav Khudiakov on 6/16/19.
//  Copyright © 2019 Vladislav Khudiakov. All rights reserved.
//

#include "t_14.hpp"

std::string getStringFromFile(const std::string& fileName)
{
  std::ifstream fin;
  fin.open(fileName);
  std::string outStr;
  std::getline(fin, outStr, '\0');
  fin.close();
  
  return outStr;
}


std::string getUniqueSymbols(const std::string& inStr)
{
  //find unique symbols
  std::string outStr;
  outStr.push_back(inStr[0]);
  
  for (int i = 1; i < inStr.size(); i++) {
    bool skip = false;
    
    for (int j = 0; j < outStr.size(); j++) {
      if (inStr[i] == outStr[j]) {
        skip = true;
        break;
      }
    }
    
    if (!skip) {
      outStr.push_back(inStr[i]);
    }
  }
  
  //delete last element if is '\n'
  if (*(outStr.end() - 1) == '\n') {
    outStr.pop_back();
  }
  
  //bubble sort
  char temp;
  
  size_t size = outStr.size();
  for (size_t i = 0; i < size - 1; i++) {
    for (size_t j = 0; j < size - i - 1; j++) {
      if (outStr[j] > outStr[j + 1]) {
        temp = outStr[j];
        outStr[j] = outStr[j + 1];
        outStr[j + 1] = temp;
      }
    }
  }
  
  return outStr;
}


int getCount(const std::string& inStr)
{
  int count = 0;
  const char* first = &inStr[0];
  
  while (*first != '\0') {
    first++;
    count++;
  }
  
  return count;
}


int getCount(const std::string& inStr, char compChar)
{
  int count = 0;
  
  for (int i = 0; i < inStr.size(); i++) {
    if (inStr[i] == compChar) {
      count++;
    }
  }
  
  return count;
}
