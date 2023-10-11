// Copyright 2018 Your Name cris200509@mail.ru

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
    int sum = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        sum += input[i];
    }
    return sum;
}

int square_sum(const std::vector<int>& input) {
    int square_sum = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        square_sum += input[i] * input[i];
    }
    return square_sum;
}

int sum_six(const std::vector<int>& input) {
    int sum_of_six = 0;
    for (size_t i = 0; i < 6; ++i) {
        sum_of_six += input[i];
    }
    return sum_of_six;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
    int fixed_sum = 0;
    for (int i = k1; i < k2 + 1; ++i) {
        fixed_sum += input[i];
    }
    return fixed_sum;
}

int mean(const std::vector<int>& input) {
    int sum = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        sum += input[i];
    }
    return sum / input.size();
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
    int sum = 0;
    for (int i = s1; i < s2 + 1; ++i) {
        sum += input[i];
    }
    return sum / (s2 - s1 + 1);
}
