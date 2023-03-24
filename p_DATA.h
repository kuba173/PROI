#pragma once
#include <string>
class DATA
{
    private:
        int day;
        int m_int;
        int year;
        static const std::string month_names[];


    public:
        DATA(int first, int second,int third);
        
        int get_day();
        int get_month();
        int get_year();

        std::string get_month_name();
        void set_day(int value);
        void set_month(int value);
        void set_year(int value);

        bool valid_date();



};