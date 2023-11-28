#include <iostream>
#include "Personnel.h"

int Personnel::dernierID = 0;

Personnel::Personnel() {
    // Incrémente le dernier ID et l'attribue à l'ID actuel
    dernierID++;
    ID = dernierID;
}

int Personnel::Création_Personnel(string nom, string prénom, string adresse, int age, int numéro) {
    // Initialise les attributs avec les paramètres fournis


    this->nom = nom;
    this->prénom = prénom;
    this->adresse = adresse;
    this->age = age;
    this->numéro = numéro;

  
    
    std::cout << "Personnel numéro " + to_string(ID) + " cree avec succes!" << std::endl;
    /*
    std::cout << "ID : " << ID << std::endl;
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Prenom : " << prénom << std::endl;
    std::cout << "Adresse : " << adresse << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "Numero : " << numéro << std::endl;
    */
  

    return ID;
}

string Personnel::Afficher_Personnel(int ID) const {
    if (this->ID == ID) {
        // Retourne les informations du personnel sous forme de chaîne
        return "ID : " + to_string(ID) + "\nNom : " + nom + "\nPrénom : " + prénom +
            "\nAdresse : " + adresse + "\nAge : " + to_string(age) +
            "\nNuméro : " + to_string(numéro) + "\n";
    }
    return ""; // Retourne une chaîne vide si l'ID n'est pas trouvé
}

