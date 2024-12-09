#include<iostream>
using namespace std;

class Person
{
public:
	string name;
private:
	int nid;
	void set(int id)
	{
		nid = id;
	}
	int get()
	{
		return nid;
	}
};

class Emplayee :public Person
{
public:
	string name;
private:
	int nid;
	int salary;
	void set(int id)
	{
		nid = id;
	}
	int get()
	{
		return nid;
	}
	void setSalary(int s)
	{
		salary = s;
	}

	int getSalary()
	{
		return salary;
	}
};

class Student : public Person
{
public:
	string name;
private:
	int sid;
	float cgpa;
	void setsid(int id)
	{
		sid = id;
	}
	int get()
	{
		return sid;
	}
	void set(float c)
	{
		cgpa = c;
	}
	float get()
	{
		return cgpa;
	}
};

class Scholarship Student : public Student, public Person
{
public:
	string name;
private:
	int sid;
	float cgpa;
	void set(int id)
	{
		sid = id;
	}
	int get()
	{
		return sid;
	}
	void set(float c)
	{
		cgpa = c;
	}
	float get()
	{
		return cgpa;
	}
};

class Faculty :public Emplayee, public Person
{
public:
	string name;
private:
	int nid;
	string email;
	void set(int id)
	{
		nid = id;
	}
	int get()
	{
		return nid;
	}
};

class officer :public Emplayee, public Person
{
public:
	string name;
private:
	int oid;
	string email;
	void setoid(int id)
	{
		oid = id;
	}
	int get()
	{
		return oid;
	}
};

class ta :public Emplayee, public Person
{
public:
	string name;
private:
	int tid;
	string email;
	int workinghour;
	void set(int id)
	{
		tid = id;
	}
	int get()
	{
		return tid;
	}
};

int main()
student obj;
ob.set





