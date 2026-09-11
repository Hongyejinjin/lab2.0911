#include "student.h"

namespace hongyejin2649058 //이름학번
{
    student inputStudent() //리턴타입 student
    {
        student s{}; //중괄호 없어도 됨
        std::cout << "Enter the student ID: ";
        std::cin >> s.id;
        std::cout << "Enter the student GRADE: ";
        std::cin >> s.grade;
        return s;
    }
    
    void printStudent(const student &s) //s에 &붙이고 pass-by-reference로 전해주면 좋다. 구조체면!
    {
        std::cout << "ID: "<< s.id << std::endl;
        std::cout << "GRADE: " << s.grade << std::endl;
    }
}
