#include <iostream>
#include "LinkedListSupport.h"

using namespace std;



int main(int argc, const char * argv[]) {
    Link* list = new Link;
    
    // Initialize a new linked list
    list->data = 67;
    list->next = NULL;
    
    // Add some numbers to it
    add(list, 33);
    add(list, 63);
    add(list, 83);
    
    cout << getIndex(list, 3) << endl;
    
    return 0;
}