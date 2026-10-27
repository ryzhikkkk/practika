#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Объявление структуры
struct Student {
    string name;
    int age;
    int group; // Группа
    double grade;
};

int main() {
    setlocale(LC_ALL, "eng");

    vector<Student> students;
        const int TOTAL_STUDENTS = 5;
        for (int i = 0; i < TOTAL_STUDENTS; i++) {
        Student temp;

        cout << "--- Vvod dannyh dlya studenta #" << i + 1 << " ---" << endl;

        cout << "Enter name (e.g. Ivanov Ivan): ";
        // Очищаем буфер перед getline, чтобы ввод не проскакивал
        if (i > 0) cin.ignore();
        else cin.ignore(0); // Для первого элемента очистка не требуется, если cin еще не использовался

        // Если при первом вводе getline проскакивает, используйте cin.ignore() без условий
        getline(cin, temp.name);

        cout << "Enter age: ";
        cin >> temp.age;

        cout << "Enter group: ";
        cin >> temp.group;

        cout << "Enter average grade: ";
        cin >> temp.grade;

        cout << endl;

        // Добавляем заполненного студента в вектор
        students.push_back(temp);
    }

   Student best_student = students[0];
   for (size_t i = 1; i < students.size(); i++) {
        if (students[i].grade > best_student.grade) {
            best_student = students[i]; // Запоминаем нового лучшего студента
        }
        }
         cout << "=== Student s maximalnym srednim ballom ===" << endl;
    cout << "Name: " << best_student.name << endl;
    cout << "Age: " << best_student.age << endl;
    cout << "Group: " << best_student.group << endl;
    cout << "Max Grade: " << best_student.grade << endl;

    return 0;
}
