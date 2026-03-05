#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

int main(void) {
    PhoneBook phonebook;
    std::string cmd;

    while (true) {
        phonebook.displayMenu();
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "") {
            continue ;
        }
        if (cmd == "ADD") {
            phonebook.addContact();
        } else if (cmd == "SEARCH") {
            phonebook.searchContact();
        }
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return (0);
}