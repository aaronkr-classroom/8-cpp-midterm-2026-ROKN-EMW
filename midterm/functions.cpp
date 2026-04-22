#include <iostream>
#include "functions.h"

double calculateAverage(const vector<int>& grades) {
    int total = 0;

        for (int i = 0; i < grades.size(); i++) {
            total += grades[i];
        }

    return total / grades.size();
}
