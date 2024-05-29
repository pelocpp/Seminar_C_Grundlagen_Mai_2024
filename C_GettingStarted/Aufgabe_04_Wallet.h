// =====================================================================================
// Wallet.h
// =====================================================================================

// ===========================================================================================
// Defines
#pragma once

// =====================================================================================
// Types

struct Wallet
{
    unsigned long long m_euros;
    unsigned int m_cents;
};

// =====================================================================================
// Function Prototypes

void                initWallet(struct Wallet* wallet, unsigned long long euros, unsigned int cents);
unsigned long long  getEuros(struct Wallet* wallet);
unsigned int        getCent(struct Wallet* wallet);
void                addWallet(struct Wallet* wallet, struct Wallet* other);
void                addEuros(struct Wallet* wallet, unsigned long long euros);
void                addEurosAndCents(struct Wallet* wallet, unsigned long long euros, unsigned int cents);
int                 subWallet(struct Wallet* wallet, struct Wallet* other);
int                 subEuros(struct Wallet* wallet, unsigned long long euros);
int                 subEurosAndCents(struct Wallet* wallet, unsigned long long euros, unsigned int cents);
int                 lessThan(struct Wallet* wallet, struct Wallet* other);
int                 equals(struct Wallet* wallet, struct Wallet* other);
unsigned long long  toCents(struct Wallet* wallet);
void                print(struct Wallet* wallet);

// =====================================================================================
// End-of-File
// =====================================================================================
