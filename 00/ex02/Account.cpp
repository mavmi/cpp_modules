#include <iostream>
#include <chrono>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
	return Account::_nbAccounts;
}

int Account::getTotalAmount(){
	return Account::_totalAmount;
}

int Account::getNbDeposits(){
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(){
	_displayTimestamp();
	
	std::cout
		<< "accounts:" << _nbAccounts << ';'
		<< "total:" << _totalAmount << ';'
		<< "deposits:" << _totalNbDeposits << ';'
		<< "withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void Account::makeDeposit(int deposit){
	_displayTimestamp();

	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout
		<< "index:" << _accountIndex << ';'
		<< "p_amount" << _amount - deposit << ';'
		<< "deposit:" << deposit << ';'
		<< "amount:" << _amount << ';'
		<< "nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();

	std::cout
		<< "index:" << _accountIndex << ';'
		<< "p_amount:" << _amount << ';'
		<< "withdrawal:";

	if (_amount < withdrawal){
		std::cout << "refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout
		<< withdrawal << ';'
		<< "ammount:" << _amount << ';'
		<< "nb_withdrawals:" << _nbWithdrawals
		<< std::endl;

	return true;
}

int Account::checkAmount() const {
	_displayTimestamp();
	std::cout << "check amount\n";
	return _amount;
}

void Account::displayStatus() const {
	_displayTimestamp();
	
	std::cout
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "deposits:" << _nbDeposits << ';'
		<< "withdrawals:" << _nbWithdrawals
		<< std::endl;
}

Account::Account(int initial_deposit){
	_displayTimestamp();

	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_totalAmount += initial_deposit;

	std::cout
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "created"
		<< std::endl;
}

Account::~Account(){
	std::cout
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "closed"
		<< std::endl;
}

void Account::_displayTimestamp(){
	std::chrono::time_point<std::chrono::system_clock> time_point = std::chrono::system_clock::now();
	time_t current_time = std::chrono::system_clock::to_time_t(time_point);
	tm utc_current_time = *localtime(&current_time);

	std::cout 
		<< '['
		<< utc_current_time.tm_year + 1900
		<< utc_current_time.tm_mon + 1
		<< utc_current_time.tm_mday
		<< '_'
		<< utc_current_time.tm_hour
		<< utc_current_time.tm_min
		<< utc_current_time.tm_sec
		<< "] ";
}
