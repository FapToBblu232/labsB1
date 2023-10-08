// Copyright 2018 Your Name cris200509@mail.ru

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    int temp;
    for (size_t i = 0; i < 3; ++i) {
        temp = input[i];
        input[i] = input[18 + i];
        input[18 + i] = temp;
    }
    
}
