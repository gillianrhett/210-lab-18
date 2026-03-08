// COMSC-210 | Lab 18 | Gillian Rhett

#include <iostream>
#include <string>

using namespace std;

struct Review {
    float rating;
    string comment;
    Review* next;
};

void push_front(Review*&, float, string);
void push_back(Review*&, float, string);

int main() {
    // Ask the user which mode to use, new nodes at the head or the tail of the linked list.
    cout << "Which linked list method should we use?\n";
    cout << "\t[1] New nodes are added at the head of the linked list\n";
    cout << "\t[2] New nodes are added at the tail of the linked list\n";
    cout << "Choice: ";
    string sChoice;
    int iChoice = 0;
    while (!(iChoice == 1 || iChoice ==2)) {
        cin >> sChoice;
        try { iChoice = stoi(sChoice); }
        catch (invalid_argument& e) {
            iChoice = 0;
        }
        if (!(iChoice == 1 || iChoice ==2))
            cout << "Enter a number 1 or 2: ";
    }
    // Obtain two pieces of data from the user, the rating and the comments. Store these in the linked list.
    // start the linked list
    Review* head = nullptr;
    string sRating;
    float fRating;
    string comment;
    char another = 'y';
    while (another == 'y') {
        fRating = -1.0;
        cout << "Enter review rating 0-5: ";
        while (!(0.0 <= fRating && fRating <= 5.0)) {
            cin >> sRating;
            try {
                fRating = stof(sRating);
            }
            catch(invalid_argument& e) {
                fRating = -1.0;
            }
            if (!(0.0 <= fRating && fRating <= 5.0))
                cout << "Enter a number 0.0 - 5.0: ";
        }
        cout << "Enter review comments: ";
        cin.clear();
        cin.ignore();
        getline(cin, comment);
        if(iChoice == 1)
            push_front(head, fRating, comment);
        else
            push_back(head, fRating, comment);
        cout << "Enter another review? Y/N: ";
    }

    // After all reviews have been input, traverse the linked list to output the data and calculate/output the average review.

    // delete the list to deallocate the memory
    // (I know the program is ending anyway but this is good practice)
    Review* current = head;
    while (current) {
        head = current->next;
        delete current;
        current = head;
    }
    head = nullptr;

    return 0;
}

void push_front(Review* &ptr, float rating, string comment) {
// TODO add code from example
}

void push_back(Review* &ptr, float rating, string comment) {
    if (ptr) { // if the list is not empty
        // traverse the list to get to the last node
        Review* current = ptr;
        while (current->next != nullptr) {
            current = current->next;
        }
        // make the new node
        Review* newnode = new Review;

        // link the new node to the end of the list
        
    }
    else {

    }
}