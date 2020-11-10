#include <stdio.h>
#include <string.h>

//go,time,world,work,find,know,take,see,come,want











int main()
{
    char word_have_to_find[100];

    printf("                 *** D  I  C  T  I  O  N  A  R  Y ***                       ");
    printf("\t\t\t\t\t-by Shahriar Shafin\n\n");

    printf(" What word do you want to look up?\n\n");

    printf("\t\t\t");

    scanf(" %s",word_have_to_find);

    printf("                   [-------------]\n");


    if (strcmp(word_have_to_find, "go") == 0)
    {
        printf(" (verb)\n to move or proceed, especially to or from something\n\n\n");
    }

    else if (strcmp(word_have_to_find, "time") == 0)
    {
        printf(" (noun)\n the system of those sequential relations that any event has to any other,as past, present, or future,\n"
               " indefinite and continuous duration regarded as that in which events succeed one another\n\n\n");
    }


    else if (strcmp(word_have_to_find, "world") == 0)
    {
        printf(" (noun)\n the earth or globe, considered as a planet.\n\n\n");
    }


    else if (strcmp(word_have_to_find, "work") == 0)
    {
        printf(" (noun)\n exertion or effort directed to produce or accomplish something; labor; toil.\n\n\n");
    }


    else if (strcmp(word_have_to_find, "find") == 0)
    {
        printf(" (verb)\n to locate, attain, or obtain by search or effort\n\n\n");
    }


    else if (strcmp(word_have_to_find, "know") == 0)
    {
        printf(" (verb)\n to have established or fixed in the mind or memory.\n\n\n");
    }


    else if (strcmp(word_have_to_find, "take") == 0)
    {
        printf(" (verb)\n to hold, grasp, or grip.\n\n\n");
    }


    else if (strcmp(word_have_to_find, "see") == 0)
    {
        printf(" (verb)\n to perceive with the eyes; look at.\n\n\n");
    }


    else if (strcmp(word_have_to_find, "come") == 0)
    {
        printf(" (verb)\n to approach or move toward a particular person or place.\n\n\n");
    }



    else if (strcmp(word_have_to_find, "want") == 0)
    {
        printf(" (verb)\n to feel a need or a desire for; wish for.\n\n\n");
    }




    else
    {
        printf("          No definitions found for this word\n\n\n");
    }

    return 0;
}
