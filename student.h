#pragma once

//#ifndef STUDENT_H 전통적인 방법 ()
//#define STUDENT_H
#include <iostream>

namespace hongyejin2649058 //이름학번
{
    struct student
    {
        int id{}; //중괄호 필수, 소괄호하면 함수로 인식
        char grade{};
    };
    student inputStudent(); //리턴타입 student
    void printStudent(const student &s); //s에 &붙이고 pass-by-reference로 전해주면 좋다. 구조체면!
    
}

//#endif
