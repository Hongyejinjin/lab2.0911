#include <iostream>

namespace hongyejin2649058 //이름학번
{
    struct student
    {
        int id{}; //중괄호 필수, 소괄호하면 함수로 인식
        char grade{};
    };
    student inputStudent() //리턴타입 student
    {
        student s{}; //중괄호 없어도 됨
        std::cout << "Enter the student ID: ";
        std::cin >> s.id;
        std::cout << "Enter the student GRADE: ";
        std::cin >> s.grade;
        return s;
    }
    
    void printStudent(student s) //s에 &붙이고 pass-by-reference로 전해주면 좋다. 구조체면!
    {
        std::cout << "ID: "<< s.id << std::endl;
        std::cout << "GRADE: " << s.grade << std::endl;
    }
}


int main() //매개변수 없음 void
{
    using namespace std; // std안에 들어있는 모든 애들을 std 없이 사용할 것이라는 의미
    using namespace hongyejin2649058;

    student s1{ inputStudent() };
    student s2{ inputStudent() };

    printStudent(s1);
    printStudent(s2);

    return 0; //에러가 하나도 없음
}