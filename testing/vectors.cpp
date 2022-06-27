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


                
                void displayGrades(){
                        for(int i = 0; i < grades.size(); i++){
                                cout << grades[i] << "\n";
                        }
                }
                void addGrade(int grade) {
                        grades.push_back(grade);
                }

};

int main() {
        Student newStudent("jirka", "R34TZFBVCXDHT");
        cout << newStudent.getName() << " | " << newStudent.getId() << "\n";
        newStudent.addGrade(3);
        newStudent.addGrade(1);
        newStudent.addGrade(6);
        newStudent.displayGrades();
} 

// std::vector<std::array<int, 2>> vp = { {{1,1}}, {{0,0}} }; ARRAYS INSIDE ARRAY, MAXIMAL LENGHT OF SUB_ARRAY IS 2(#include <array>)
// std::vector<std::vector<int>> screen = { {{9, 13}}, {{32, 1, 23}} }; VECTOR ARRAYS 
