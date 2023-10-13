// Copyright 2018 Your Name cris200509@mail.ru

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    for (size_t i = 0; i < 3; ++i) {
        int temp = input[i];
        input[i] = input[input.size() - 3 + i];
        input[input.size() - 3 + i] = temp;
    }
}
