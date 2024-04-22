#include <iostream>
#include <string>

class NumberConverter {
private:
    int numbers[5];
    std::string words[5];

    // Function to convert integer to word
    std::string convertToWord(int num) {
        switch (num) {
            case 0:
                return "Zero";
            case 1:
                return "One";
            case 2:
                return "Two";
            case 3:
                return "Three";
            case 4:
                return "Four";
            case 5:
                return "Five";
            case 6:
                return "Six";
            case 7:
                return "Seven";
            case 8:
                return "Eight";
            case 9:
                return "Nine";
            default:
                return "Invalid";
        }
    }

public:
    // Member function to accept five integers and convert them to words
    void acceptNumbers(int num1, int num2, int num3, int num4, int num5) {
        numbers[0] = num1;
        numbers[1] = num2;
        numbers[2] = num3;
        numbers[3] = num4;
        numbers[4] = num5;

        for (int i = 0; i < 5; ++i) {
            words[i] = convertToWord(numbers[i]);
        }
    }

    // Member function to display the equivalent values in words
    void displayWords() {
        for (int i = 0; i < 5; ++i) {
            std::cout << words[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    NumberConverter converter;
    converter.acceptNumbers(2, 4, 0, 1, 7);
    std::cout << "Output: ";
    converter.displayWords();
    return 0;
}
