#include<iostream>
using namespace std;

class Person
{
private:
	int NID;
public:
	string Name;
	void setp(string name, int id)
	{
		Name = name;
		NID = id;
	}
	void getp()
	{
		cout << "Name Is: " << Name<<endl;
		cout << "NID Is: " << NID<<endl;
	}
};

class Employce:public Person
{
private:
	int EID;
	double Salary;
public:
	string Name;
	void sete(string name, int eid,double salary)
	{
		Name = name;
		EID = eid;
		Salary = salary;
	}
	void gete()
	{
		cout << "Name Is: " << Name << endl;
		cout << "EID Is: " << EID << endl;
		cout << "Salary Is: " << Salary << endl;
	}
};

class Student :public Person
{
private:
	int SID;
	double CGPA;
public:
	string Name;
	void sets(string name, int sid, double cgpa)
	{
		Name = name;
		SID = sid;
		CGPA = cgpa;
	}
	void gets()
	{
		cout << "Name Is: " << Name << endl;
		cout << "SID Is: " << SID << endl;
		cout << "CGPA Is: " << CGPA << endl;
	}
};

class ScholarshipStudent :public Student
{
private:
	int SID;
	double CGPA;
public:
	string Name;
	void setss (string name, int sid, double cgpa)
	{
		Name = name;
		SID = sid;
		CGPA = cgpa;
	}
	void getss()
	{
		cout << "Name Is: " << Name << endl;
		cout << "SID Is: " << SID << endl;
		cout << "Cgpa Is: " << CGPA << endl;
	}
};

class Faculty :public Employce
{
private:
	string Email;
public:
	string Name;
	void setf(string name, string email)
	{
		Name = name;
		Email = email;
	}
	void getf()
	{
		cout << "Name Is: " << Name << endl;
		cout << "Email Is: " << Email << endl;
	}
};

class Officer :public Employce
{
private:
	int OID;
public:
	string Name;
	void seto(string name, int oid)
	{
		Name = name;
		OID = oid;
	}
	void geto()
	{
		cout << "Name Is: " << Name << endl;
		cout << "OID Is: " << OID << endl;
	}
};

class TA :public Employce, public Student
{
private:
	int TID;
	double WorkingHour;
public:
	string Name;
	void setta(string name, int tid, double wh)
	{
		Name = name;
		TID = tid;
		WorkingHour = wh;
	}
	void getta()
	{
		cout << "Name Is: " << Name << endl;
		cout << "TID Is: " << TID << endl;
		cout << "Working Hour is: " << WorkingHour << endl;
	}
};

int main()
{
	Person p;
	p.setp("Nazir Efty", 22 - 4780 - 22);
	p.getp();

	Employce e;
	e.sete("Md.Emran", 22472,400000);
	e.gete();

	Student s;
	s.sets("Efty em", 224780, 4.86);
	s.gets();

	ScholarshipStudent ss;
	ss.setss("Md", 478022, 4.86);
	ss.getss();

	Faculty f;
	f.setf("emran","efty@gmail.com");
	f.getf();

	Officer o;
	o.seto("Nazir", 228000);
	o.geto();

	TA ta;
	ta.setta("Efty", 222542,11);
	ta.getta();

	return 0;
}