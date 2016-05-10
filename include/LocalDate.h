#ifndef LOCALDATE_H
#define LOCALDATE_H

#include<ctime>
#include<string>


class LocalDate
{
    public:
        LocalDate();
        std::string ToString();
        virtual ~LocalDate();
    protected:
    private:
        int dia,mes,anio;

};


#endif // LOCALDATE_H
