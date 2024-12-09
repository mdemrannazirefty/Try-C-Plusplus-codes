#include<iostream>
using namespace std;

class CustomerDetails
{
protected:
	string cusName;
	string cusTelNum;
	string cusId;
public:
	void setCusName(string name)
	{
		cusName = name;
	}
	void setCusTelNum(string num)
	{
		cusTelNum = num;
	}
	void setCusID(string id)
	{
		cusId = id;
	}
	void displayCusDetails()
	{
		cout << "Customer Name is : " << cusName << endl;
		cout << "Customer Tel-Number is   : " << cusTelNum << endl;
		cout << "Customer id is   : " << cusId << endl;
	}
};

class JourneyDetails
{
protected:
	string TravelDate;
	string TravelTo;
	string TravelFrom;
	int Distance;
public:
	string setTravelDate(string date)
	{
		TravelDate = date;
	}
	string setTravelTo(string trTo)
	{
		TravelTo = trTo;
	}
	string setTravelFrom(string trFr)
	{
		TravelFrom = trFr;
	}
	int setDistance(int d)
	{
		Distance = d;
	}
	 void showJourneyDetails()
	{
		cout << "Travel Date is : " << TravelDate << endl;
		cout << "Travel To: " << TravelTo << endl;
		cout << "Travel From: " << TravelFrom << endl;
		cout << "Distance:" << Distance << endl;
	}
};

class TicketIssue : public JourneyDetails, public CustomerDetails
{
protected:
	float ticketPrice;
	float chrg;
public:
	void printTicket()
	{
		if (distance <= 100);
		{

			float beforePrice;
			beforePrice = 5 * distance;
			chrg = beforePrice * 20 / 100;
			cout << " Per Kilometer Price = 5 taka " << endl;
			cout << " Price Before Charge Applied : " << beforePrice << endl;
			ticketPrice = beforePrice + chrg;
			cout << " Price After 0.2% Charge : " << ticketPrice << endl;
			cout << "****END OF TICKET****" << endl;


		}
		else if (distance > 100 && distance < 200);
		{

			float beforePrice;
			beforePrice = 5 * distance;
			chrg = beforePrice * 10 / 100;
			cout << " Per Kilometer Price = 5 taka " << endl;
			cout << " Price Before Charge Applied : " << beforePrice << endl;
			ticketPrice = beforePrice + chrg;
			cout << " Price After 0.1% Charge : " << ticketPrice << endl;
			cout << "****END OF TICKET****" << endl;
		}

		else if (distance > 200);
		{
			float beforePrice;
			beforePrice = 5 * distance;
			chrg = 0.20;
			cout << " Per Kilometer Price = 5 taka " << endl;
			cout << " Price Before Charge : " << beforePrice << endl;
			ticketPrice = beforePrice + chrg;
			cout << " Price After  Charge Applied : " << ticketPrice << endl;
			cout << "****END OF TICKET****" << endl;
		}
	}
};

int main()
{
	TicketIssue st1, st22;
	st1.setCusName("efty");
	st1.setCusTelNum("01255455");
	st1.setCusID("2536422");
	st1.setTravelDate("22dec");
	st1.setTravelTo("Dhaka");
	st1.setTraveFrom("Khulna");
	st1.setDistance(90);

	st1.displayCusDetails();
	st1.showJourneyDetails()

	st2.setCusName("emran");
	st2.setCusTelNum("22012554551");
	st2.setCusID("92536422");
	st2.setTravelDate("2dec");
	st2.setTravelTo("rajs");
	st2.setTraveFrom("Khulna");
	st2.setDistance(150);

	st2.displayCusDetails();
	st2.showJourneyDetails()
	return 0;
}
