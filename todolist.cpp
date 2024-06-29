#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        cout << "\nTo-Do List:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task to add: ";
                cin.ignore(); 
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added successfully!\n";
                break;

            case 2:
                if (tasks.empty()) {
                    cout << "Your to-do list is empty.\n";
                } else {
                    cout << "\nTasks:\n";
                    for (int i = 0; i < tasks.size(); i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                if (tasks.empty()) {
                    cout << "Your to-do list is empty.\n";
                } else {
                    cout << "Enter task number to delete: ";
                    int taskNum;
                    cin >> taskNum;

                    if (taskNum > 0 && taskNum <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskNum - 1);
                        cout << "Task deleted successfully!\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;

            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
