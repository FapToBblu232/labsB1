// Copyright 2018 Your Name cris20050925@mail.ru

#include <tasks.hpp>

#include <string.h>

// Task 5.
bool name_is_even(const std::string& name) {
    return name.size() % 2 == 0;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    return name_one.size() > name_two.size();
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    the_longest = name_one;
    the_shortest = name_one;
    if (the_longest.size() < name_two.size()) the_longest = name_two;
    if (the_longest.size() < name_three.size()) the_longest = name_three;
    //теперь минимум
    if (the_shortest.size() > name_two.size()) the_shortest = name_two;
    if (the_shortest.size() > name_three.size()) the_shortest = name_three;
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std::string s = "";
    n = (n > static_cast<int>(word.length())) ? word.length() - 1 : n;
    for (int i = m; i < n + 1; i++) {
        s.push_back(word[i]);
    }
    return s;
}

// Task 9.
void add_stars(std::string& word) {
    std::string stars = "";
    word.reserve(word.size() * 2);
    for (size_t i = 0; i < word.size(); ++i) {
        stars.append("*");
    }
    word = stars + word + stars;
}

// Task 10.
int percent_of_a(const std::string& word) {
    int numa = 0;
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == 'a') ++numa;
    }
    return 100 * numa / word.size();
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string sntnce = "Can you can a can as a canner can can a can?";
    for (size_t i = 0; i < sntnce.size() - 2; ++i) {
        if (memcmp(&sntnce[i], "can", 3) == 0){
            sntnce.replace(i, 3, new_word);
        }
    }
    return sntnce;
}
