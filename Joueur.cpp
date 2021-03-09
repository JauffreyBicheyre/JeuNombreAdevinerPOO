/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: Joueur.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 05/02/2021
// Rôle du fichier: Contient le code des méthodes du joueur
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/Joueur.h"

    // Nom :CJoueur  Constructeur
    // Rôle : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
    // Paramètre d'entrée :
    //                  un_nom : le nom du joueur
    // Sortie : le joueur créé

    CJoueur::CJoueur(string un_nom,string un_prenom)
    {
        this->nom = un_nom;
        this->prenom = un_prenom;
        this->nbPartiesGagnees = 0;
        this->nbPartiesJouees=0;
        this->nbTentatives=0;
    }

     CJoueur::~CJoueur()
     {
         cout << this->Nom() << this->Prenom() << endl;
         cout << this << endl;
     }
    // Nom : MajResultats
    // Rôle : met à jour les informations d'un joueur
    // Paramètres d'entrée:
    //              - le nombre d'essais
    //              - gagne qui vaut true si le joueur a gagné, false sinon
    // Entrée/sortie :
    //              le joueur dont on met à jour les résultats


    void CJoueur::MajResultats(int nbEssais, bool gagne)
    {
       this->nbTentatives= this->nbTentatives + nbEssais;

       if (gagne == true)
            this->nbPartiesGagnees ++;

       this->nbPartiesJouees++;
    }

    // Nom : Resultats
    // Rôle : indique les résultats d'un joueur
    //        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations à l'écran
    // Paramètres de sortie:
    //                      - le nombre de succès,
    //                      - le nombre d'échecs
    //                      - le nombre total d'essais
    // Entrée :
    //            -le joueur dont on veut les résultats

    void CJoueur::Resultats(int& nbsucces, int& nbechec, int& nbessais)
    {
        nbsucces = this->nbPartiesGagnees;

        nbechec = this->nbPartiesJouees - this->nbPartiesGagnees;
        nbessais = this->nbTentatives;
    }

    void CJoueur::CalculAverage(float &average)
    {
        float moyenne;
        moyenne = this->nbTentatives/nbPartiesJouees;
    }


    // Nom :Nom
    // Rôle : retourne le nom du joueur
    // Paramètres d'entrée: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entrée : le joueur dont on veut le nom

    string CJoueur::Nom()
    {
        return nom;
    }

    string CJoueur::Prenom()
    {
        return prenom;
    }

