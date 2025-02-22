// Online C++ compiler to run C++ program online
#include <iostream>
#include <string> 
#include <list>
using namespace std;
 class SparePart{
  private:
    string partName;
    int partNumber;
    float cost;
    string existingParts;
  public:
    void modifydata();
};
 class Supplier{
   private:
     string supplierName;
     int supplierCode;
     string address;
     long telephone_email;
   public:
     void getdata();
     void putdata();
     void modifydata();
 };
 template <class T>
 class node {
   public:
    T data;
    node* next;
 };
 template <class T>
 class linkedlist{
public:
   node<T>* head;
   linkedlist(){
       head==NULL;
   }
   void insert_node(T e){
    		node<T>* newNode = new node<T>(e);
    		head=newNode;
    		newNode->next=NULL;
    	}
 };


class SparePartSupplierConnection {
public:
    SparePart* part;
    Supplier* supplier;

    SparePartSupplierConnection(SparePart* p, Supplier* s) : part(p), supplier(s) {}
};
int main() {
 

    return 0;
}