#include <stdio.h>
#include <string.h>
#include <string>

//Constante

#define TAILLE 255

//structure

typedef struct Ddn  // structure pour la date de naissance
{
	int n_jour; // jour de naissance
	int n_mois; // mois de naissance
	int n_annee; // année e naissance
}Ddn;

typedef struct Adresse // structure pour le lieu d'habitation
{
	char* str_rue; // nom de la rue
	char* str_cp; // nom du code postale
	char* str_ville; // nom de la ville
}Adresse;


typedef enum class Civ { M, F }; // énumeration pour la civilité

typedef struct Cid // structure pour la carte d'identité 
{
	int n_id; // numéro de la carte d'identité
	Civ E_civ; // nom de la civilité
	char* str_nom; // nom de la personne
	char* str_prenom; // prenom de la personne
	Ddn* S_ddn; // sate de naissance
	Adresse* S_ads; // adresse de la personne
}Cid;

//déclaration de fonction
void affichage(Adresse*, Cid*);

int main()
{
	// déclaration de variable
	Cid carte;
	Adresse maison;
	Ddn naiss;

	// on alloue tout les pointeur à la mémoire RAM pour la structure Adresse

	maison.str_rue = (char*)malloc(TAILLE * sizeof(char)); // on alloue str_rue dans la mémoire RAM
	maison.str_cp = (char*)malloc(TAILLE * sizeof(char)); // on alloue str_cp dans la mémoir RAM
	maison.str_ville = (char*)malloc(TAILLE * sizeof(char)); // on alloue str_ville dans la mémoire RAM


	

	maison.str_rue = nullptr; // le pointeur est NULL
	maison.str_cp = nullptr;  // le pointeur est NULL
	maison.str_ville = nullptr;  // le pointeur est NULL

	// on alloue tout les pointeur à la mémoire RAM pour la structure Ddn
	Ddn* p_nee = &naiss;

	p_nee = nullptr;
	p_nee = (Ddn*)malloc(sizeof(Ddn));




	// on alloue tout les pointeur à la mémoire RAM pour la structure Cid
	Cid* p_id = &carte;

	p_id = nullptr;

	p_id = (Cid*)malloc(sizeof(Cid));
	carte.str_nom = (char*)malloc(sizeof(char));
	carte.str_prenom = (char*)malloc(sizeof(char));

	affichage(maison, carte);

	return 0;
}

/**********************************************
* 
* BUT: afficher la carte d'identité
* 
* ENTREE :
* 
* SORTIE :
* 
* DESCRIPTION : 
* 
***********************************************/
void affichage(Adresse* maison, Cid* p_id)
{
	for (int i = 0; i < 1; i++)
	{
		printf_s("saisir le nom\n");
		scanf_s("%c", p_id->str_nom);
		printf_s("saisir le prénom\n");
		scanf_s("%c", p_id->str_prenom);
		printf_s("saisir la rue\n");
		scanf_s("%c", maison->str_rue);
		printf_s("saisir la ville\n");
		scanf_s("%c", maison->str_ville);
		printf_s("saisir le code postale\n");
		scanf_s("%c", maison->str_cp);
		fflush(stdin);
		for (int j = 0; j < 1; j++)
		{
			printf_s("nom: %c", p_id->str_nom);
			printf_s("prenom: %c", p_id->str_prenom);
			printf_s("rue: %c", maison->str_rue);
			printf_s("ville: %c", maison->str_ville);
			printf_s("code postale:  %c", maison->str_cp);
		}
	}
}