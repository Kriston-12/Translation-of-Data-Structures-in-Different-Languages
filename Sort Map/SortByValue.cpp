#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    // Sample map
    std::map<std::string, int> myMap;
    myMap["a"] = 3;
    myMap["b"] = 1;
    myMap["c"] = 2;

    // Copy key-value pairs to a vector
    std::vector<std::pair<std::string, int>> vec(myMap.begin(), myMap.end());

    // Sort the vector by values
    std::sort(vec.begin(), vec.end(), [](const std::pair<std::string, int> &a, const std::pair<std::string, int> &b) {
        return a.second < b.second;
    });

    // Output the sorted map
    for (const auto &pair : vec) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
