#include <iostream>

using namespace std;

class Timi {
public:
    Timi();
    Timi(int m);
    Timi(int k, int m);

    void set_klst(int k);
    void set_minutur(int m);
    int get_klst() const {return klst;};
    int get_minutur() const {return minutur;};

    int to_minutes() const {return 60*klst + minutur;};

    friend Timi operator + (const Timi& lhs, const Timi& rhs);
    friend Timi operator - (const Timi& lhs, const Timi& rhs);

    friend bool operator > (const Timi& lhs, const Timi& rhs);
    friend bool operator <= (const Timi& lhs, const Timi& rhs);

    friend istream& operator >> (istream& ins, Timi &t);
    friend ostream& operator << (ostream& outs, const Timi &t);
private:
    int klst;
    int minutur;

    void fix_klst();
    void fix_minutur();
};



int main()
{
    Timi t1,t2,t3;

    cin >> t1 >> t2;

    if (t1 > t2) {
        cout << t2 << " -- " << t1 << endl;
    }
    else {
        cout << t1 << " -- " << t2 << endl;
    }

    cout << t1 + t2 << endl;

    t3 = t2 + 15;

    cout << t3 << endl;

    return 0;
}

Timi operator + (const Timi& lhs, const Timi& rhs) {
    Timi t_new;
    t_new.klst = lhs.klst + rhs.klst;
    t_new.minutur = lhs.minutur + rhs.minutur;

    t_new.fix_minutur();
    t_new.fix_klst();

    return t_new;
}

Timi operator - (const Timi& lhs, const Timi& rhs) {
    Timi t_new;
    t_new.klst = lhs.klst - rhs.klst;
    t_new.minutur = lhs.minutur - rhs.minutur;

    t_new.fix_minutur();
    t_new.fix_klst();

    return t_new;
}

bool operator > (const Timi& lhs, const Timi& rhs) {
    //return lhs.to_minutes() > rhs.to_minutes();

    if (lhs.klst > rhs.klst) {
        return true;
    }
    else if (lhs.klst == rhs.klst && lhs.minutur > rhs.minutur) {
        return true;
    }
    else {
        return false;
    }
}

bool operator <= (const Timi& lhs, const Timi& rhs) {
    return !(lhs > rhs);
}


void Timi::set_klst(int k) {
    klst = k;
    fix_klst();
}

void Timi::set_minutur(int m) {
    minutur = m;
    fix_minutur();
    fix_klst();
}

istream& operator >> (istream& ins, Timi &t) {
    ins >> t.klst >> t.minutur;
    t.fix_minutur();
    t.fix_klst();
    return ins;
}

ostream& operator << (ostream& outs, const Timi &t) {
    if (t.klst < 10) {
        outs << "0";
    }
    outs << t.klst << ":";
    if (t.minutur < 10) {
        outs << "0";
    }
    outs << t.minutur;
    return outs;
}

Timi::Timi() {
    klst = 0;
    minutur = 0;
}

Timi::Timi(int m) {
    klst = 0;
    minutur = m;
    fix_minutur();
    fix_klst();
}

Timi::Timi(int k, int m) {
    klst = k;
    minutur = m;
    fix_minutur();
    fix_klst();
}

void Timi::fix_klst() {
    while (klst < 0) {
        klst += 24;
    }
    while (klst >= 24) {
        klst -= 24;
    }
}

void Timi::fix_minutur() {
    while (minutur < 0) {
        minutur += 60;
        klst--;
    }
    while (minutur >= 60) {
        minutur -= 60;
        klst++;
    }
}
