#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include <unistd.h>
#define NB_CLIENT 100

// CREATION DE LA STRUCTURE
typedef struct Client Client;
struct Client {
  char CIN[20];
  char nom[20];
  char prenom[20];
  float montant;
};

  // BASE DE DONNEES
Client clients[NB_CLIENT] = {
  {"JB77015", "AGRA", "Abderrahim", 15000},
  {"J509769", "KHAYRO", "ADNAN", 20000},
};
int size = 2;

// ####### LES FONCTIONS #######
void introduireUnCompte();
void introduirePlusieursComptes();
void afficherUnClient(int index);
void operations();
void retrait();
void depot();
int recherche(char* cin);
void affichage();
void rechercherParCIN();
// ############################

int main() {

  int choix;
  do
  {
    system("cls");
    printf("\n______________________________________________________________");
    printf("\n______________________YOU BANC _______________________________\n");
    printf("\n##########   Merci de determiner votre choix ?   ##########\n\n");
    printf("-> Tapez 1 pour Introduire un compte bancaire\n");
    printf("-> Tapez 2 Pour Introduire plusieurs comptes bancaires \n");
    printf("-> Tapez 3 Pour les Operations\n");
    printf("-> Tapez 4 Pour Afficher tous les client\n");
    printf("-> Tapez 5 Pour la Fidelisation\n");
    printf("-> Tapez 6 Pour Quitter\n\n");
    printf("======> Votre chois : ");
    scanf("%d",&choix);

    switch (choix)
    {
      case 1:
        introduireUnCompte();
        break;
      case 2:
        introduirePlusieursComptes();
        break;
      case 3:
        operations();
        break;
      case 4:
        affichage();
        break;
      case 5:
        printf("Cette operation n'est pas disponible pour le moment");
        break;
      case 6:
        exit(0);
        break;
      default:
        printf(" votre choix n'est pas valide. merci de refaire votre choix ");
        break;
    }
  } while (choix < 1 || choix > 6 );

  return 0;
}

/************************* Introduire un compte bancaire ***************************/
void introduireUnCompte() {
  size++;
  system("cls");
  printf("\n##########   Introduire un compte bancaire (CIN, Nom et Prenom, Montant)   ##########\n\n");
  printf("Entrez le CIN : ");
  scanf("%s", clients[size].CIN);

  printf("Entrez le nom : ");
  scanf("%s", clients[size].nom);

  printf("Entrez le prenom : ");
  scanf("%s", clients[size].prenom);

  printf("Entrez le montant : ");
  scanf("%f", &clients[size].montant);

  int choix;
  do {
    system("cls");
    printf("\n##########  Votre operation est bien traiter   ##########\n\n");
    afficherUnClient(size);
    printf("\n-> Tapez 1 Pour retourner au menu principale");
    printf("\n-> Tapez 2 Pour quitter\n");
    printf("\n=====>Votre choix : ");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1 : main(); break;
        case 2 : exit(0); break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
    } while (choix < 1 || choix > 2 );
}


/************************* Introduire plusieurs comptes bancaires ***************************/
void introduirePlusieursComptes() {
  int nbClient;
  int choix;
  system("cls");
  printf("\n##########   Introduire plusieurs comptes bancaires (CIN, Nom et Prenom, Montant)   ##########\n\n");
  printf("=> Merci de saisir le nb client : ");
  scanf("%d", &nbClient);

  for (int i = 0; i < nbClient; i++)
  {
    size++;
    system("cls");
    printf("\n##########   Introduire le compte bancaire %d (CIN, Nom et Prenom, Montant)   ##########\n\n", i+1);
    printf("Entrez le CIN : ");
    scanf("%s", clients[size].CIN);

    printf("Entrez le nom : ");
    scanf("%s", clients[size].nom);

    printf("Entrez le prenom : ");
    scanf("%s", clients[size].prenom);

    printf("Entrez le montant : ");
    scanf("%f", &clients[size].montant);
  }
  system("cls");
  printf("\n##########  Votre operation est bien traiter   ##########\n\n");
  for (int i = size - nbClient +1; i < size + 1; i++)
  {
    afficherUnClient(i);
  }

  do {
    printf("\n-> Tapez 1 Pour retourner au menu principale");
    printf("\n-> Tapez 2 Pour quitter\n");
    printf("\n=====>Votre choix : ");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1 : main(); break;
        case 2 : exit(0); break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
  } while (choix < 1 || choix > 2 );
}

/************************* Afficher un client ***************************/
void afficherUnClient(int index) {
  printf("\t- M./Mme %s %s (%s) :  %.2f MAD\n",clients[index].nom,clients[index].prenom, clients[index].CIN, clients[index].montant);
}

