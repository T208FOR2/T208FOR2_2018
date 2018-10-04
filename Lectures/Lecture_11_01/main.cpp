#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

const string NOHASHTAG = "no hashtag";
const string THEFILENAME = "/Users/Eyjo/Desktop/twitter_maga.txt";

string getnexthashtag(string texti, unsigned int& pos);

void open_file(ifstream &theinputfile, string thefilename);

int main() {
    ifstream theinputfile;
    string tag, current_line;

    open_file(theinputfile, THEFILENAME);

    while (!theinputfile.eof()) {
        getline(theinputfile, current_line);

        unsigned int pos = 0;
        tag = getnexthashtag(current_line, pos);
        while (tag != NOHASHTAG) {
            cout << tag << endl;
            tag = getnexthashtag(current_line,pos);
        }
    }

    return 0;
}

string getnexthashtag(string texti, unsigned int& pos) {
unsigned int hashstart = texti.find("#", pos);
    unsigned int hashend;
    if (hashstart < texti.length()) {
        hashend = texti.find_first_not_of("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890", hashstart+1);
        pos = hashend;
        return texti.substr(hashstart, hashend-hashstart);
    }
    else {
        return NOHASHTAG;
    }
}

void open_file(ifstream &theinputfile, string thefilename) {
    theinputfile.open(thefilename.c_str());
    if (theinputfile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}
