#include <iostream>

using namespace std;

double somme, mois;

int main()
{
    mois = 20;
    somme = somme + mois;
    cout << mois << endl;
    for(int i=0; i<=23; i++){
    somme = somme + mois;
    }
    cout << "somme total : " << somme << endl;
    return 0;
}