#include<iostream>
using namespace std;

class PrimartyInfo
{
protected:
	string cusName;
	string cusId;
public:
	void setCusName(string cName)
	{
		cusName = cName;
	}
	void setCusID(string cID)
	{
		cusId = cID;
	}
	void showPrimaryInfo()
	{
		cout << "Customer Name is : " << cusName << endl;
		cout << "Customer Id is   : " << cusId << endl;
	}
};

class SecondaryInfo
{
protected:
	string cusDoB;
	string cusAddress;
public:
	void setCusDateOfBirth(string data)
	{
		cusDoB = data;
	}
	void setCusAddress(string address)
	{
		cusAddress = address;
	}
	void showSecondaryInfo()
	{
		cout << "Customer Date Of Birth is : " << cusDoB << endl;
		cout << "Customer Address is   : " << cusAddress << endl;
	}
};

class Customer :public PrimartyInfo, public SecondaryInfo
{
protected:
	double cusIncome;
	char cusRating;
public:
	void setCusIncome(double income)
	{
		cusIncome = income;
	}
	void setCusRating(char rating)
	{
		cusRating = rating;
	}
	void showCusInfo()
	{
		cout << "Customer Income is : " << cusIncome << endl;
		cout << "Customer Rating is   : " << cusRating << endl;
	}
};

int main()
{
	Customer call;
	call.setCusName("Efty, Md. Emran Nazir");
	call.setCusID("22 - 47802 - 2");
	call.setCusDateOfBirth("05-12-2000");
	call.setCusAddress("West Agatgaon, Dhaka-1207");
	call.setCusIncome(45000.00);
	call.setCusRating('5/5');

	call.showPrimaryInfo();
	call.showSecondaryInfo();
	call.showCusInfo();

	return 0;
}