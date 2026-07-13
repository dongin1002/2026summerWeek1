#include "student.h"

int main() {
    using namespace KwakMinChae2449101;
    using namespace std;

    student s1;
    s1.input();
    s1.print();

    student s2;
    s2.setId(7654321);
    s2.setScore(85);
    s2.print();

    if (s1.getId() == s2.getId()
        && s1.getScore() == s2.getScore()
        && s1.getGrade() == s2.getGrade() )
        cout << "s1 and s2 are equal.\n";
    else
        cout << "s1 and s2 are not equal.\n";

    return 0;
}
