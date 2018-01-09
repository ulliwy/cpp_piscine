/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::time_t	t;
	std::tm		*gmt;

	t = std::time(NULL);
	gmt = std::gmtime(&t);
	std::cout << "[" << gmt->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << gmt->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << gmt->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << gmt->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << gmt->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << gmt->tm_sec << "] ";
}

static void	log(std::string msg) {
	std::cout << msg << std::endl;
}

Account::Account (int initial_deposit) : _amount(initial_deposit) {
	Account::_displayTimestamp();
	log("index:" + std::to_string(Account::_nbAccounts) +
		";amount:" + std::to_string(this->_amount) +
		";created");
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account() {
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	log("index:" + std::to_string(Account::_nbAccounts) +
		";amount:" + std::to_string(this->_amount) +
		";closed");
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	log("accounts:" + std::to_string(Account::_nbAccounts) +
		";total:" + std::to_string(Account::_totalAmount) +
		";deposits:" + std::to_string(Account::_totalNbDeposits) +
		";withdrawals:" + std::to_string(Account::_totalNbWithdrawals));
}

void	Account::displayStatus (void) const {
	Account::_displayTimestamp();
	log("index:" + std::to_string(this->_accountIndex) +
		";amount:" + std::to_string(this->_amount) +
		";deposits:" + std::to_string(this->_nbDeposits) +
		";withdrawals:" + std::to_string(this->_nbWithdrawals));
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	log("index:" + std::to_string(this->_accountIndex) +
		";p_amount:" + std::to_string(this->_amount - deposit) +
		";deposit:" + std::to_string(deposit) +
		";amount:" + std::to_string(this->_amount) +
		";nb_deposits:" + std::to_string(this->_nbDeposits));
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal ) {
	std::string 	result;
	result = "index:" + std::to_string(this->_accountIndex) +
			";p_amount:" + std::to_string(this->_amount) +
			";withdrawal:";
	Account::_displayTimestamp();
	if (this->checkAmount() < withdrawal) {
		result += "refused";
		log(result);
		return (false);
	}
	else {
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		result += std::to_string(withdrawal) +
				";amount:" + std::to_string(this->_amount) +
				";nb_withdrawals:" + std::to_string(this->_nbWithdrawals);
		log(result);
		return (true);
	}
}
