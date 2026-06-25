#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores = {88, 91, 76, 95, 84};
    int total = 0;

    for (int score : scores) {
        total += score;
    }

    double average = static_cast<double>(total) / scores.size();

    std::cout << "Scores: ";
    for (int score : scores) {
        std::cout << score << ' ';
    }

    std::cout << "\nAverage: " << average << '\n';
    return 0;
}