/************************* Operations ***************************/
void operations() {
  int choix;
  system("cls");
  do {
    printf("\n##########   Merci de choisir votre operation   ##########\n");
    printf("\n-> Tapez 1 Pour retrait de l'argent");
    printf("\n-> Tapez 2 Pour depôt de l'argent\n");
    printf("\n=====>Votre choix : ");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1 :retrait(); break;
        case 2 : depot(); break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
  } while (choix < 1 || choix > 2 );
}

/************************* Retrait de l'argent ***************************/
void retrait() {
  int montant;
  char cin[20];
  int choix;
  system("cls");
  printf("\n##########   Retrait de l'argent   ##########\n\n");
  printf("=> Merci de saisir le CIN : ");
  scanf("%s", cin);
  int i = recherche(cin);
  if(i == -1) {
    printf(" le client '%s' n'existe pas ", cin);
    retrait();
  }
  printf("=> Merci de saisir le montant a retrait : ");
  scanf("%d", &montant);

  if(clients[i].montant >= montant) {
    clients[i].montant -= montant;

    system("cls");
    printf("##########  Votre operation est bien ete traiter. Il reste %.2f MAD  ##########\n", clients[i].montant);
    do {
      printf("\n-> Tapez 1 Pour retourner au menu principale");
      printf("\n-> Tapez 2 Pour quitter\n");
      printf("\n=====>Votre choix : ");
      scanf("%d",&choix);
    switch(choix)
    {
        case 1 : main(); break;
        case 2 : exit(0); break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
  } while (choix < 1 || choix > 2 );
  } else {
    printf(" Votre solde est insufisant \n");
    sleep(5);
    main();
  }
}


/************************* depot de l'argent ***************************/
void depot() {
  int montant;
  char cin[20];
  int choix;
  system("cls");
  printf("\n##########   Depot de l'argent   ##########\n\n");
  printf("=> Merci de saisir le CIN : ");
  scanf("%s", cin);
  int i = recherche(cin);
  if(i == -1) {
    printf(" le client '%s' n'existe pas ", cin);
    depot();
  }
  printf("=> Merci de saisir le montant a verser : ");
  scanf("%d", &montant);

  clients[i].montant += montant;

  system("cls");
  printf("##########  Votre operation est bien ete traiter. votre nouvelle solde est  %.2f MAD  ##########\n", clients[i].montant);
  do {
      printf("\n-> Tapez 1 Pour retourner au menu principale");
      printf("\n-> Tapez 2 Pour quitter\n");
      printf("\n=====>Votre choix : ");
      scanf("%d",&choix);
    switch(choix)
    {
        case 1 : main(); break;
        case 2 : exit(0); break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
  } while (choix < 1 || choix > 2 );
}

/************************* rechercher un client par CIN ***************************/
int recherche(char* cin) {
  int i;
  for(i = 0; i <= size; i++) {
    if(strcmp(clients[i].CIN, cin) == 0) {
      return i;
    }
  }
  return -1;
}
/************************* fonction d'affichage ***************************/
void affichage() {
  int choix;
  do {
      system("cls");
      printf("##########  Affichage  ##########\n");
      printf("\n-> Tapez 1 Pour afficher en ordre ascendant");
      printf("\n-> Tapez 2 Pour afficher en ordre descendant");
      printf("\n-> Tapez 3 Pour afficher en ordre ascendant (montant > chiffre introduit)");
      printf("\n-> Tapez 4 Pour afficher en ordre descendant (montant > chiffre introduit)");
      printf("\n-> Tapez 5 Pour Rechercher par CIN\n");
      printf("\n=====>Votre choix : ");
      scanf("%d",&choix);
    switch(choix)
    {
        // case 1 : afficherOnOrdreAscendant(); break;
        // case 2 : afficherOnOrdreDescendant(); break;
        // case 3 : afficherOnOrdreAscendantSup(); break;
        // case 4 : afficherOnOrdreAscendantSup(); break;
        case 5 : rechercherParCIN() ; break;
        default : printf(" votre choix n'est pas valide. merci de refaire votre choix ");
    }
  } while (choix < 1 || choix > 5 );
}

/************************* Recherche Par CIN ***************************/
void rechercherParCIN() {
  char cin[20];
  system("cls");
  printf("\n##########  Recherche par CIN  ##########\n\n");
  printf("=> Merci de saisir le CIN : ");
  scanf("%s", cin);
  int i = recherche(cin);
  if(i == -1) {
    printf("this client not exist");
  } else {
    printf("\n");
    afficherUnClient(i);
    printf("\n");
  }
}
