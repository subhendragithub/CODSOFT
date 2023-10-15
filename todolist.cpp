#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct todolist
{
    string name;
    int completed;
};

void addTask(vector<todolist> &tasks, const string &name)
{
    todolist task;
    task.name = name;
    task.completed = false;
    tasks.push_back(task);
    cout << "Task added: " << name << endl;
}
void viewTask(const vector<todolist> &tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks in the list.";
    }
    else
    {
        cout << "Task in the list: ";
        for (int i = 0; i < tasks.size(); ++i)
        {
            const todolist &task = tasks[i];
            cout << i + 1 << ". " << task.name << " [" << (task.completed ? "Completed" : "Pending") << "]" << endl;
        }
    }
}
void markTaskascompleted(vector<todolist> &tasks, int taskIndex)
{
    if (taskIndex >= 0 && taskIndex < tasks.size())
    {
        cout << "Task marked as completed: " << tasks[taskIndex].name << endl;
    }
    else
    {
        cout << "Invalid task index." << endl;
    }
}
void removeTask(vector<todolist> &tasks, int index)
{
    if (index >= 0 && index < tasks.size())
    {
        cout << "Task removed: " << tasks[index].name << endl;
        tasks.erase(tasks.begin() + index);
    }
    else
    {
        cout << "Invalid task index." << endl;
    }
}
int main()
{
    vector<todolist> tasks;
    while (true)
    {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your Choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cin.ignore();
            while (true)
            {
                string name;
                cout << "Enter the task name: ";
                getline(cin, name);
                addTask(tasks, name);

                char addAnother;
                cout << "Add another task? (y/n): ";
                cin >> addAnother;

                if (addAnother != 'y' && addAnother != 'Y')
                {
                    break;
                }
                cin.ignore();
            }
            break;
        }
        case 2:

            viewTask(tasks);
            break;

        case 3:
        {
            int index;
            cout << "Enter the task number to mark as completed:  ";
            cin >> index;
            markTaskascompleted(tasks, index - 1);
            break;
        }

        case 4:
        {
            int index;
            cout << "Enter the task number to remove:  ";
            cin >> index;
            removeTask(tasks, index - 1);
            break;
        }

        case 5:
        {
            cout << "Good bye";
            return 0;
        }

        default:
            cout << "Invalid choice. " << endl;
        }
    }

    return 0;
}