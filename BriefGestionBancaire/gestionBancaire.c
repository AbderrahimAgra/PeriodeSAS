#include <stdio.h>
#include <stdlib.h>
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
Client clients[NB_CLIENT];
int size = -1;

// ####### LES FONCTIONS #######
void introduireUnCompte();
void afficherUnClient(int index);
// ############################

int main() {

  int choix;
  do
  {
    system("cls");
    printf("\n##########   Merci de determiner votre choix ?   ##########\n\n");
    printf("-> Tapez 1 pour Introduire un compte bancaire\n");
    printf("-> Tapez 2 Pour Introduire plusieurs comptes bancaires \n");
    printf("-> Tapez 3 Pour les Opérations\n");
    printf("-> Tapez 4 Pour Afficher tous les client\n");
    printf("-> Tapez 5 Pour la Fidélisation\n");
    printf("-> Tapez 6 Pour Quitter\n\n");
    printf("======> Votre chois : ");
    scanf("%d",&choix);

    switch (choix)
    {
      case 1:
        introduireUnCompte();
        break;
      case 2:
        printf("2");
        break;
      case 3:
        printf("3");
        break;
      case 4:
        printf("4");
        break;
      case 5:
        printf("5");
        break;
      case 6:
        exit(0);
        break;
      default:
        printf("💥 votre choix n'est pas valide. merci de refaire votre choix 💥");
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
        default : printf("💥 votre choix n'est pas valide. merci de refaire votre choix 💥");
    }
    } while (choix < 1 || choix > 2 );
}


void afficherUnClient(int index) {
  printf("\t- M./Mme %s %s (%s) :  %.2f MAD\n",clients[index].nom,clients[index].prenom, clients[index].CIN, clients[index].montant);
}