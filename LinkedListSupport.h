#ifndef LinkedListSupport_h
#define LinkedListSupport_h

// Create the link data structure
struct Link {
    // We are storing one integer value
    int data;
    
    // This is the pointer to the next element
    Link* next;
};

// A function to print out a list
void print (Link* head){
    // As always, get a pointer to the head element
    Link* temp = head;
    // So that we don't move the head pointer
    
    // While the current pointer is not NULL
    while (temp != NULL) {
        // Print out the data being pointed to by temp
        std::cout << temp->data << " ";
        
        // Move temp along to the next element
        temp = temp->next;
    }
    
    // Just leave a blank line at the end
    std::cout << std::endl;
    
}

// Add a new element to the end of a linked list
void add(Link* head, int value){
    // Create the new link and store value in it
    Link* newItem = new Link;
    newItem->data = value;
    newItem->next = NULL;
    
    // Find the end of the linked list
    Link* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Now temp points to the last element
    // of the existing list
    
    // Now link them up
    temp->next = newItem;
    
    // Do not delete newItem beacuse that will
    // damage the list
    // It's not a memory leak, since there is
    // another pointer to the location where
    // newItem was pointing to
}

int getIndex(Link* head, int index){
    // Provide your code here
	Link* atvalue = head;
	int counter = 0; 
	while (atvalue != NULL)
	{
		if (counter == index)
			return(atvalue->data);
		counter++;
		atvalue = atvalue->next; //Move along ;)
	}
}

#endif /* LinkedListSupport_h */
