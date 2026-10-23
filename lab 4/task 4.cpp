
#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Action {
    char type;   // 'I' = Insert, 'D' = Delete
    char ch;
};

class TextEditor {
private:
    string text;
    stack<Action> undoStack;
    stack<Action> redoStack;

public:
    void typeCharacter(char ch) {
        text += ch;
        undoStack.push({ 'I', ch });

        // A new action clears the redo history
        while (!redoStack.empty()) {
            redoStack.pop();
        }

        cout << "Character inserted successfully.\n";
    }

    void deleteCharacter() {
        if (text.empty()) {
            cout << "Nothing to delete!\n";
            return;
        }

        char ch = text.back();
        text.pop_back();

        undoStack.push({ 'D', ch });

        while (!redoStack.empty()) {
            redoStack.pop();
        }

        cout << "Character deleted successfully.\n";
    }

    void undo() {
        if (undoStack.empty()) {
            cout << "Nothing to undo!\n";
            return;
        }

        Action a = undoStack.top();
        undoStack.pop();

        if (a.type == 'I') {
            text.pop_back();
        }
        else {
            text += a.ch;
        }

        redoStack.push(a);
        cout << "Undo successful.\n";
    }

    void redo() {
        if (redoStack.empty()) {
            cout << "Nothing to redo!\n";
            return;
        }

        Action a = redoStack.top();
        redoStack.pop();

        if (a.type == 'I') {
            text += a.ch;
        }
        else {
            text.pop_back();
        }

        undoStack.push(a);
        cout << "Redo successful.\n";
    }

    void displayText() {
        cout << "Current Text: " << text << "\n";
    }
};

int main() {
    TextEditor editor;
    int choice;
    char ch;

    do {
        cout << "\n--- TEXT EDITOR ---\n";
        cout << "1. Type a character\n";
        cout << "2. Delete last character\n";
        cout << "3. Undo\n";
        cout << "4. Redo\n";
        cout << "5. Display text\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a character: ";
            cin >> ch;
            editor.typeCharacter(ch);
            break;

        case 2:
            editor.deleteCharacter();
            break;

        case 3:
            editor.undo();
            break;

        case 4:
            editor.redo();
            break;

        case 5:
            editor.displayText();
            break;

        case 6:
            cout << "Exiting text editor.\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
