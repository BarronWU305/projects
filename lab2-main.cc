#include<iostream>
#include<string>
 
/**
 * Print the names.  Make sure the commas are correct! E.g.,
 *   The names are Ann, Bob, and Cade.
 * If there is one name in the list, you should write it like this:
 *   The name is Bob.
**/
 // TO-DO: You implement the PrintNameList function here.
 //recognize that the special case is the last one. Loop to penultamit one. 
void PrintNameList(std::string nameArray[], int nameArraySize) {
  // Some code 
  for (int idx=0; idx<nameArraySize-1; idx++) {
    std::cout << nameArray[idx] << ", "; 
  }
  std::cout << "and " << nameArray[nameArraySize-1] << std::endl; 
}

/**
 * Prompt the user for a name, get it, then return it. 
**/
std::string PromptForName() {
    std::string name;
    std::cout << "Please give me a name (quit to end): ";
    std::cin >> name;

    return name;
}

/**
 * The main of the program. 
**/
int main() {
  std::string namelist[100];
  std::string name;
  int count = 0;

  // Get the names and put them in the list
  do {
    name = PromptForName();
    if (name != "quit") {
        namelist[count++] = name;
    }

  } while (name != "quit");

  // Either print the list of names, or tell us there were no names to print.
  if (count > 0) PrintNameList(namelist, count);
  else std::cout << "There were no names given." << std::endl;

  // Everything is okay.
  return 0;
}
