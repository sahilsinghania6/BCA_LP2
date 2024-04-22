#include <iostream>
#include <cstring>

class Students {
private:
    char name[50];
    int marks[5];
    
   
    char calculateGrade(int mark) {
        if (mark > 80)
            return 'E';
        else if (mark >= 70 && mark <= 80)
            return 'A';
        else if (mark >= 60 && mark < 70)
            return 'B';
        else if (mark >= 50 && mark < 60)
            return 'C';
        else
            return 'F';
    }

public:
    
    void setDetails(const char* studentName, const int studentMarks[5]) {
        strcpy(name, studentName);
        for (int i = 0; i < 5; ++i) {
            marks[i] = studentMarks[i];
        }
    }

 
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << (i+1) << ": " << marks[i] << std::endl;
        }
        std::cout << "Grade:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << (i+1) << ": " << calculateGrade(marks[i]) << std::endl;
        }
    }
};

int main() {
    Students student1;
    const char name[] = "John";
    int marks[] = {85, 72, 60, 55, 40}; 
    student1.setDetails(name, marks);
    student1.displayDetails();
    return 0;
}
