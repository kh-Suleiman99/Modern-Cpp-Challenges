// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };


    std::cout << std::setfill('*') << std::setw(16) 
              << ""<< tours.title
              << std::setw(16) << "" 
              << std::endl;
    std::cout << std::setw(61) << "" << std::endl <<std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::left << std::setw(15) << "-Country"
    << std::left << std::setw(20) << "-City"
    << std::left << std::setw(20) << "-population"
    << std::right << std::setw(6) << "-Cost" << std::endl
    /*<< std::setfill('*') << std::setw(61) << "" */;
    
    std::cout << std::setfill(' ');
    for(auto &country : tours.countries) {   // loop through the countries
        std::cout << std::left << std::setw(61) 
                  << std::setfill('-') 
                  << country.name << std::endl;
        std::cout << std::setfill(' ');          
        for(auto &city : country.cities) {       // loop through the cities for each country
            std::cout << std::left << std::setw(15) <<  "" ;
            std::cout << std::left << std::setw(20) << city.name 
                          << std::right << std::setw(11) << city.population 
                          << std::right << std::setw(15) 
                          << std::setprecision(2) <<std::fixed << city.cost 
                          << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}