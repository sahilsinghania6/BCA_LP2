#include <iostream>

class Box {
private:
    int length;
    int width;

public:
    void getDimensions();
    void showDimensions();
};

void Box::getDimensions() {
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
}

void Box::showDimensions() {
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
}

int main() {
    Box box1, box2, box3;

    std::cout << "For box1:" << std::endl;
    box1.getDimensions();
    box1.showDimensions();

    std::cout << "\nFor box2:" << std::endl;
    box2.getDimensions();
    box2.showDimensions();

    std::cout << "\nFor box3:" << std::endl;
    box3.getDimensions();
    box3.showDimensions();

    return 0;
}
