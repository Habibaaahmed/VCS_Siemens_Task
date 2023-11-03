#include <iostream>
#include <vector>

int getSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

double getAverage(const std::vector<int>& numbers) {
    int sum = getSum(numbers);
    return static_cast<double>(sum) / numbers.size();
}
int getMin(const std::vector<int>& numbers) {
    int min = numbers[0];
    for (int num : numbers) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(numbers);
    double average = getAverage(numbers);
    int min = getMin(numbers);
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Average of numbers: " << average << std::endl;
    std::cout << "Minimum of numbers: " << min << std::endl;
    return 0;
}
