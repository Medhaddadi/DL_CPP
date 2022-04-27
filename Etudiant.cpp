//
// Created by mohamedElHaddadi on 4/26/2022.
//

#include "Etudiant.h"
Etudiant::Etudiant(string cne, string Nom, string Prenom) {
    CNE=cne;
    nom=Nom;
    prenom=Prenom;
}
ostream & operator<<(ostream & os,const Etudiant & etudiant)
{
    os<<"================================================"<<endl;
    os<<"CNE       : "<<etudiant.CNE<<endl;
    os<<"Nom       : "<<etudiant.nom<<endl;
    os<<"Prenom    : "<<etudiant.prenom<<endl;
    os<<"moyenne   : "<<etudiant.moyenne<<endl;
    os<<"preference: <"<<etudiant.preference.first<<" , "<<etudiant.preference.second<<" >"<<endl;
    return os;
}
void Etudiant::setPreference() {
    int s;
        cout<<"saisir cotre preference:(une 1.'eventuelle option' ,2.'specialite' ou 3.'nom d'une futur ecole')"<<endl;
        cin>>s;
    switch (s) {
        case 1:
        {
            cout<<"eventuelle option :";
            preference.first="eventuelle option";
            string string1;
            cin>>string1;
            preference.second=string1;
            break;
        }
        case 2:
        {
            cout<<"specialite :";
            preference.first="specialite";
            string string1;
            cin>>string1;
            preference.second=string1;
            break;
        }
        case 3:
        {
            cout<<"nom d'une futur ecole :";
            preference.first="nom d'une futur ecole";
            string string1;
            cin>>string1;
            preference.second=string1;
            break;
        }
        default:
            cout<<"saisir un choix permet les choix donnez !!"<<endl;
    }

}
void Etudiant::setMoyenne(float moy) {
    if(moy<0 || moy>20)
        cout<<"la moyeene non valide ressayer!!!"<<endl;
    else
        moyenne=moy;
}

Etudiant& Etudiant::operator<( Etudiant &etudiant) {
    if(this->moyenne<etudiant.moyenne)
        return etudiant;
    else
        return *this;
}

bool Etudiant::operator==(const Etudiant &etudiant) {
    if (etudiant.moyenne== this->moyenne)
        return true;
    else
        return false;
}


Etudiant & EtudiantMoyMax(Etudiant *etudiant,int taille)
{
    Etudiant *etudiantSup=new Etudiant;
    *etudiantSup=etudiant[0];
    for (int i = 0; i < taille; ++i) {
        *etudiantSup=*etudiantSup<etudiant[i];
    }
    return *etudiantSup;
}
