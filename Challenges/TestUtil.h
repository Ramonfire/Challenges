#ifndef _TEST_UTIL_H_
#define _TEST_UTIL_H_
#include<iostream>
#include <vector>
#include"Test.h"

using std::vector;


std::unique_ptr<vector<std::shared_ptr<Test>>> make();

void fill(vector<std::shared_ptr<Test>>& vec, int num);

void DisplayPtrVector(const vector<std::shared_ptr<Test>>& vec);





#endif
