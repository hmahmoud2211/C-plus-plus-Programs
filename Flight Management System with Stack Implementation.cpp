#include <iostream>
#include <string>
using namespace std;

class Flight {
    private :
    int Flight_ID;
    string Model;
    int  Capacity;
    string Airline;
    string Destination;
    string Departure_Time;
    double Ticket_Price;
    
    public :
    //setters
    void setFlight_ID(int ID){

        Flight_ID= ID;
    }
    void setModel(string M){

        Model=M;

    }
    
    void setCapacity(int C){

        Capacity=C;
    }
    void setAirline(string AL){

        Airline=AL;
    }
    void setDestination(string D){

        Destination=D;

    }
    void setDeparture_Time(string DT){
        
        Departure_Time=DT;

    }
    void setticket_Price(double TP){

        Ticket_Price=TP;
    
    }
    //getters

    int getFlight_ID ()
    {

        return Flight_ID;

    }
    string getModel(){

        return Model;

    }
    int getCapacity(){

        return Capacity;

    }
    string getAirline(){
        
        return Airline;

    }
    string getDestination(){

        return Destination;

    }
    string getDeparture_Time(){

        return Departure_Time;

    }
    int getTicket_Price(){

        return Ticket_Price;

    }
    //constructor
    Flight(int id,string m,int c,string al,string d,string dt,double tp)
    {
        Flight_ID = id;
        Model = m;
        Capacity = c;
        Airline= al;
        Destination = d;
        Departure_Time = dt;
        Ticket_Price = tp;
    }

    void  display_Flight_info()
    {
        cout << "Flight Id : " <<getFlight_ID() <<endl;
        cout << "Flight Model : " <<getModel() <<endl;
        cout << "Flight Capicity : "<<getCapacity() <<endl;
        cout << "Flight Airline : "<<getAirline() <<endl;
        cout << "Flight Destination : "<<getDestination() <<endl;
        cout << "Flight Departure Time : "<<getDeparture_Time() <<endl;
        cout << "Flight Ticket Price : "<<getTicket_Price() <<endl;
    }
};

template<class S>
class Flightstack
{
    private:
    Node<S>* top;
    public:
    Flightstack()
    {
        top=NULL:
    }

    bool isempty(){
        return(top==NULL);
    }
    bool isduplicate(S FLdata){
        Node<T>* temp=top;
        while(temp!=NULL)
        {
            if(temp->data==FLdata)
                return true;
            temp=temp->next;
        }
            return false;
        
    }



    void PushFlight(S Fdata)
    {
        Node<S>* Node2= new Node(Fdata);
        if(isempty())
        top= Node2;
        else{
            if(isduplicate())
            cout<< "the data is duolicate";

        }
        else{
            Node2->next=top;
            top=Node2;
        }

    }
    void printstack(){
        Node<S>* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<end;
            temp=temp->next;

        }
    }

    T peek(){
        if(isempty())
        cout<<"the stack is empty";
        else
        return top;
    }

    void popflight(){
        Node<S>* temp=top;
        if(isempty)
        {
            cout<<"stack empty";
            return;
        }
        top=top->next;
        temp->next=NULL;
        delete temp;
    }





};












    int main ()
{
    int FL_Id,FL_Cap;
    string FL_Model,FL_Airline,FL_distniation,FL_Departure_Time;
    double FL_Ticket_Price;
    cout << "Enter the Flight id : \n";
    cin >> FL_Id;
    cout << "Enter the Flight model : \n";
    cin >> FL_Model;
    cout << "Enter the Flight capicity : \n";
    cin >> FL_Cap;
    cout << "Enter the Flight Airline : \n";
    cin >> FL_Airline;
    cout << "Enter the Flight distnation : \n";
    cin >> FL_distniation;
    cout << "Enter the Flight departure time : \n";
    cin >> FL_Departure_Time;
    cout << "Enter the Flight ticket price : \n";
    cin >> FL_Ticket_Price;

    Flight F1(FL_Id,FL_Model,FL_Cap,FL_Airline,FL_distniation,FL_Departure_Time,FL_Ticket_Price);
    F1.display_Flight_info();
}