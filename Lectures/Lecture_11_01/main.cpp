#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

const string NOHASHTAG = "no hashtag";
const string THEFILENAME = "/Users/Eyjo/Desktop/twitter_maga.txt";
const int NUM = 10000;

string getnexthashtag(string texti, unsigned int& pos);
int indexofelement(string hashtags[], int n, string newelement);
string tolower(string s);
void open_file(ifstream &theinputfile, string thefilename);
void insertorupdatehashtags(string hashtags[], int counts[], int& n, string newelement);

int main() {
    ifstream theinputfile;
    string tag, current_line;
    string hashtags[NUM];
    int counts[NUM], n = 0;
    for (int i = 0; i < NUM; i++) {
        hashtags[i] = "";
        counts[i] = 0;
    }

    open_file(theinputfile, THEFILENAME);

    while (!theinputfile.eof()) {
        getline(theinputfile, current_line);

        unsigned int pos = 0;
        tag = getnexthashtag(current_line, pos);
        while (tag != NOHASHTAG) {
            insertorupdatehashtags(hashtags, counts, n, tag);

            tag = getnexthashtag(current_line,pos);
        }
    }

    for (int i = 0; i < 30; i++) {
        cout << hashtags[i] << " - " << counts[i] << endl;
    }

    return 0;
}

void insertorupdatehashtags(string hashtags[], int counts[], int& n, string newelement) {
    int index = indexofelement(hashtags, n, newelement);
    if (index >= 0) {
        counts[index]++;
    }
    else if (n < NUM) {
        hashtags[n] = newelement;
        counts[n] = 1;
        n++;
    }
    else {
        cout << "Error: the array is too small!" << endl;
    }
}

int indexofelement(string hashtags[], int n, string newelement) {
    for (int i = 0; i < n; i++) {
        if (tolower(hashtags[i]) == tolower(newelement)) {
            return i;
        }
    }
    return -1;
}

string tolower(string s) {
    for (unsigned int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
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
