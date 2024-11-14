/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:01:31 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/19 19:11:36 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	Account::_displayTimestamp();
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts - 1;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();	
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

Account::Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	time;

	time = std::time(NULL);
	std::cout << std::setfill('0') <<
 	"[" <<
	std::localtime(&time)->tm_year <<
	std::localtime(&time)->tm_mon <<
	std::localtime(&time)->tm_mday <<
	"_" <<
	std::localtime(&time)->tm_hour <<
	std::localtime(&time)->tm_min <<
	std::localtime(&time)->tm_sec
	<< "] ";
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
