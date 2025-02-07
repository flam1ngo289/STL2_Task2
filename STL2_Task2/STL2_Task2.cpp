﻿#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <string>
#include <iterator>

template <typename Container>
void print_container(const Container& container) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != container.end()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };

    std::cout << "std::set: ";
    print_container(test_set); 

    std::cout << "std::list: ";
    print_container(test_list); 

    std::cout << "std::vector: ";
    print_container(test_vector); 

    return 0;
}
