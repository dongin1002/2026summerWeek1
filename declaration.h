#pragma once

namespace KwakMinChae2449100
{
    struct student
    {
        int id{};
        int score{};
        char grade{};
    };
    student inputStudent();
    void setGrade(student& s);
    void printStudent(const student& s);


    int inputInteger();
    int addIntegers(int a = 1, int b = 1);
}
 
