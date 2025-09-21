// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;						// Account sınıfı için takma ad

	static int	getNbAccounts( void );			// Toplam hesap sayısını döndürür
	static int	getTotalAmount( void );			// Tüm hesaplardaki toplam parayı döndürür
	static int	getNbDeposits( void );			// Toplam yatırma işlemi sayısını döndürür
	static int	getNbWithdrawals( void );		// Toplam çekme işlemi sayısını döndürür
	static void	displayAccountsInfos( void );	// Tüm hesapların özet bilgisini ekrana yazar

	Account( int initial_deposit );				// Yeni hesap oluşturur
	~Account( void );							// Hesap kapatılırken çağrılır

	void	makeDeposit( int deposit );			// Hesaba para yatırır
	bool	makeWithdrawal( int withdrawal );	// Hesaptan para çeker
	int		checkAmount( void ) const;			// Hesaptaki mevcut parayı döndürür
	void	displayStatus( void ) const;		// Hesabın durumunu ekrana yazar


private:

	static int	_nbAccounts;				// Toplam hesap sayısı
	static int	_totalAmount;				// Tüm hesaplardaki toplam para
	static int	_totalNbDeposits;			// Toplam yatırma işlemi sayısı
	static int	_totalNbWithdrawals;		// Toplam çekme işlemi sayısı

	static void	_displayTimestamp( void );	// Zaman damgası ekrana yazar

	int				_accountIndex;			// Hesabın sıra numarası
	int				_amount;				// Hesaptaki para miktarı
	int				_nbDeposits;			// Bu hesaba yapılan yatırma sayısı
	int				_nbWithdrawals;			// Bu hesaptan yapılan çekme sayısı

	Account( void );						// Default constructor (kullanılmıyor)

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
