//
//  main.cpp
//  t_14
//
//  Created by Vladislav Khudiakov on 6/16/19.
//  Copyright © 2019 Vladislav Khudiakov. All rights reserved.
//
#include "t_14.hpp"

template <int m_size, typename T>
T findMinBelowMain(T matrix[m_size][m_size]);

template <int m_size, typename T>
T findMaxAboveSide(T matrix[m_size][m_size]);

template <int m_size, typename T>
void replaceMinWithMax(T matrix[m_size][m_size]);

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


template <int m_size, typename T>
T findMinBelowMain(T matrix[m_size][m_size])
{
  T min = matrix[m_size - 1][m_size - 2];
  for (int row = m_size - 1; row >= 0; row--) {
    for (int col = row - 1; col >= 0; col--) {
      if (matrix[row][col] < min) {
        min = matrix[row][col];
      }
    }
  }
  
  return min;
}


template <int m_size, typename T>
T findMaxAboveSide(T matrix[m_size][m_size])
{
  T max = matrix[0][0];
  for (int row = 0; row < m_size; row++) {
    for (int col = 0; col < (m_size - row) - 1; col++) {
      if (matrix[row][col] > max) {
        max = matrix[row][col];
      }
    }
  }
  
  return max;
}


template <int m_size, typename T>
void replaceMinWithMax(T matrix[m_size][m_size])
{
  int minX = 0;
  int minY = 0;
  int maxX = 0;
  int maxY = 0;
  
  T min = matrix[0][0];
  T max = matrix[0][0];
  
  for (int row = 0; row < m_size; row++) {
    for (int col = 0; col < m_size; col++) {
      if (matrix[row][col] > max) {
        max = matrix[row][col];
        maxX = col;
        maxY = row;
      }
      
      if (matrix[row][col] < min) {
        min = matrix[row][col];
        minX = col;
        minY = row;
      }
    }
  }
  
  matrix[minY][minX] = max;
  matrix[maxY][maxX] = min;
}
