#include <iostream>

using namespace std;

class Rectangle {
public:
    Rectangle();

    void set_height(int h);
    int get_height() const;

    friend ostream& operator << (ostream& outs, const Rectangle &r);
private:
    int width;
    int height;
};

int Rectangle::get_height() const {
    return height;
}


void Rectangle::set_height(int h) {
    height = h;
}


Rectangle::Rectangle() {
    width = 0;
    height = 0;
}

ostream& operator << (ostream& outs, const Rectangle &r) {
    outs << r.width << " x " << r.height;
    return outs;
}

int main() {
    Rectangle r;
    r.set_height(17);
    cout << r << endl;
    cout << r.get_height() << endl;

    return 0;
}
