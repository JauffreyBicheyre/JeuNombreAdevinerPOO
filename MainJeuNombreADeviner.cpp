/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{
    //Cr�ation d'un joueur
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom;
    string un_prenom;
    cin >> un_nom;
    cout << "Veuillez entrer votre prenom" << endl;
    cin >> un_prenom;

    // Cr�ation du joueur
    CJoueur joueur (un_nom);
    CJoueur joueur1 (un_prenom);


    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbParties;
    cin >> nbParties;


    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur,joueur1); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur " << joueur1.Nom() << " " << joueur.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais; float averageplayer1;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence
    joueur.CalculAverage(averageplayer1);

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "Nombre moyenne du joueur2 de parties et tentatives : " << averageplayer1 << endl;

    cout << "----------------------------------------------"<< endl;

    //Cr�ation d'un joueur 2
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom2;
    string un_prenom2;
    cin >> un_nom2;
    cin >> un_prenom2;

    // Cr�ation du joueur 2
    CJoueur joueur2 (un_nom2);
    CJoueur joueur3 (un_prenom2);

    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbPartiestwo;
    nbPartiestwo = nbParties;

    for (int i = 0; i <nbPartiestwo; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur2,joueur3); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Destruction du joueur" <<   << endl;
    cout << "Affichage des resultats du joueur " << joueur2.Nom() << " " << joueur3.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur 2
    int nbsuccestwo, nbechecstwo, nbessaistwo;float averageplayer2;
    joueur2.Resultats(nbsucces,nbechecstwo,nbessaistwo); // les param�tres sont pass�s par r�f�rence
    joueur2.CalculAverage(averageplayer2);

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsuccestwo << endl;
    cout << "Nombre de parties perdues : " << nbechecstwo << endl;
    cout << "Nombre de tentatives totales : " << nbessaistwo << endl;
    cout << "Nombre moyenne du joueur2 de parties et tentatives : " << averageplayer2 << endl;
    cout << "----------------------------------------------"<< endl;
    //Affichage score final joueur 1 et 2

    if((nbsuccestwo<nbsucces)&&(nbessais<nbessaistwo))
    {
        cout << "le premier est" << joueur.Nom() << endl;
        cout << "le deuxi�me est" << joueur2.Nom();
    }
    else if((nbsuccestwo>nbsucces)&&(nbessais>nbessaistwo))
    {
        cout << "le premier est" << joueur2.Nom() << endl;
        cout << "le deuxi�me est" << joueur.Nom();
    }
    else
        {
        cout << "Les joueurs sont ex aequo"<< endl;
        }

    return 0;
}

