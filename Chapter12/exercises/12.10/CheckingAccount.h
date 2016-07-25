/*
 * =====================================================================================
 *
 *       Filename:  CheckingAccount.h
 *
 *    Description:  Exercise 12.10 - Account Inheritance Hierarchy
 *
 *        Version:  1.0
 *        Created:  24/07/16 20:28:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "Account.h"

class CheckingAccount : public Account{
    public:
        CheckingAccount(double, double);

        void credit(double);
        void debit(double);

    private:
        double feePerTransaction;
};
