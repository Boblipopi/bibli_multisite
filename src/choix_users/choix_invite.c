// Inclusion des en-têtes nécessaires
#include <stdio.h>
#include <stdlib.h>

// Prototypes des fonctions (à définir dans un autre fichier)
#include prototype_invite.h

void choix_admin_bibliotheque(int user_groupe) {
    switch(user_groupe) {
        case 1:
            printf("Lister les livres et leur disponibilité dans les différents sites\n");
            Liste_livres_et_dispo();
            break;

        default:
            printf("Déconnexion\n");
            // Fonction de déconnexion ou autre traitement
            break;
    }
}
