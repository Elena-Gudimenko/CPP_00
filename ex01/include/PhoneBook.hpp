#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contact_list[8];
        int index;
    public:
        PhoneBook();
        void addContact();
        void searchContact();
        void displayMenu();
};

#endif