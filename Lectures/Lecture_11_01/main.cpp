#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

const string NOHASHTAG = "no hashtag";
string getnexthashtag(string texti, unsigned int& pos);

int main() {
    string test = "Lionel and Charles Ortel on Hillary Clinton and Targeting the Unprosecuted Clinton Crime Cartel [VIDEO] #LionelNation #MAGA #KAG2020 @realDonaldTrump @CharlesOrtel #HillaryForPrison #DrainTheSwamp #Midterms2018 #MontanaRally #ClintonCrimeFamily";
    string tag;

    unsigned int pos = 0;
    tag = getnexthashtag(test, pos);
    while (tag != NOHASHTAG) {
        cout << tag << endl;
        tag = getnexthashtag(test,pos);
    }

    return 0;
}

string getnexthashtag(string texti, unsigned int& pos) {
unsigned int hashstart = texti.find("#",pos);
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
