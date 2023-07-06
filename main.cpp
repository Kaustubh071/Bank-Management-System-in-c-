#include <iostream>

using namespace std;


class Account
{
    public:
    double pass, deposit, withdraw, balance, newpass, transamount, recieveamount;
    string firstn, lastn, mname, address, uname, acctype, change, newname, transname, recievename;
    int choice;
    void createAccount()
    {
      cout << "----CREATE ACCOUNT----" << endl;
      cout << endl;
      cout << "First Name: " ;
      cin >> firstn;
      cout <<  "ok.." << endl;
      cout << "Last Name: " ;
      cin >> lastn;
      cout <<  "ok.." << endl;
      cout << "Mother Name: " ;
      cin >> mname;
      cout <<  "ok.." << endl;
      cout << "Address: " ;
      cin >> address;
      cout <<  "ok.." << endl;
      cout << "Select Account Type:" << endl;
      cout << "1. Saving Acount:" << endl;
      cout << "2. Current Account:" << endl;
      cout << "0. Back to Main Menu:" << endl;
      cout << "Choice:";
      cin >> choice;
      if (choice == 1)
      {
          acctype = "Saving Account";
          cout << acctype<< "ok..." << endl;
          cout << "Create UserName : ";
          cin >> uname;
          cout << "Create Password : ";
          cin >> pass;

          cout << "Account created Successfully....! ";
          cout << endl;
      }
      else if (choice == 2)
      {
          acctype = "Current Account";
          cout << acctype<< "ok..." << endl;
          cout << "Create UserName : ";
          cin >> uname;
          cout << "Create Password : ";
          cin >> pass;
          cout << "Account created Successfully....! ";
      }

    }
};

class User : public Account // Single level inheritance
{
public:
    User()
    {
        balance = 0.0;
        withdraw = 0.0;
        deposit = 0.0;
        transamount = 0.0;
        transname = " ";
        recieveamount = 0.0;
        recievename = " ";
    }

    void transshow(double amount, string recipientAccName)
    {
        transamount = amount;
        transname = recipientAccName;
    }

    void recieveshow(double amount)
    {
        recieveamount = amount;
        recievename = uname;
    }

    void checkBalance()
    {
        cout << "---BALANCE DASHBOARD---" << endl;
        cout << endl;
        cout << "SNo." << " " << "TRANSACTION" << "  " << "AMOUNT" << endl;
        cout << "1." << " " << "DEPOSIT" << "  " << deposit << endl;
        cout << "2." << " " << "WITHDRAW" << "  " << withdraw << endl;
        cout << "TRANSFER TO" << " " << transname << "  " << transamount << endl;
        cout << "RECIEVE FROM" << " " << recievename << " " << recieveamount << endl;
        cout << "-------------------------------------" << endl;
        cout << "ACCOUNT BALANCE :" << balance << endl;
        cout << "OK..." << endl;
    }

    void DepositCash()
    {
        cout << "---DEPOSIT CASH---" << endl;
        cout << "Current Balance : " << balance << endl;
        cout << "Enter Deposit Amount : ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "CASH DEPOSIT SUCCESSFUL....." << endl;
        cout << "OK..." << endl;
    }

    void WithdrawCash()
    {
        cout << "---WITHDRAW CASH---" << endl;
        cout << "Current Balance : " << balance << endl;
        cout << "Enter Withdraw Amount : ";
        cin >> withdraw;
        if(balance >= withdraw)
        {
        balance = balance - withdraw;
        cout << "CASH WITHDRAW SUCCESSFUL....." << endl;
        }
        else
        {
          cout << "INSUFFICIENT CASH" << endl;
        }
        cout << "OK..." << endl;
    }

    void TransferMoney(double amount)
    {
        cout << "Current Balance : " << balance << endl;
       if(balance >= amount)
       {
           balance = balance - amount;
           cout << "CASH TRANSFERRED SUCCESSFULLY" << endl;
       }
       else
       {
          cout << "INSUFFICIENT BALANCE" << endl;
       }
    }

