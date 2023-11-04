exercice1:
#include <iostream>
using namespace std;

class Complexe {
private:
    float reel;
    float imaginaire;

public:
    Complexe(float r, float i) : reel(r), imaginaire(i) {}

    Complexe operator+(const Complexe& autre) {
        return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    Complexe operator-(const Complexe& autre) {
        return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    Complexe operator*(const Complexe& autre) {
        float reel_resultat = reel * autre.reel - imaginaire * autre.imaginaire;
        float imaginaire_resultat = reel * autre.imaginaire + imaginaire * autre.reel;
        return Complexe(reel_resultat, imaginaire_resultat);
    }

    void afficher() {
        cout << reel << " + " << imaginaire << "i" << endl;
    }
};

int main() {
    float reel1, imaginaire1, reel2, imaginaire2;

    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> reel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> reel2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> imaginaire2;

    Complexe nombre1(reel1, imaginaire1);
    Complexe nombre2(reel2, imaginaire2);

    Complexe addition = nombre1 + nombre2;
    Complexe difference = nombre1 - nombre2;
    Complexe produit = nombre1 * nombre2;

    cout << "Addition : ";
    addition.afficher();

    cout << "Différence : ";
    difference.afficher();

    cout << "Produit : ";
    produit.afficher();

    return 0;
