//
//  t_15.cpp
//  t_14
//
//  Created by Vladislav Khudiakov on 6/16/19.
//  Copyright © 2019 Vladislav Khudiakov. All rights reserved.
//

#include "t_15.hpp"

template <int m_size, typename T>
T findMaxBelowMain(T matrix[m_size][m_size])
{
  T max = matrix[0][1];
  for (int row = 0; row < m_size; row++) {
    for (int col = row + 1; col < m_size; col++) {
      if (matrix[row][col] > max) {
        max = matrix[row][col];
      }
    }
  }
  
  return max;
}
