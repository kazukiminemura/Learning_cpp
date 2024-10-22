#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3}; //vector class has exception member

    try {
        // access to invalid index
        int num = numbers.at(5); // vector obj throw out_of_range class!!!!
        std::cout << "number: " << num << std::endl;
    } catch (const std::out_of_range& e) { // catch the exception here
        std::cerr << "out of range: " << e.what() << std::endl;
    }

    return 0;
}
