#include <iostream>
#include <list>
using namespace std;

void display_list(list<int> &lst)
{
    list<int>::iterator it; // Creating List

    for (it = lst.begin(); it != lst.end(); it++) // Special for loop for iterators
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // In Array to remove 7: 8 7 9 10, 9 and 10 has to shifted
    // To counter shifting - Linked List used
    // Linked list - Store anywhere just liked them, no need for continous storage
    // Fast Deletion - Insetion : Linked List
    // Fast Acess : Array

    // --> Creating list
    list<int> l1;
    list<int> l2(5); // In l2 list values needed to be set

    //--> Entering Elements in l1

    l1.push_back(2);
    l1.push_back(9);
    l1.push_back(4);
    l1.push_back(15);

    display_list(l1);
    cout << "After Sorting\n";
    l1.sort();
    display_list(l1);

    cout << "Reversing\n";
    l1.reverse();
    display_list(l1);

    // ---> Deleting Elements from list

    // l1.pop_back();
    // display_list(l1);

    // // l1.pop_front();
    // l1.remove(4);   //If multiple 4 then all will be removed
    // display_list(l1);

    // Method 2 ----!!!!!!!>
    // --> Creating Iterator of it1 name

    // list<int>::iterator it1;
    // it1 = l1.begin(); // Set iterator at start of list  *** begin() is sends reference

    // // --> Dereferencing Iterator to list
    // cout << *it1 << " ";
    // it1++;
    // cout << *it1 << " ";

    // ------> Setting values in list l2
    list<int>::iterator it2;
    it2 = l2.begin();

    // Sets the value
    *it2 = 23;
    it2++;
    *it2 = 43;
    it2++;

    display_list(l2);

    //---> Merge List

    l1.merge(l2);
    cout << "List 1 after merge: ";
    display_list(l1);

    return 0;
}