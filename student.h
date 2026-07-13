#pragma once
#include <iostream>

namespace KwakMinChae2449101
{
    class student 
    {
        int id{};
        int score{};
        char grade{};
        void testId();
        void testScore();
        void calGrade();
    public:
        student(int i = 2449100, int s = 0, char g = 'F') 
        : id(i), score(s), grade(g) {
            testId();
            testScore();
            calGrade();
        };
        void print();
        void input();
        int getId();
        int getScore();
        char getGrade();
        void setId(int id);
        void setScore(int score);
    };
}
