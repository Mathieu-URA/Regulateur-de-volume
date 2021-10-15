#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    printf("Bienvenue dans votre programme qui régule le volume de la musique. commençons\n ");

    float decibel = get_float("Simmuler le capteur (decibelmètre). Indiquez les décibels de la pièce ?\n");
    // dans ce cas c'est l'utilisaeur qui rentre la valeur mais en réel c'est un capteur

    float volume = 0;

    string jour = get_string("Sommes nous en weekend ? (oui ou non) \n");
    //On demande si on est en weekend car si oui on pourra mettre plus fort la musique

    float heure = get_float("Quel heure est t'il ? (0.00 / 24.00)\n ");
    //Le volume pourra etre plus ou moins fort en fonction de la plage horraire

    string x = get_string("choisissez le mode de volume que vous souhaitez ? (calme, moyen, fort)\n");
    //on demande a l'utisiteur quel mode de volume souhaite t'il

    volume = decibel; //ici à défault d'avoir un capteur réel on simule le decibelmetre en fonction du volume
    //Alors que normalement les decibels varie en fonction des discusions dans la pieces, des bruits et du volume de la musique.

    if (heure >= 10 && heure <= 17)
    {
        //mode calme
        if (strcmp(x, "calme") == 0) // on compare deux chaine de caractere pour savoir si l'utilisateur a saisi le mode calme
        {
            if (decibel < 45) // si les decibel sont en dessous de 45 alors ..
            {
                while (decibel < 45)
                {
                    decibel = decibel + 1;
                    //ICI etant donné que nous n'avons pas de decibelmetre reel qui varie constament on le fais varier en fonction du volume donc on incrémente les decibels dans la boucle
                    volume = volume + 1; // on augmente le volume de 1 jusqua ce que les decibel ateigne 45

                }
            }
            else //si les decibel sont superieur a 45 on baisse le volume jusqua ce que les decibel atteigne 45.
            {
                while (decibel > 45)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }

        //mode moyen
        if (strcmp(x, "moyen") == 0)
        {
            if (decibel < 70)
            {
                while (decibel < 70)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 70)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
        //mode fort
        if (strcmp(x, "fort") == 0)
        {
            if (decibel < 85)
            {
                while (decibel < 85)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 85)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
    }
    if (heure < 10)
    {
        //mode calme
        if (strcmp(x, "calme") == 0)
        {
            if (decibel < 30)
            {
                while (decibel < 30)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 30)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }

        //mode moyen
        if (strcmp(x, "moyen") == 0)
        {
            if (decibel < 60)
            {
                while (decibel < 60)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 60)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
        //mode fort
        if (strcmp(x, "fort") == 0)
        {
            if (decibel < 70)
            {
                while (decibel < 70)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 70)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
    }
    if (heure > 17)
    {
        //mode calme
        if (strcmp(x, "calme") == 0)
        {
            if (decibel < 55)
            {
                while (decibel < 55)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 55)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }

        //mode moyen
        if (strcmp(x, "moyen") == 0)
        {
            if (decibel < 80)
            {
                while (decibel < 80)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 80)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
        //mode fort
        if (strcmp(x, "fort") == 0)
        {
            if (decibel < 90)
            {
                while (decibel < 90)
                {
                    decibel = decibel + 1;
                    volume = volume + 1;

                }
            }
            else
            {
                while (decibel > 90)
                {
                    decibel = decibel - 1;
                    volume = volume - 1;
                }
            }
        }
    }
    if (strcmp(jour, "non") == 0) // la semaine le volume perd 10%
    {
        volume = volume - 10;
    }
    printf("Le volume de la musique est donc régler à %.0f pour ne pas deranger les voisins.", volume);
    //on imprime le reglage du volume musical

}