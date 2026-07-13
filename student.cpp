#include "student.h"

namespace KwakMinChae2449101
{
    void student::testId(){
        if (id < 1000000 || id > 9999999) {
        std::cout << "Invaild ID. It should be a 7-digit number.\n";
        std::exit(1); }

    }
    void student::testScore(){
        if (score < 0 || score > 100) {
            std::cout << "Invalid score. It should be between 0 and 100.\n";
            std::exit(1);
        }
    }
    void student::calGrade(){
        switch (score/10)
        {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F';
        }
    }
    void student::print(){
        std::cout << "ID: " << id << "\n";
        std::cout << "Score: " << score << "\n";
        std::cout << "Grade: " << grade << "\n";
    }
    void student::input(){
        std::cout << "Enter student ID: ";
        std::cin >> id;
        testId();
        std::cout << "Enter student score (0-100): ";
        std::cin >> score;
        testScore();
        calGrade();
    }
    int student::getId(){
        return id;
    }
    int student::getScore(){
        return score;
    }
    char student::getGrade(){
        return grade;
    }
    void student::setId(int newId){
        id = newId;
        testId();
    }
    void student::setScore(int newScore){
        score = newScore;
        testScore();
        calGrade();
    }
}
