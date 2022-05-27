#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
        private:
                string name;
                string id;
               /* vector<int> grades; */

        public:

                vector<int> grades;
                        
                Student(string name_c, string id_c) {
                        name = name_c;
                        id = id_c;
                }

                string getName(){return name;}
                string getId(){return id;}
                

                void addGrade(int grade) {
                        grades.push_back(grade);
                }

};

int main() {
        Student newStudent("jirka", "R34TZFBVCXDHT");
        cout << newStudent.getName() << " | " << newStudent.getId() << "\n";
        newStudent.addGrade(3);
        newStudent.addGrade(1);
        cout << newStudent.grades.size(); /* newStudent.grades[index] */
} 
