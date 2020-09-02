#include<iostream>
#include"Invoice.h"
using namespace std;



    Invoice::Invoice(string str,string ptr,int a,int b)
    {
      partno=str;
      partde=ptr;
      quantity=a;
      price=b;
    }

    void Invoice::setPartno(string pqr)
    {
        partno=pqr;
    }
    void Invoice::setPartde(string pst)
    {
        partde=pst;
    }
     void Invoice::setquantity(int p)
    {
        quantity=p;
    }
     void Invoice::setPrice(int q)
    {
        price=q;
    }
    string Invoice::getPartno()
    {
        return partno;
    }
    string Invoice::getPartde()
    {
        return partde;
    }
     int Invoice::getQuantity()
    {
        return quantity;
    }
     int Invoice::getPrice()
    {
        return price;
    }
    int Invoice::getInvoiceAmount()
    {
        int amount;
        if(quantity<0)
        quantity=0;
        if(price<0)
        price=0;
        amount=quantity*price;
        return amount;
    }





