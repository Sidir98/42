#include <string.h>
ex 03 et 04
const char *src;
int ft_putchar(char c);

int        ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

int        ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main (void)
{
    char tab[] = "";
    
    const char tab0[50] = "";
    char tab2[50];
    char tab3[50];
    ft_strcpy(tab2, tab);
    strcpy(tab3, tab0);
    ft_putstr(tab2);
    ft_putstr(tab3);
}
//
#include <string.h>
#include <unistd.h>
#include <stdio.h>
char *strstr(const char *meule_de_foin, const char *aiguille);
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int        ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

int main (void)
{
    char tab0[50] = "ta";
    char tab[] = "baltazar";
    char tab2[50] = "ta";
    char tab3[50] = "baltazar";
    char *tab4;
    char *tab5;
    tab4 = ft_strstr(tab3, tab2);
    tab5 = strstr(tab, tab0);
    ft_putstr(tab4);
    printf("%s",tab5);
}
//strcmp
#include <string.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char tab[6] = {1,2,3,4,5,6};
    // char tab2[6] = {1,2,3,4,5,6};
    printf("%i\n",strcmp(tab, tab));
    printf("%i\n",ft_strcmp(tab, tab));
    return 0;
}
//strstr

int main (void)
{
    const char tab0[50] = "";
    char tab[50] = "baltazar2";
    char tab2[] = "";
    char tab3[] = "baltazar1";
    char *tab4;
    char *tab5;
    tab4 = ft_strstr(tab3, tab2);
    tab5 = strstr(tab, tab0);
    printf("%s,", tab4);
    printf("%s", tab5);
}
//strccapitalize
int main(void)
{
    char tab[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n",ft_strcapitalize(tab));
    return 0;
}
// strncmp

#include <string.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main(void)
{
    char tab[6] = {1,2,3,4,5,6};
    char tab2[6] = {1,2,3,4,5,5};
    printf("%i\n",strncmp(tab, tab2, 3));
    printf("%i\n",ft_strncmp(tab, tab2, 3));
    return 0;
}

//strupcase et strlowcase












/15
int main(void)
{
    char tab[] = "sad";
    printf("%i\n",ft_str_is_printable(tab));
    return 0;
}



//strcat
#include <string.h>

#include <string.h>


int main(void)
{
    char tab[] = "";
    printf("%i\n",ft_str_is_alpha(tab));
    return 0;
}

strncat
int main (void)
{
    const char tab0[5] = "alors";
    char tab[] = "baltazar2";
    char tab2[] = "alors";
    char tab3[] = "baltazar1";
    char *tab4;
    char *tab5;
    tab4 = ft_strncat(tab3, tab2,2);
    tab5 = strncat(tab, tab0,2);
    printf("%s,", tab4);
    printf("%s", tab5);
}




