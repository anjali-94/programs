#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student {
    int studentID;
    char name[50];
    int age;
    float gpa;
};

void addStudent(const char* filename, const Student& newStudent) {
    ofstream outFile(filename, ios::binary | ios::app);

    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    outFile.write(reinterpret_cast<const char*>(&newStudent), sizeof(Student));
    outFile.close();
}

void deleteStudent(const char* filename, int targetStudentID) {
    ifstream inFile(filename, ios::binary);
    ofstream outFile("temp.dat", ios::binary);

    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    Student currentStudent;
    bool studentFound = false;

    while (inFile.read(reinterpret_cast<char*>(&currentStudent), sizeof(Student))) {
        if (currentStudent.studentID != targetStudentID) {
            outFile.write(reinterpret_cast<const char*>(&currentStudent), sizeof(Student));
        } else {
            studentFound = true;
        }
    }

    inFile.close();
    outFile.close();

    remove(filename);
    rename("temp.dat", filename);

    if (!studentFound) {
        cout << "Student with ID " << targetStudentID << " not found." << endl;
    } else {
        cout << "Student with ID " << targetStudentID << " deleted successfully." << endl;
    }
}

void updateStudent(const char* filename, int targetStudentID, const Student& updatedStudent) {
    fstream file(filename, ios::binary | ios::in | ios::out);

    if (!file) {
        cerr << "Error opening file for reading and writing!" << endl;
        return;
    }

    Student currentStudent;
    bool studentFound = false;

    while (file.read(reinterpret_cast<char*>(&currentStudent), sizeof(Student))) {
        if (currentStudent.studentID == targetStudentID) {
            file.seekp(-static_cast<int>(sizeof(Student)), ios::cur);
            file.write(reinterpret_cast<const char*>(&updatedStudent), sizeof(Student));
            studentFound = true;
            break;
        }
    }

    file.close();

    if (!studentFound) {
        cout << "Student with ID " << targetStudentID << " not found." << endl;
    } else {
        cout << "Student with ID " << targetStudentID << " updated successfully." << endl;
    }
}

int main() {
    const char* filename = "student_records.dat";

    // Adding a new student
    Student newStudent;
    newStudent.studentID = 1;
    strcpy(newStudent.name, "John Doe");
    newStudent.age = 20;
    newStudent.gpa = 3.8;
    addStudent(filename, newStudent);

    // Adding another student
    newStudent.studentID = 2;
    strcpy(newStudent.name, "Jane Smith");
    newStudent.age = 22;
    newStudent.gpa = 3.5;
    addStudent(filename, newStudent);

    // Deleting a student by ID
    int studentIDToDelete = 1;
    deleteStudent(filename, studentIDToDelete);

    // Updating student information by ID
    int studentIDToUpdate = 2;
    Student updatedStudent;
    updatedStudent.studentID = 2;
    strcpy(updatedStudent.name, "Jane Doe");
    updatedStudent.age = 23;
    updatedStudent.gpa = 3.6;
    updateStudent(filename, studentIDToUpdate, updatedStudent);

    return 0;
}
