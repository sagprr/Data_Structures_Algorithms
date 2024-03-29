#include <iostream>
#include <vector>

int migratoryBirds(std::vector<int> arr) {
    int max = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    std::vector<int> status(max + 1);
    for (int i = 0; i < n; i++)
        status[arr[i]]++;
    max = 0;
    for (int i = 0; i < status.size(); i++) {
        if (status[i] > status[max])
            max = i;
    }
    return max;
}

int main() {
    std::vector<int> arr = {1, 4, 4, 4, 5, 3};
    std::cout << migratoryBirds(arr) << std::endl;
    return 0;
}
