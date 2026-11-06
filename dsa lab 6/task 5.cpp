//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    string name;
//    int priority;
//    Node* next;
//
//    Node(string n, int p) {
//        name = n;
//        priority = p;
//        next = nullptr;
//    }
//};
//class ReservationQueue {
//private:
//    Node* head;
//
//public:
//    ReservationQueue() {
//        head = nullptr;
//    }
//    void AddStudent(string name, int priority) {
//        if (priority < 1 || priority > 3) {
//            cout << "Invalid priority!" << endl;
//            return;
//        }
//
//        Node* newNode = new Node(name, priority);
//
//      
//        if (head == nullptr ||
//            priority < head->priority) {
//
//            newNode->next = head;
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//
//          
//            while (temp->next != nullptr &&
//                temp->next->priority <= priority) {
//                temp = temp->next;
//            }
//
//            newNode->next = temp->next;
//            temp->next = newNode;
//        }
//
//        cout << name << " added successfully." << endl;
//    }
//
//    // Remove student
//    void RemoveStudent(string name) {
//        if (head == nullptr) {
//            cout << "Reservation list is empty!" << endl;
//            return;
//        }
//
//        if (head->name == name) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//
//            cout << name << " reservation cancelled." << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        while (temp->next != nullptr &&
//            temp->next->name != name) {
//            temp = temp->next;
//        }
//
//        if (temp->next == nullptr) {
//            cout << "Student not found!" << endl;
//        }
//        else {
//            Node* del = temp->next;
//            temp->next = del->next;
//            delete del;
//
//            cout << name << " reservation cancelled." << endl;
//        }
//    }
//
//    void UpdatePriority(string name, int newPriority) {
//        if (newPriority < 1 || newPriority > 3) {
//            cout << "Invalid priority!" << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        while (temp != nullptr && temp->name != name) {
//            temp = temp->next;
//        }
//
//        if (temp == nullptr) {
//            cout << "Student not found!" << endl;
//            return;
//        }
//
//        RemoveStudent(name);
//
//        AddStudent(name, newPriority);
//
//        cout << "Priority updated successfully." << endl;
//    }
//    void Display() {
//        if (head == nullptr) {
//            cout << "No reservations available." << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        cout << "\nStudent Reservation List:" << endl;
//
//        while (temp != nullptr) {
//            cout << temp->name
//                << " (Priority: " << temp->priority << ")"
//                << " -> ";
//
//            temp = temp->next;
//        }
//
//        cout << "NULL" << endl;
//    }
//
//    void Count() {
//        int count = 0;
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total reservations: " << count << endl;
//    }
//    void BookReturned() {
//        if (head == nullptr) {
//            cout << "No student waiting for this book." << endl;
//            return;
//        }
//
//        Node* temp = head;
//
//        cout << "Book issued to: " << temp->name << endl;
//
//        head = head->next;
//        delete temp;
//    }
//
//    ~ReservationQueue() {
//        while (head != nullptr) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//class Library {
//private:
//    ReservationQueue book1;
//    ReservationQueue book2;
//
//public:
//    ReservationQueue& GetQueue(int book) {
//        if (book == 1)
//            return book1;
//        else
//            return book2;
//    }
//};
//
//int main() {
//    Library library;
//    cout << "\n===== BOOK 1: DATA STRUCTURES =====" << endl;
//
//    ReservationQueue& q1 = library.GetQueue(1);
//
//    q1.AddStudent("Ali", 3);
//    q1.AddStudent("Ahmed", 2);
//    q1.AddStudent("Sara", 1);
//
//    q1.Display();
//    cout << "\nUpdating Ali's Priority:" << endl;
//    q1.UpdatePriority("Ali", 1);
//
//    q1.Display();
//    cout << "\nCancelling Ahmed's Reservation:" << endl;
//    q1.RemoveStudent("Ahmed");
//
//    q1.Display();
//    q1.Count();
//    cout << "\nBook Returned:" << endl;
//    q1.BookReturned();
//
//    q1.Display();
//    cout << "\n===== BOOK 2: PROGRAMMING =====" << endl;
//
//    ReservationQueue& q2 = library.GetQueue(2);
//
//    q2.AddStudent("Usman", 2);
//    q2.AddStudent("Ayesha", 1);
//    q2.AddStudent("Hassan", 3);
//
//    q2.Display();
//
//    q2.Count();
//
//    cout << "\nBook Returned:" << endl;
//    q2.BookReturned();
//
//    q2.Display();
//
//    return 0;
//}
