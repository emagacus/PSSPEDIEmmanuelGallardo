#include "LocalDate.h"
using namespace std;

LocalDate::LocalDate()
{
    // get time now
    time_t t = time(0);
    struct tm * now = localtime( & t );
    anio=now->tm_year + 1900;
    mes=now->tm_mon + 1;
    dia=now->tm_mday;
    //ctor
    }

std::string LocalDate::ToString()
{

 return to_string(dia)+" "+to_string(mes)+" "+to_string(anio);

}

LocalDate::~LocalDate()
{
    //dtor
}
