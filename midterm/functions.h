#pragma once

#ifndef GURAD_functions_h
#define GURAD_functions_h

#include <vector>
#include <string>

using std::vector;
using std::string;

// 학생 정보를 저장하는 구조체
struct student {
    string name;
    vector<int> scores;
    double average;
};

// 평균 점수를 계산하는 함수 선언
double calculateAverage(const vector<int>& scores);

#endif
