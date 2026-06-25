#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

struct PracticeTopic {
    std::string name;
    std::string focus;
};

void printTopics(const std::vector<PracticeTopic>& topics) {
    std::cout << "C++ Practice Library\n";
    std::cout << "====================\n\n";

    for (std::size_t i = 0; i < topics.size(); ++i) {
        std::cout << std::setw(2) << i + 1 << ". " << topics[i].name
                  << " - " << topics[i].focus << '\n';
    }
}

void saveProgress(const std::string& topicName) {
    std::ofstream log("practice-log.txt", std::ios::app);
    log << "Practiced: " << topicName << '\n';
}

int main() {
    std::vector<PracticeTopic> topics = {
        {"Input and output", "cin, cout, formatting"},
        {"Conditionals", "if, else, switch"},
        {"Loops", "for, while, loop control"},
        {"Functions", "parameters, return values"},
        {"Vectors", "dynamic collections"},
        {"Files", "reading and writing text files"},
        {"Classes", "basic object-oriented design"}
    };

    printTopics(topics);

    std::cout << "\nChoose a topic number to log practice: ";
    int choice = 0;
    std::cin >> choice;

    if (choice < 1 || choice > static_cast<int>(topics.size())) {
        std::cout << "Invalid choice. Try again.\n";
        return 1;
    }

    saveProgress(topics[choice - 1].name);
    std::cout << "Saved practice log for: " << topics[choice - 1].name << "\n";

    return 0;
}
