// COMSC-210 | Lab 18 | Gillian Rhett

#include <iostream>
#include <string>

using namespace std;

struct Review {
    float rating;
    string comment;
    Review* next;
};

void push_front(Review*&);
void push_back(Review*&);

int main() {
    // Ask the user which mode to use, new nodes at the head or the tail of the linked list.
    cout << "Which linked list method should we use?\n";
    cout << "\t[1] New nodes are added at the head of the linked list\n";
    cout << "\t[2] New nodes are added at the tail of the linked list\n";
    cout << "Choice: ";
    string sChoice;
    int iChoice = 0;
    while (iChoice != 1 && iChoice !=2) {
        cin >> sChoice;
        try { iChoice = stoi(sChoice); }
        catch (invalid_argument& e) {
            iChoice = 0;
        }
        if (iChoice != 1 && iChoice !=2)
            cin.clear();
            cout << "Enter a number 1 or 2: ";
    }
    // Obtain two pieces of data from the user, the rating and the comments. Store these in the linked list.
    // start the linked list
    Review* head = nullptr;

    // After all reviews have been input, traverse the linked list to output the data and calculate/output the average review.

    return 0;
}