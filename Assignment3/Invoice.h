#include<iostream>
using namespace std;
class Invoice
{
    private:

    string partno;
    string partde;
    int quantity;
    int price;

    public:
    Invoice(string str,string ,int ,int );


    void setPartno(string );

    void setPartde(string );

     void setquantity(int );

     void setPrice(int );

    string getPartno();

    string getPartde();

     int getQuantity();

     int getPrice();

    int getInvoiceAmount();


};




