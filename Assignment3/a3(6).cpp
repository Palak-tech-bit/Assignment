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
    Invoice(string str,string ptr,int a,int b)
    {
      partno=str;
      partde=ptr;
      quantity=a;
      price=b;
    }

    void setPartno(string pqr)
    {
        partno=pqr;
    }
    void setPartde(string pst)
    {
        partde=pst;
    }
     void setquantity(int p)
    {
        quantity=p;
    }
     void setPrice(int q)
    {
        price=q;
    }
    string getPartno()
    {
        return partno;
    }
    string getPartde()
    {
        return partde;
    }
     int getQuantity()
    {
        return quantity;
    }
     int getPrice()
    {
        return price;
    }
    int getInvoiceAmount()
    {
        int amount;
        if(quantity<0)
        quantity=0;
        if(price<0)
        price=0;
        amount=quantity*price;
        return amount;
    }

};

int main()
{
    Invoice ob("Pencil","Stationery",12,5);
    ob.setPartno("Eraser");
    ob.setPartde("Stationery");
    ob.setquantity(10);
    ob.setPrice(5);
    string productnumber=ob.getPartno();
    string productdescription=ob.getPartde();
    int q=ob.getQuantity();
    int p=ob.getPrice();
    int a=ob.getInvoiceAmount();
    cout<<"The total amount is "<<a;
    return 0;
}


