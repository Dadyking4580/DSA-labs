//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    string name;
//    Node* next;
//
//    Node(string n) {
//        name = n;
//        next = nullptr;
//    }
//};
//
//class HospitalQueue {
//private:
//    Node* head;
//
//public:
//    HospitalQueue() {
//        head = nullptr;
//    }
//
//    void AddPatient(string name) {
//        Node* newNode = new Node(name);
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//
//            temp->next = newNode;
//        }
//
//        cout << name << " added to queue." << endl;
//    }
//    void RemovePatient(string name) {
//        if (head == nullptr) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//
//        if (head->name == name) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//
//            cout << name << " cancelled appointment." << endl;
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
//            cout << "Patient not found!" << endl;
//        }
//        else {
//            Node* del = temp->next;
//            temp->next = del->next;
//            delete del;
//
//            cout << name << " cancelled appointment." << endl;
//        }
//    }
//    void Display() {
//        Node* temp = head;
//
//        if (head == nullptr) {
//            cout << "No patients waiting." << endl;
//            return;
//        }
//
//        cout << "\nPatient Waiting Queue:" << endl;
//
//        while (temp != nullptr) {
//            cout << temp->name << " -> ";
//            temp = temp->next;
//        }
//
//        cout << "NULL" << endl;
//    }
//    void Count() {
//        int count = 0;
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total waiting patients: "
//            << count << endl;
//    }
//
//    ~HospitalQueue() {
//        while (head != nullptr) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//
//int main() {
//    HospitalQueue hospital;
//    
//    hospital.AddPatient("Ali");
//    hospital.AddPatient("Ahmed");
//    hospital.AddPatient("Sara");
//    hospital.AddPatient("Ayesha");
//
//    hospital.Display();
//    hospital.RemovePatient("Ahmed");
//    hospital.Display();
//    hospital.Count();
//
//    return 0;
//}
