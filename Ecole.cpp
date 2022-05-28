//
// Created by mohamedElHaddadi on 4/27/2022.
//

#include "Ecole.h"
void Ecole::affichageEcole() {
    cout<<"******************************"<<endl;
    cout<<"le nom de l'ecole                    :"<<nomEcole<<endl;
    cout<<"la ville de l'ecole                  :"<<ville<<endl;
    cout<<"le nombre max des etudiant admit     :"<<nbMAxEtudiant<<endl;
    cout<<"la moyenne minimal des etudiant admit:"<<moyeeneMin<<endl;
}


void Ecole::affectation(set_Etudiant<Etudiant> etudiants) {
    for (int i = 0; i < etudiants.cardinal(); ++i) {
        if(etudiants[i].getmoyenne()>)
    }
}