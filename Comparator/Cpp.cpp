// Using a Comparator in std::sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool descendingComparator(int a, int b) {
    return a > b;  // Sort in descending order
}

int main() {
    vector<int> numbers = {5, 2, 9, 1, 7};
    sort(numbers.begin(), numbers.end(), descendingComparator);

    // C++ Lambda Version
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    for (int num : numbers) {
        cout << num << " ";
    }
    // Output: 9 7 5 2 1
    return 0;
}



// Example 2: Sorting a Vector of Pairs by Second Element in ascending order
bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;  // Sort by second element
}

int test() {
    vector<pair<int, int>> data = {{1, 3}, {2, 2}, {3, 1}};
    sort(data.begin(), data.end(), sortBySecond);

    // C++ Lambda Version
    sort(data.begin(), data.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
      return a.second < b.second;
    });


    for (const auto &p : data) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    // Output: (3, 1) (2, 2) (1, 3)
    return 0;
}
