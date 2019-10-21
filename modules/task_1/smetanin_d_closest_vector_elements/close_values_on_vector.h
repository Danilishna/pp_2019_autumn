// Copyright 2019 Smetanin Danila
#ifndef MODULES_TASK_1_SMETANIN_D_CLOSEST_VECTOR_ELEMENTS_CLOSE_VALUES_ON_VECTOR_H_
#define MODULES_TASK_1_SMETANIN_D_CLOSEST_VECTOR_ELEMENTS_CLOSE_VALUES_ON_VECTOR_H_

#include <utility>
#include <vector>

std::vector<int> getRandomVector(int size);

int getStartPos(int size, int comm_size, int rank);

std::vector<int> parseArray(int size, int comm_size);

std::pair<int, int> getClosestVectorNearbyPositions(const std::vector<int>& v, int count);

std::pair<int, int> getClosestVectorNearbyPositionsOneProc(const std::vector<int>& v, int count);

#endif  // MODULES_TASK_1_SMETANIN_D_CLOSEST_VECTOR_ELEMENTS_CLOSE_VALUES_ON_VECTOR_H_

