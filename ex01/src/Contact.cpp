/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:08:11 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/05 15:08:11 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact() {
    FirstName = "";
    LastName = "";
    NickName = "";
    PhoneNumber = "";
    DarkestSecret = "";
};

void Contact::getContact(void) {
    std::cout << "First Name: " << this->FirstName << std::endl; 
    std::cout << "Last Name: " << this->LastName << std::endl; 
    std::cout << "Nickame: " << this->NickName << std::endl; 
    std::cout << "Phone Number: " << this->PhoneNumber << std::endl; 
    std::cout << "Darkest Secret: " << this->DarkestSecret << std::endl; 
}

std::string Contact::getFirstName(void) {
    return this->FirstName;
};

std::string Contact::getLastName(void) {
    return this->LastName;
};

std::string Contact::getNickName(void) {
    return this->NickName;
};

std::string Contact::getPhoneNumber(void) {
    return this->PhoneNumber;
};

std::string Contact::getDarkestSecret(void) {
    return this->DarkestSecret;
};

void Contact::setFirstName(std::string first_name) {
    this->FirstName = first_name;
};

void Contact::setLastName(std::string last_name) {
    this->LastName = last_name;
};

void Contact::setNickName(std::string nick_name) {
    this->NickName = nick_name;
};

void Contact::setPhoneNumber(std::string phone_number) {
    this->PhoneNumber = phone_number;
};

void Contact::setDarkestSecret(std::string darkest_secret) {
    this->DarkestSecret = darkest_secret;
};