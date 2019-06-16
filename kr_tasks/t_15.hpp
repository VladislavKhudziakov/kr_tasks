//
//  t_15.hpp
//  kr_tasks
//
//  Created by Vladislav Khudiakov on 6/16/19.
//  Copyright © 2019 Vladislav Khudiakov. All rights reserved.
//

#ifndef t_15_hpp
#define t_15_hpp

template <int m_size, typename T>
T findMinBelowMain(T matrix[m_size][m_size]);

template <int m_size, typename T>
T findMaxAboveSide(T matrix[m_size][m_size]);

template <int m_size, typename T>
void replaceMinWithMax(T matrix[m_size][m_size]);

//#include "t_15.cpp"

#endif /* t_15_hpp */
