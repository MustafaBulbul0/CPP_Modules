#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit) {
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
			  << ";deposit:" << deposit << ";amount:" << _amount 
			  << ";nb_deposits:" << _nbDeposits << "\n";
}

bool Account::makeWithdrawal(int withdrawal) {
	int p_amount = _amount;
	_displayTimestamp();
	if (withdrawal > _amount) {
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
				  << ";withdrawal:refused" << "\n";
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
			  << ";withdrawal:" << withdrawal << ";amount:" << _amount 
			  << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return true;
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
			  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(0);
	std::tm* ltm = std::localtime(&now);
	std::cout << "[" << (1900 + ltm->tm_year) 
			  << std::setfill('0') << std::setw(2) << (1 + ltm->tm_mon) 
			  << std::setfill('0') << std::setw(2) << ltm->tm_mday << "_"
			  << std::setfill('0') << std::setw(2) << ltm->tm_hour
			  << std::setfill('0') << std::setw(2) << ltm->tm_min
			  << std::setfill('0') << std::setw(2) << ltm->tm_sec << "] ";
}
