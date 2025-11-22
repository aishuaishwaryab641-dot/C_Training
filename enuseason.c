#include <stdio.h>
enum month
{
    Jan =1,
    Feb,March,April,May,June,July,Aug,Sep,Oct,Nov,Dec
};
void main()
{
    enum month m;
    m = May;
    char *season;
    switch(m)
    {
        case Dec: case Jan: case Feb:
        season = "Winter"; break;
        case March: case April: case May:
        season = "Summer"; break;
        case June: case July: case Aug:
        season = "Rainy"; break;
        case Sep: case Oct: case Nov:
        season = "Spring"; break;
    }
    printf("%d is a month of %s\n",m,season);
}