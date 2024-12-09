#include<iostream>
using namespace std;

class PrimaryInfo
{
protected:
	string cusName;
	string cusId;
public:
	void setCusName(string cName)
	{
		cusName=cName;
	}
	void setCusID(string cId)
	{
		cusId = cId;
	}
	void showPrimaryInfo()
	{
		cout << "Customer Name: " << cusName << endl;
		cout << "Customer ID: " << cusId << endl;
	}
};

class SecondaryInfo
{
protected:
	string cusDoB;
	string cusAddress;
public:
	void setCusDateOfBirth(string date)
	{
		cusDoB = date;
	}
	void setCusAddress(string address)
	{
		cusAddress = address;
	}
	void showSecondaryInfo()
	{
		cout << "Customer DOB is: " << cusDoB << endl;
		cout << "Customer Address Is: " << cusAddress << endl;
	}
};

class Customer :public PrimaryInfo, public SecondaryInfo
{
protected:
	double cusIncome;
	char cusRating;
public:
	void setCusIncome(double income)
	{
		cusIncome = income;
	}
	void setRating(char rating)
	{
		cusRating = rating;
	}
	void showCusInfo()
	{
		cout << "Customer Income Is: " << cusIncome << endl;
		cout << "Customer Rating Is: " << cusRating << endl;
	}
};

int main()
{
	Customer ob;
	ob.setCusName("efy");
	ob.setCusID("2256");
	ob.setCusDateOfBirth("05jan");
	ob.setCusAddress("agargaon");
	ob.setCusIncome(300000.00);
	ob.setRating('5/5');


	ob.showPrimaryInfo();
	ob.showSecondaryInfo();
	ob.showCusInfo();
		return 0;

}