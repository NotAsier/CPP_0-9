/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:38:21 by aarranz-          #+#    #+#             */
/*   Updated: 2025/03/03 16:38:05 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

using std::string;

Contact::Contact()
{
}

Contact::~Contact()
{
}

//getName
string Contact::getFirstName() const{
	return (this->firstName);
}

string Contact::getLastName() const{
	return (this->lastName);
}

string Contact::getNickname() const{
	return (this->nickname);
}

string Contact::getPhoneNumber() const{
	return (this->phoneNumber);
}

string Contact::getDarkestSecret() const{
	return (this->darkestSecret);
}

//setName
void	Contact::setFirstName(std::string newFirstName){
	this->firstName = newFirstName;
}

void	Contact::setLastName(std::string newLastName){
	this->lastName = newLastName;
}

void	Contact::setNickname(std::string newNickname){
	this->nickname = newNickname;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber){
	this->phoneNumber = newPhoneNumber;
}

void	Contact::setDarkestSecret(std::string newDarkestSecret){
	this->darkestSecret = newDarkestSecret;
}