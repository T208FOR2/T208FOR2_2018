#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

string getnexthashtag(string texti, unsigned int& pos);

int main() {
    string test = "Lionel and Charles Ortel on Hillary Clinton and Targeting the Unprosecuted Clinton Crime Cartel [VIDEO] #LionelNation #MAGA #KAG2020 @realDonaldTrump @CharlesOrtel #HillaryForPrison #DrainTheSwamp #Midterms2018 #MontanaRally #ClintonCrimeFamily";



    return 0;
}

string getnexthashtag(string texti, unsigned int& pos) {
unsigned int hashstart = texti.find("#");
    unsigned int hashend;
    if (hashstart < texti.length()) {
        hashend = texti.find_first_not_of("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890", hashstart+1);
        pos = hashend;
        return texti.substr(hashstart, hashend-hashstart) << endl;
    }
}
