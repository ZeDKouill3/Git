#include <iostream>
#include "Personnel.h"

int Personnel::dernierID = 0;

Personnel::Personnel() {
    // Incr�mente le dernier ID et l'attribue � l'ID actuel
    dernierID++;
    ID = dernierID;
}

int Personnel::Cr�ation_Personnel(string nom, string pr�nom, string adresse, int age, int num�ro) {
    // Initialise les attributs avec les param�tres fournis


    this->nom = nom;
    this->pr�nom = pr�nom;
    this->adresse = adresse;
    this->age = age;
    this->num�ro = num�ro;

  
    
    std::cout << "Personnel num�ro " + to_string(ID) + " cree avec succes!" << std::endl;
    /*
    std::cout << "ID : " << ID << std::endl;
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Prenom : " << pr�nom << std::endl;
    std::cout << "Adresse : " << adresse << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "Numero : " << num�ro << std::endl;
    */
  

    return ID;
}

string Personnel::Afficher_Personnel(int ID) const {
    if (this->ID == ID) {
        // Retourne les informations du personnel sous forme de cha�ne
        return "ID : " + to_string(ID) + "\nNom : " + nom + "\nPr�nom : " + pr�nom +
            "\nAdresse : " + adresse + "\nAge : " + to_string(age) +
            "\nNum�ro : " + to_string(num�ro) + "\n";
    }
    return ""; // Retourne une cha�ne vide si l'ID n'est pas trouv�
}

