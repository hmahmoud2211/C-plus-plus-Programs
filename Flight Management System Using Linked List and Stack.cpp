#include <iostream>
using namespace std;
// Define the Flight class to represent flight information
class Flight {
private:
    int Flight_ID;
    string Model;
    int Capacity;
    string Airline;
    string Destination;
    string Departure_Time;
    double Ticket_price;
public:
    // Create a constructor to initialize Flight attributes
    void setFlight_ID(int ID)
    {
        Flight_ID=ID;
    }
    int getFlight_ID()
    {
        return Flight_ID;
    }
    void setModel(string M)
    {
        Model=M;
    }
    string getModel()
    {
        return Model;
    }
    void setCapacity(int C)
    {
        Capacity=C;
    }
    int getCapacity()
    {
        return Capacity;
    }
    void setAirline(string A)
    {
        Airline=A;
    }
    string getAirline()
    {
        return Airline;
    }
    void setDestination(string D)
    {
        Destination=D;
    }
    string getDestination()
    {
        return Destination;
    }
    void setDeparture_Time(string T)
    {
        Departure_Time=T;
    }
    string getDeparture_Time()
    {
        return Departure_Time;
    }
    void setTicket_price(double B)
    {
        Ticket_price=B;
    }
    double getTicket_price()
    {
        return Ticket_price;
    }
    
    
    };
    
    
    
    
    template <class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T e){
            data = e;
            next = NULL;
        }
        Node(){}
};

template <class T>
class FlightList{
	Node<T>* head;
    public:
    	FlightList(){
    	    head= NULL;
    	}
    	bool isempty()
    	{
    	    if(head==NULL)
    	    return true;
    	    else
    	    return false;
    	}
    	void insert_of_endlist(int newfligth)
    	{
    	    if(isempty())
    	    {
    	        Node<T>*newnode;
    	        newnode->data=newfligth;
    	        newnode->next=NULL;
    	        head=newnode;
    	    }
    	    else
    	    {
    	      Node<T>*temp=head; 
    	      while(temp->next!=NULL)
    	      {
    	           temp=temp->next;
    	      }
    	      Node<T>*newnode;
             //taking input for user
             int Flight_ID;
             string Model;
    int Capacity;
    string Airline;
    string Destination;
    string Departure_Time;
    double Ticket_price;
    cout<<"enter the flight id"<<endl;
    cin>>Flight_ID;
    newnode->data.setFlight_ID(Flight_ID);
    cout<<"enter the model"<<endl;
    cin>>Model;
    newnode->data.setModel(Model);
    cout<<"enter the Capacity"<<endl;
    cin>>Capacity;
    newnode->data.setCapacity(Capacity);
    cout<<"enter the Airline"<<endl;
    cin>>Airline;
    newnode->data.setAirline(Airline);
    cout<<"enter the Destination"<<endl;
    cin>>Destination;
    newnode->data.setDestination(Destination);
    cout<<"enter the Departure_Time"<<endl;
    cin>>Departure_Time;
    newnode->data.setDeparture_Time(Departure_Time);
    cout<<"enter the Departure_Time"<<endl;
    cin>>Departure_Time;
    newnode->data.setDeparture_Time(Departure_Time);
    cout<<"enter the Ticket_price"<<endl;
    cin>>Ticket_price;
    newnode->data.setTicket_price(Ticket_price);
    	      temp->next=newnode;
    	      newnode->next=NULL;
    	    }
    	}
    	
    	void display()
    	{
    	    if(isempty())
    	    {
    	        cout<<"sorry,the list is empty";
    	    }
    	    else
    	    {
    	        Node<T>*temp=head;
    	        while(temp!=NULL)
    	        {
    	            cout<<temp->data;
    	            temp=temp->next;
    	        }
    	    }
    	}
    	
    	void DelFlight(int Flight_ID)
    	{
    	    if(isempty())
    	    {
    	        cout<<"sory yhe list is empty so, not delete the item:"<<"\n";
    	    }
    	    if(head==Flight_ID)
    	    {
    	       Node<T>* delptr;
    	       head=head->next;
    	       delete delptr;
    	    }
    	    else
    	    {
    	        Node<T>*delptr=head;
    	        Node<T>*prev=NULL;
    	        while(delptr->next!=Flight_ID)
    	        {
    	            prev=delptr;
    	            delptr=delptr->next;
    	        }
    	        prev->next=delptr->next;
    	        delete delptr;
    	    }
    	}
    	};
    	
    	
    	
    	
    	
