exercice3:
#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};

bool comparerPersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom != personne2.nom) {
        return personne1.nom < personne2.nom;
    } else if (personne1.prenom != personne2.prenom) {
        return personne1.prenom < personne2.prenom;
    } else {
        return personne1.age < personne2.age;
    }
}

int main() {
    list<Personne> personnes;
    int nombreDePersonnes;

    cout << "Combien de personnes souhaitez-vous entrer ? ";
    cin >> nombreDePersonnes;

    for (int i = 0; i < nombreDePersonnes; ++i) {
        Personne personne;
        cout << "Entrez le nom de la personne " << i + 1 << ": ";
        cin >> personne.nom;
        cout << "Entrez le prénom de la personne " << i + 1 << ": ";
        cin >> personne.prenom;
        cout << "Entrez l'âge de la personne " << i + 1 << ": ";
        cin >> personne.age;
        personnes.push_back(personne);
    }

    personnes.sort(comparerPersonnes);

    cout << "\nListe triée :\n";
    for (const auto& personne : personnes) {
        cout << personne.nom << " " << personne.prenom << " - " << personne.age << " ans" << endl;
    }

    return 0;
}
