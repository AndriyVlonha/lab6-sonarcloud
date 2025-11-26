#include <iostream>
#include <vector>
#include <numeric>

// Проста функція, щоб було що аналізувати
int sum_positive(const std::vector<int>& nums) {
    int sum = 0;
    for (int x : nums) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    std::vector<int> data = {1, -2, 3, 4, -5};
    int result = sum_positive(data);
    std::cout << "Sum of positive numbers = " << result << std::endl;
    return 0;
}
