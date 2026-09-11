#include "student.h"

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