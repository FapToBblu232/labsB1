// Copyright 2018 Your Name cris20050925@mail.ru

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
    int a = static_cast<int>(input.size());
    for (int i = 0; i < a; ++i) {
        if (input[i] < 0) {
            input.erase(input.begin() + i);
            break;
        }
    }
}

void remove_last_even(std::vector<int>& input) {
    for (int i = input.size() - 1; i >= 0; --i) {
        if (input[i] % 2 == 0) {
            input.erase(input.begin() + i);
            break;
        }
    }
}