    void AccountInfo()
    {
        cout << "----ACCOUNT INFO----" << endl;
        cout << endl;
        cout << "Account Type:"
             << " " << acctype << endl;
        cout << "User Name:"
             << " " << uname << endl;
        cout << "Password:"
             << " " << pass << endl;
        cout << endl;
        cout << "First Name:"
             << " " << firstn << endl;
        cout << "Last Name:"
             << " " << lastn << endl;
        cout << "Mother Name:"
             << " " << mname << endl;
        cout << "Address:"
             << " " << address << endl;
        cout << endl;
        cout << "ok.." << endl;
        cout << endl;
    }

   void UpdateInfo(int choice)
   {
      switch(choice)
      {
        case 1:
            cout << "---ACCOUNT TYPE CHANGE---" << endl;
            cout << endl;
            cout << "Current Account type : " << acctype << endl;
            cout << "Select Account Type " << endl;
            cout << "1. Saving Account " << endl;
            cout << "2. Current Account " << endl;
            cout << "Choice:" ;
            cin >> choice;
            cout << "Do you really want to change Account type(y/n) " << endl;
            cin >> change;
            if(change == "y" || change =="Y")
            {
             if(choice == 1)
                 acctype = "Saving Account" ;
             else if(choice == 2)
                 acctype = "Current Account" ;
                 cout << "...ok Account Type updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...ok Account Type Not updated" << endl;
            }
            cout << endl;
            break;
        case 2:
            cout << "---USERNAME CHANGE---" << endl;
            cout << endl;
            cout << "Current name is " << uname << endl;
            cout << "Enter new Name: " ;
            cin >> newname;
            cout << "Do you really want to change username(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                uname = newname;
                cout << "Ok UserName Updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...OK NO RECORD UPDATED" << endl;
            }

            cout << endl;
            break;
        case 3:
            cout << "---PASSWORD CHANGE---" << endl;
            cout << endl;
            cout << "Current password is " << pass << endl;
            cout << "Enter new password: " ;
            cin >> newpass;
            cout << "Do you really want to change Password(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                pass = newpass;
                cout << "Ok Password Updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...OK NO PASSWORD UPDATED" << endl;
            }

            cout << endl;
            break;
        case 4:
            cout << "---FIRST NAME CHANGE---" << endl;
            cout << endl;
            cout << "Current first name is " << firstn << endl;
            cout << "Enter new first name: " ;
            cin >> newname;
            cout << "Do you really want to change First Name(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                firstn = newname;
                cout << "Ok First Name Updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...OK NO FIRST NAME UPDATED" << endl;
            }

            cout << endl;
            break;
        case 5:
            cout << "---LAST NAME CHANGE---" << endl;
            cout << endl;
            cout << "Current last name is " << lastn << endl;
            cout << "Enter new last name: " ;
            cin >> newname;
            cout << "Do you really want to change Last Name(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                lastn = newname;
                cout << "Ok Last Name Updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...OK NO LAST NAME UPDATED" << endl;
            }

            cout << endl;
            break;
         case 6:
            cout << "---MOTHER NAME CHANGE---" << endl;
            cout << endl;
            cout << "Current mother name is " << mname << endl;
            cout << "Enter new mother name: " ;
            cin >> newname;
            cout << "Do you really want to change Mother Name(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                mname = newname;
                cout << "Ok Mother Name Updated" << endl;
            }
            else if(change == "n" || change == "N")
            {
                cout << "...OK NO MOTHER NAME UPDATED" << endl;
            }

            cout << endl;
            break;
        case 7:
            cout << "---ADDRESS CHANGE---" << endl;
            cout << endl;
            cout << "Current address is " << address << endl;
            cout << "Enter new address: " ;
            cin >> newname;
            cout << "Do you really want to change Address(y/n) " << endl;
            cin >> change;
             if (change == "Y" || change == "y")
            {
                address = newname;
                cout << "Ok Address Updated" << endl;
            }
           else if(change == "n" || change == "N")
            {
                cout << "...OK NO ADDRESS UPDATED" << endl;
            }

            cout << endl;
            break;
              }


   }


};

