#include<iostream>
using namespace std;

class Vehicle 
{
	protected:
		int Maxspeed;
		float Enginecapacity;
		public:
			Vehicle(int speed, float capacity)
			{
				Maxspeed = speed;
				Enginecapacity = capacity;
			}
			~Vehicle()
			{
				cout<<" Destructor of vehicle called "<<endl;
		}			
};
class Car: private Vehicle 
{
	private:
		 string Modelname;
		 string color;
		 public:
		 	Car(string name ,string clr, int speed , float capacity):Vehicle(speed,capacity)
		 	{
		 		Modelname = name;
		 		color = clr;
			 }
			 ~Car()
			 {
			 	cout<<" Car destructor called "<<endl;
			 }
			 void display()
			 {
			 	cout<<" Model name : "<<Modelname<<endl;
			 	cout<<" Color : "<<color<<endl;
			 	cout<<" Max speed : "<<Maxspeed<<"KM/h"<<endl;
			 	cout<<" Engine capacity : "<<Enginecapacity<<" CC "<<endl;
			 	
			 }
};
int main ()
{

{
	Car c1("Porshe Cayman ", "silver", 63,3200);
	cout<<" Car 1 details : "<<endl;
	c1.display();
}
    cout<<endl;
	{	
	Car c2(" BMW ", "Black ", 77,3300);
	cout<<" Car 2 details : "<<endl;
	c2.display();
}
	return 0;	

}
