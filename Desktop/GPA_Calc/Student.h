
#include<iostream>
#include<string>
#include "Class_info.h"
#include<vector>

using namespace std;

class Student : Class_info
{
public:
//Deflault constructor
Student();

//Overloaded Constructor
Student(string fname, string lname, string uname, string user_pw, vector<Class_info> new_class);

//Accessor Function
string get_fname();
string get_lname();
string get_username();
void get_classInfo_vector();

//Mutetor Funciton
string set_fname(string fname);
string set_lname(string lname);
void set_pw(string user_input);


//Destructor
~Student();

private:
//Member variables
string first_name;
string last_name;
int unique_id;
string username;
string pw;               //To Save the password.
vector<Class_info> classInfo_vector;
};


