#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string test = "Lionel and Charles Ortel on Hillary Clinton and Targeting the Unprosecuted Clinton Crime Cartel [VIDEO] #LionelNation #MAGA #KAG2020 @realDonaldTrump @CharlesOrtel #HillaryForPrison #DrainTheSwamp #Midterms2018 #MontanaRally #ClintonCrimeFamily";

    unsigned int hashstart = test.find("#");
    unsigned int hashend;
    while (hashstart < test.length()) {
        hashend = test.find_first_not_of("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890", hashstart+1);
        cout << test.substr(hashstart, hashend-hashstart) << endl;
        hashstart = test.find("#", hashstart+1);
    }

    return 0;
}
