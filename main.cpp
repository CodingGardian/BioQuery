// TODO: need memeory managment
//  #1 try to allocate and deallocate large blocks of memory at a time
//  #2 linked list for memory blocks???
//  #3 revisit STL library, what might I need to reimplement?
//       - to ease up on the templates to keep executable size small, more memory is always good, but do I really need so much memory?

// for memory managment
//    - clean up memory pool, start drawing up plans for system that will prevent fragmentation (split memory)
//    - reimplement some STL stuff to work well with this memory system
//    - add smart pointer functionality

// REMEMBER THE RULE OF 3
//    or Bjarne Stroustup will be angered

// Rule to avoid confusion
//		ONLY use references (in function arguments) with const!!!

// linked list with shared pointer functionality
//   code should be able to tell if a list has been deleted and respond accordingly
//   Memory managment too :(

/*
WHY Object Oriented stuff... WHYYYYYY
I know that code needs to be clean but functional programming would be so much simpler,just a simple parsing function?
Just use the function and 
*/

//OPERATION, KEYWORD, COMMAND, FIELD, MODIFIER
// operation: what are we doing? (search, modify, etc.)
// keyword: hard coded by DB files, are mapped to fields & commands
// command: how do we get what we want from DB?
// field: describe something about a DB, a bunch of these make up context
// modifier: changes either how the command runs or what the command does

#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}