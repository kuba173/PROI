#include <iostream>
#include "p_DATA.h"
#include <limits>

int main()
{
    int day;
    int year;
    bool idio = false;
    int m_int;
    
    DATA my_data(day, m_int,year);

    while (true)
    {
    
    if(idio)
    {
    std::cout << "Enter day: ";
    std::cin >> day;
    
    std::cout << "Enter month: ";
    std::cin >> m_int;

    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter day: ";
    }
    else
    {  
    
    std::cout << "Enter day: ";
    while (!(std::cin >> day))
        {
         std::cout << "Invalid input. Please enter an int value for day: ";
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    std::cout << "day = " << day << std::endl;

    std::cout << "Enter month: ";
    while (!(std::cin >> m_int))
        {
        std::cout << "Invalid input. Please enter an int value for month: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    std::cout << "month = " << m_int << std::endl;

    std::cout << "Enter year: ";
    while (!(std::cin >> year))
        {
        std::cout << "Invalid input. Please enter an int value for year: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    std::cout << "year = " << year << std::endl;
        
    }
    my_data.set_day(day);
    my_data.set_month(m_int);
    my_data.set_year(year);
   
   if (my_data.valid_date())
{
    std::cout << "DATA: " << my_data.get_day() << "." << my_data.get_month_name() << "." << my_data.get_year() << std::endl;

}
else
{
    std::cout << "Error date " << my_data.get_day() << "." << my_data.get_month_name() << "." << my_data.get_year() << std::endl;
}
    }

    return 0;
}