int main()
{
   int choice, i = 0, j = 1, k = 1, n, count = 0;
    string name, recipientAccName;
    double pass, amount;
    User a[10];

    cout << " Welcome To Bank Account System" << endl;

    while (j)
    {
        cout << "1. Create New Account" << endl;
        cout << "2. Login" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter the Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            a[i].createAccount();
            i++;
            n = i;

            break;

        case 2:

            cout << "-----ACCOUNT LOGIN----" << endl;

            cout << "USERNAME:";
            cin >> name;
            cout << "PASSWORD:";
            cin >> pass;

            for (i = 0; i < n; i++)
            {
                if (name == a[i].uname && pass == a[i].pass)
                {
                    cout << "LOGIN SUCCESSFUL...." << endl;
                    cout << endl;
                    cout << "Welcome" << " " << name << endl;
                    cout << endl;

                    while (k)
                    {
                        cout << "1.Check Balance" << endl;
                        cout << "2.Deposit Cash" << endl;
                        cout << "3.Withdrawal Cash" << endl;
                        cout << "4.Transfer Money" << endl;
                        cout << "5.Account Info" << endl;
                        cout << "6.Update Info" << endl;
                        cout << "0.Exit" << endl;
                        cout << endl;
                        cout << "CHOICE ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:

                            a[i].checkBalance();
                            cout << endl;

                            break;

                        case 2:

                            a[i].DepositCash();
                            cout << endl;

                            break;

                        case 3:

                            a[i].WithdrawCash();
                            cout << endl;

                            break;

                        case 4:

                            cout << "--- TRANSFER MONEY ---" << endl;
                            cout << "ENTER THE AMOUNT TO BE TRANSFERRED " << endl;
                            cin >> amount;

                            if(a[i].balance >=amount)
                            {
                                cout << "Transferred to (username of person) " << endl;
                                cin >> recipientAccName;
                              for (int j=0;j<n;j++)
                              {
                                  if(a[j].uname == recipientAccName)
                                  {
                                      a[j].balance += amount;
                                      a[i].TransferMoney(amount);
                                      cout << "AMOUNT SUCCESSFULLY TRANSFERRED...." << endl;
                                      a[i].transshow(amount, recipientAccName);
                                  }
                                  else
                                  {
                                      count++;
                                  }
                                  if (count == n)
                                    cout << "NOT FOUND" << endl;
                              }
                              for (int k=0;k<n;k++)
                              {
                                  if(a[k].uname == recipientAccName)
                                  {
                                      a[k].recieveshow(amount);
                                  }
                                  else
                                  {
                                      count++;
                                  }
                                  if (count == n)
                                    cout << "NOT FOUND" << endl;
                              }

                            }
                            else
                            {
                                cout << "Insufficient Balance" << endl;
                            }
                           count = 0;
                          break;
                        case 5:

                            a[i].AccountInfo();
                            cout << endl;

                            break;

                        case 6:
                            cout << "-----UPDATE INFO-----" << endl;
                            cout << "1.AccountType" << endl;
                            cout << "2.UserName" << endl;
                            cout << "3.Password" << endl;
                            cout << "4.First Name" << endl;
                            cout << "5.Last Name" << endl;
                            cout << "6.Mother Name" << endl;
                            cout << "7.Address" << endl;
                            cout << endl;
                            cout << "Choice";
                            cin >> choice;
                            a[i].UpdateInfo(choice);

                            break;

                        case 0:
                            k = 0;
                            cout << endl;

                            cout << " Welcome To Bank Account System" << endl;

                            break;

                        default:

                            cout << "Invalid Choice...." << endl;
                            cout << endl;
                            break;
                        }
                    }
                    k = 1;
                }
                else
                {
                    count++;
                }
                if (count == n)
                {
                    cout << "INVALID LOGIN.....!" << endl;
                }
            }
            count = 0;

            cout << endl;
            break;

        case 0:

            j = 0;
            cout << "THANKYOU FOR USING OUR BANK SYSTEM" << endl;
            break;

        default:

            cout << "Invalid Choice...." << endl;
            cout << endl;
            break;
        }
    }

    return 0;

}
