// Copyright 2018 Your Name cris20050925@mail.ru

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
    if (name.size() % 2) {
        return true;
    }
    return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    if (name_one.size() > name_two.size()) {
        return true;
    }
    return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    the_longest = name_one, the_shortest = name_one;
    if (the_longest.size() < name_two.size()) the_longest = name_two;
    if (the_longest.size() < name_three.size()) the_longest = name_three;
    //теперь минимум
    if (the_shortest.size() > name_two.size()) the_shortest = name_two;
    if (the_shortest.size() > name_three.size()) the_shortest = name_three;
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std::string s = "";
    for (int i = m; i < n + 1; i++) {
        s += word[i];
    }
    return s;
}

// Task 9.
void add_stars(std::string& word) {
    for (size_t i = 0; i < word.size(); ++i) {
        word = '*' + word + '*';
    }
}

// Task 10.
int percent_of_a(const std::string& word) {
    int numa = 0, answ;
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == 'a') ++numa;
    }
    answ = 100 * numa / word.size();
    return answ;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string predlozhenie;
    for (size_t i = 0; i < predlozhenie.size() - 2; ++i) {
        if (predlozhenie[i] == 'c' && predlozhenie[i + 1] == 'a'\
        && predlozhenie[i + 2] == 'n'){
            predlozhenie.replace(i, 3, new_word);
        }
    }
    return predlozhenie;
}
