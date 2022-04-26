//
// Created by mohamedElHaddadi on 4/26/2022.
//

#include "set_Etudiant.h"
#include "set"
void set_Etudiant::affichageSetEtudiant() {
    set<Etudiant>::iterator it=setEtudiant.begin();
    while (it!=setEtudiant.end())
    {
       cout<<*it<<endl;
       it++;
    }
}
