#include "p_DATA.h"
#include <string>
enum month {january=1,february,march,april,may,june,july,august,september,october,november,december};
const std::string DATA::month_names[] = {
    "january",
    "february",
    "march",
    "april",
    "may",
    "june",
    "july",
    "august",
    "september",
    "october",
    "november",
    "december"
};
DATA::DATA(int first, int second, int third) : day(first), m_int(second), year(third) {}
//get
int DATA::get_day()
{
    return day;
}

int DATA::get_month()
{
    return m_int;
}
std::string DATA::get_month_name() {
    if (m_int < 1 || m_int > 12) 
    {
        return "Invalid month";
    }
    return month_names[m_int-1]; 
}

int DATA::get_year()
{
    return year;
}
//set

void DATA::set_day(int value)
{
    day = value;
}

void DATA::set_month(int value)
{
    m_int = value;
}

void DATA::set_year(int value)
{
    year = value;
}

bool DATA::valid_date()
{
    if (day >= 1 && day <= 31 && year >= 0 && m_int >= 1 && m_int <= 12)
    {
        if (m_int == april || m_int == june || m_int == september || m_int == november)
        {
            return day <= 30;
        }
        else if (m_int == february)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                return day <= 29;
            }
            else
            {
                return day <= 28;
            }
        }
        else
        {
            return true;
        }

    }
    else
    {
        return false;
    }
}
