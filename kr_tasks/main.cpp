//
//  main.cpp
//  t_14
//
//  Created by Vladislav Khudiakov on 6/16/19.
//  Copyright © 2019 Vladislav Khudiakov. All rights reserved.
//
#include "t_14.hpp"
#include "t_15_include.h"

int main(int argc, const char * argv[]) {
  std::cout << getUniqueSymbols(getStringFromFile("input.txt")) << std::endl;
  std::cout << getCount(getStringFromFile("input.txt")) << std::endl;
  std::cout << getCount(getStringFromFile("input.txt"), 'a') << std::endl;
  
  int matrix[][4] = {
    {1, 2, 33, 4},
    {5, 56, 7, 8},
    {9, -12, 11, 12},
    {13, 14, 15, 16},
  };
  
  std::cout << findMinBelowMain<4>(matrix) << std::endl;
  std::cout << findMaxAboveSide<4>(matrix) << std::endl;
  replaceMinWithMax<4>(matrix);
  
  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      std::cout << matrix[row][col] << " ";
    }
    std::cout << "\n";
  }
  return 0;
}
