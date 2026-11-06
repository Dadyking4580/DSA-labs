//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) {
//        data = value;
//        next = nullptr;
//    }
//};
//
//class LinkedList {
//private:
//    Node* head;
//
//public:
//    LinkedList() {
//        head = nullptr;
//    }
//
//    // Insert at specific position
//    void Insert(int value, int position) {
//        Node* newNode = new Node(value);
//
//        if (position < 1) {
//            cout << "Invalid position!" << endl;
//            delete newNode;
//            return;
//        }
//
//        if (position == 1) {
//            newNode->next = head;
//            head = newNode;
//            cout << "Node inserted." << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
//            temp = temp->next;
//        }
//
//        if (temp == nullptr) {
//            cout << "Invalid position!" << endl;
//            delete newNode;
//            return;
//        }
//
//        newNode->next = temp->next;
//        temp->next = newNode;
//
//        cout << "Node inserted." << endl;
//    }
//
//    // Delete at specific position
//    void Delete(int position) {
//        if (head == nullptr || position < 1) {
//            cout << "Invalid position or empty list!" << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        if (position == 1) {
//            head = head->next;
//            delete temp;
//            cout << "Node deleted." << endl;
//            return;
//        }
//
//        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
//            temp = temp->next;
//        }
//
//        if (temp == nullptr || temp->next == nullptr) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//
//        Node* del = temp->next;
//        temp->next = del->next;
//
//        delete del;
//
//        cout << "Node deleted." << endl;
//    }
//
//    // Search element
//    void Search(int value) {
//        Node* temp = head;
//        int position = 1;
//
//        while (temp != nullptr) {
//            if (temp->data == value) {
//                cout << "Element found at position "
//                    << position << endl;
//                return;
//            }
//
//            temp = temp->next;
//            position++;
//        }
//
//        cout << "Element not found!" << endl;
//    }
//
//    // Count nodes
//    void Count() {
//        int count = 0;
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total nodes: " << count << endl;
//    }
//
//    // Display list
//    void Display() {
//        Node* temp = head;
//
//        cout << "List: ";
//
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//
//        cout << "NULL" << endl;
//    }
//
//    ~LinkedList() {
//        while (head != nullptr) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//
//int main() {
//    LinkedList list;
//    int choice, value, position;
//
//    do {
//        cout << "\n===== LINKED LIST MENU =====" << endl;
//        cout << "1. Insert Node" << endl;
//        cout << "2. Delete Node" << endl;
//        cout << "3. Search Element" << endl;
//        cout << "4. Count Nodes" << endl;
//        cout << "5. Display List" << endl;
//        cout << "0. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//
//            cout << "Enter position: ";
//            cin >> position;
//
//            list.Insert(value, position);
//            break;
//
//        case 2:
//            cout << "Enter position: ";
//            cin >> position;
//
//            list.Delete(position);
//            break;
//
//        case 3:
//            cout << "Enter value to search: ";
//            cin >> value;
//
//            list.Search(value);
//            break;
//
//        case 4:
//            list.Count();
//            break;
//
//        case 5:
//            list.Display();
//            break;
//
//        case 0:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
