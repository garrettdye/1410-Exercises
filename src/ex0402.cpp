#include <iostream>

using namespace std;

enum class BillKind { // The addition of the "class" keyword creates a scoped enumeration. Unscoped enumerations do not use "class". //
    ONE, FIVE, TEN, TWENTY
};

/* This structure represents the portion of cash that comes from any of the four bills. 
Thus, we have a member for the kind of bill, as well as the amount of said bill.*/

struct CashInOneBillKind { 
    BillKind kind;
    int count;
};

/* This structure represents the total cash present in the wallet by creating individual members for each of the bill types.
These members are defined using the "CashInOneBillKind" structure as the datatype.*/

struct Cash {
    CashInOneBillKind ones;
    CashInOneBillKind fives;
    CashInOneBillKind tens; 
    CashInOneBillKind twenties;

};

/* This function uses the "CashInOneBillKind" members as well as the "count" members
 to calculate the total cash based on the count assigned to each bill in the "inWallet" varialbe.*/
int totalCash(Cash& c) {
    return  (
        c.ones.count * 1 +
        c.fives.count * 5 +
        c.tens.count * 10 +
        c.twenties.count * 20
    );
};

int main(){
    /* Each of the groups defined within the "inWallet" variable is a structure that has both a bill type and count so both must be defined.
    Because "BillKind" is a scope enumeration, the "::" operator must be used to assign values. */
    Cash inWallet {
        {BillKind::ONE, 2},
        {BillKind::FIVE, 3},
        {BillKind::TEN, 1},
        {BillKind::TWENTY, 2},
    };

    cout << "Total cash in wallet: " << totalCash(inWallet) << endl;

    return 0;
}