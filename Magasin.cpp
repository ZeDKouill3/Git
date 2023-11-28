#include "Header.h"
#include "Personnel.h"
#include "Stats.h"
#include "Clients.h"
#include "Stock.h"
#include "Commandes.h"
#include <iostream>
#include <vector> // Ajout de la biblioth�que pour utiliser std::vector
#include <string>

using namespace std;

int main()
{
    bool InSystem = true;

    string name;
    string lastname;
    string adress;
    int age;
    long number;

    string Answer;
    cout << "Bienvenue dans le systeme !" << endl;
    cout << "Afficher l'aide --> help" << endl;

    // Utilisation d'un vecteur pour stocker les objets Personnel
    vector<Personnel> personnelList;


    while (InSystem) {
        cout << " " << endl;
        cout << "Que voulez-vous faire ?" << endl;
        cin >> Answer;

        if (Answer == "NewPersonel") {
            Personnel perso;
            cout << "Prenom " << endl;
            cin >> name;
            cout << "Nom " << endl;
            cin >> lastname;
            cout << "adresse " << endl;
            cin >> adress;
            cout << "Age " << endl;
            cin >> age;
            cout << "Num�ro " << endl;
            cin >> number;

            perso.Cr�ation_Personnel(name, lastname, adress, age, number);

            // Ajout du nouvel objet Personnel au vecteur
            personnelList.push_back(perso);
        }
        else if (Answer == "help") {
            cout << "/////////////////////////////////////////////////" << endl;

            cout << " " << endl;
            cout << "Cree un personnel --> NewPersonel" << endl;
            cout << "	Prenom" << endl;
            cout << "	Nom" << endl;
            cout << "	Adresse (doit etre ecrite tout attache)" << endl;
            cout << "	Age" << endl;
            cout << "	Numero" << endl;
            cout << " " << endl;

            cout << "/////////////////////////////////////////////////" << endl;

            cout << " " << endl;
            cout << "Afficher un personnel --> Diplay" << endl;
            cout << "	Display (Numero du personnel directement)" << endl;
            cout << "	ou" << endl;
            cout << "	Display" << endl;
            cout << "	Et numero du personnel" << endl;
            cout << " " << endl;

            cout << "/////////////////////////////////////////////////" << endl;

            cout << " " << endl;
            cout << "Cree un personnel automatiquement --> Cheats" << endl;
            cout << " " << endl;
  
            cout << "/////////////////////////////////////////////////" << endl;

   
        }
        else if (Answer == "Display") {
            int requestedID;
            cout << "Quel est l'ID du personnel que vous voulez consulter ?" << endl;
            cin >> requestedID;

            // Parcourez le vecteur pour trouver le personnel avec l'ID sp�cifi�
            bool personnelFound = false;
            for (const auto& p : personnelList) {
                if (p.Afficher_Personnel(requestedID) != "") {
                    personnelFound = true;
                    cout << p.Afficher_Personnel(requestedID);
                    break;
                }
            }

            if (!personnelFound) {
                cout << "Aucun personnel trouv� avec l'ID " << requestedID << endl;
            }
        }
        else if (Answer == "Cheats") {
            cout << "Utilisation de Cheats..." << endl;
            Personnel perso;
            perso.Cr�ation_Personnel("David", "Pujadas", "DTC", 69, 06120552);

            // Ajout du nouvel objet Personnel au vecteur
            personnelList.push_back(perso);
        }
        else {
            cout << "Commande non reconnue" << endl;
        }
    }

    return 0;
}