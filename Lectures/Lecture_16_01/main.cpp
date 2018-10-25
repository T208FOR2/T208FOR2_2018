#include <iostream>

using namespace std;

class Namskeid {
public:
    string nafn;
    void prenta();
};

class Student {
public:
    Student();
    Student(string n);
    Student(string n, string h);

    string nafn;
    string heimilisfang;

    Namskeid uppahaldsfag;

    int get_faedingarar();
    void set_faedingarar(int new_ar);

    void prenta();

    friend ostream& operator << (ostream& outs, const Student &s);
private:
    int faedingarar;
};

ostream& operator << (ostream& outs, const Student &s) {
    outs << "Student: " << s.nafn << " (" << s.faedingarar << ")";
    outs << " Address: " << s.heimilisfang << endl;
    outs << "Favorite subject: " << s.uppahaldsfag.nafn << endl;
    return outs;
}


int main()
{
    Namskeid n1,n2;
    Student s1, s2("Mary"), s3("Charles","West End");

    n1.nafn = "T208FOR2";
    n1.prenta();

    n2.nafn = "T101STAE";
    n2.prenta();

    s1.nafn = "Johnny";
    s1.heimilisfang = "101 Broadway";
    s1.set_faedingarar(1995);

    s1.uppahaldsfag = n2;

    s1.prenta();

    s2.prenta();
    s3.prenta();

    cout << "-------------------" << endl;
    cout << s3 << endl;

    return 0;
}

//--------------------------

void Namskeid::prenta() {
    cout << "Course name: " << nafn << endl;
}

//--------------------------

Student::Student() {
    cout << "I'M THE DEFAULT CONSTRUCTOR" << endl;
    nafn = "no name";
    faedingarar = 1900;
    heimilisfang = "no address";

    //uppahaldsfag.nafn = "no course";

    Namskeid tomt_namskeid = {"no course"};
    uppahaldsfag = tomt_namskeid;
}

Student::Student(string n) {
    cout << "I'M THE SECOND CONSTRUCTOR" << endl;
    nafn = n;
    faedingarar = 1900;
    heimilisfang = "no address";

    Namskeid tomt_namskeid = {"no course"};
    uppahaldsfag = tomt_namskeid;
}

Student::Student(string n, string h) {
    cout << "I'M THE THIRD CONSTRUCTOR" << endl;
    nafn = n;
    faedingarar = 1900;
    heimilisfang = h;

    Namskeid tomt_namskeid = {"no course"};
    uppahaldsfag = tomt_namskeid;
}


void Student::prenta() {
    cout << "Student: " << nafn << " (" << faedingarar << ")";
    cout << " Address: " << heimilisfang << endl;
    cout << "Favorite subject: " << uppahaldsfag.nafn << endl;
}

int Student::get_faedingarar() {
    return faedingarar;
}

void Student::set_faedingarar(int new_ar) {
    if (new_ar < 1800) {
        cout << "sorry, wrong birthyear!" << endl;
    }
    else if (new_ar > 2018) {
        cout << "Sorry, please reapply after you are born..." << endl;
    }
    else {
        faedingarar = new_ar;
    }
}