template <typename T>
class Flightstack {
private:
	Node<T>* top;
	public:
    	Flightstack(){
    	    top= NULL;
    	}
    	bool IsEmpty()
    	{
    	    if(top==NULL)
    	    return true;
    	    else
    	    return false;
    	}
    	
    	void PushFlight(T&flight)
    	{
    	    if(IsEmpty())
    	    {
    	        //Node<T>*newnode;
    	        Node<T>* newNode = new Node<T>(flight);
    	        newNode->data=flight;
    	        newNode->nwxt=NULL;
    	        top=newNode;
    	    }
    	    else
    	    {
    	        Node<T>* newNode = new Node<T>(flight);
    	        newNode->data=flight;
    	        newNode->next=top;
    	        top=newNode;
    	    }
    	}
    	
    	void PrintStack()
    	{
    	    Node<T>*temp=top;
    	    while(temp!=NULL)
    	    {
    	        cout<<temp->data<<" ";
    	        temp=temp->next;
    	    }
    	    cout<<endl;
    	}
    	
    	T peek()
    	{
    	    if(IsEmpty())
    	    {
    	        cout<<"the stack is empty";
    	    }
    	    else
    	    {
    	        return top->data;
    	    }
    	}
    	
    	/*bool IsEmpty()
    	{
    	    if(top==NULL)
    	    {
    	        return true;
    	    }
    	    else return false;
    	}*/
    	
    	
    	void EditFlight(int Flight_ID,T& newFlight) {
        Node<T>* temp = top;
        while (temp) {
            if (temp->data.getFlight_ID() == Flight_ID) {
                temp->data = newFlight;
                std::cout << "Flight with ID " << Flight_ID << " has been edited." <<endl;
                return;
            }
            temp = temp->next;
        }
    	}
    	
    	
    	void DeleteFlight(T Flight_ID) {
        if (IsEmpty()) {
            cout << "Flight stack is empty." << std::endl;
            return;
        }
        if (top->data.getFlight_ID() == Flight_ID) {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
            cout << "Flight with ID " << Flight_ID << " has been deleted."<<endl;
    	}
    	Node<T>* temp = top;
        Node<T>* prev = nullptr;
        while (temp && temp->data.getFlight_ID()!=Flight_ID) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) {
            cout << "Flight with ID " << Flight_ID << " not found." <<endl;
            return;
        }
    	}
    	
    	
};




int main()
{
    cout << "Welcome to the Flight Management System!" <<endl;
    FlightList<Flight> FlightList;
    Flightstack<Flight> Flightstack;
    
    int option;
    cout<<"menu of option":
    cout<<"1: the linkedlist";
    cout<<"2: the linkedstack";
    cin<<option;
    if (option == 1) 
    {
            int subOption;
             do {
                cout << "LinkedList options:" << std::endl;
                cout << "1. Insert new flight" << std::endl;
                cout << "2. Delete flight" << std::endl;
                cout << "3. Display all flights" << std::endl;
                cout << "4. Close the program" << std::endl;
                cout << "Enter your option (from 1to 4): ";
                cin >> subOption;
                if(subOption==1){
                return insert_of_endlist();
                }
                if(subOption==2)
                {
                    return DelFlight();
                }
                if(subOption==3)
                {
                    return display();
                }
                if(subOption==4)
                {
                    cout<<"please, close the program";
                }
                
                
            }       
    }
    if(option==2)
    {
        int subOption;
             do {
                cout << "Linkedstack options:" <<endl;
                cout << "1. Insert new flight" <<endl;
                cout << "2. Print Stack" <<endl;
                cout << "3.  return the latest flight" <<endl;
                cout << "4. check is empty." <<endl;
                 cout << "5. to eidit." <<endl;
                  cout << "6. to delete." <<endl;
                cout << "Enter your option (from 1to 6): ";
                cin >> subOption;
                if(subOption==1)
                {
                    return PushFlight();
                }
                if(subOption==2)
                {
                    return PrintStack();
                }
                 if(subOption==3)
                {
                    return peek();
                }
                if(subOption==4)
                {
                    return IsEmpty();
                }
                if(subOption==5)
                {
                    return EditFlight();
                }
                if(subOption==6)
                {
                    return DeleteFlight();
                }
                
            
    }
}
}