// Copyright 2018 Your Name cris20050925@mail.ru

#include <tasks.hpp>


// Task 1.
void multi_2(std::vector<int>& input) {
    for (auto& elem : input) {
        elem *= 2;
    }
}

void reduce_a(std::vector<int>& input, int a) {
    for (auto& elem : input) {
        elem -= abs(a);
    }
}

void div_on_first(std::vector<int>& input) {
    int first = input[0];
    for (auto& elem : input) {
        elem /= first;
    }
}
