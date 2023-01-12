#include <city.h>
#include <denizenz.h>
#include <ignorant.h>
#include <alerted.h>
#include <zombie.h>
#include <common_funcs.h>
#include <fstream>

void City::addResidents(Denizen *p)
{
    residents.push_back(p);
}

void City::populate_city()
{
    map<string, int> ignorant_pro;
    map<string, int> alerted_pro;
    map<string, int> default_pro;

    default_pro["null"] = 0;
    get_chances(ignorant_pro, alerted_pro);

    std::ifstream file("names.txt");
    std::string line;

    int count = 0; // Keep track when to change of district

    while (getline(file, line)) // Keep going as long as is not the end of the file
    {
        if (count < 750)
        {
            this->addResidents(new Ignorant(line, "Downtown", ignorant_pro));
        }
        else if (count < 1250)
        {
            this->addResidents(new Ignorant(line, "Burbs", ignorant_pro));
        }
        else if (count < 1650)
        {
            if (count == 1515)
            {
                this->addResidents(new Alerted(line, "University", alerted_pro));
            }
            else
            {
                this->addResidents(new Ignorant(line, "University", ignorant_pro));
            }
        }
        else if (count < 2000)
        {
            if (count == 1758)
            {
                this->addResidents(new Zombie(line, "Medical Hill", default_pro));
            }
            else
            {
                this->addResidents(new Ignorant(line, "Medical Hill", ignorant_pro));
            }
        }
        count++;
    }

    file.close();
}

void City::get_stats(map<string, int> &s)
{
    s["ignorant"] = 0;
    s["alerted"] = 0;
    s["corpse"] = 0;
    s["zombie"] = 0;
    s["downtown"] = 0;
    s["burbs"] = 0;
    s["university"] = 0;
    s["medical"] = 0;

    for (int i = 0; i < residents.size(); i++)
    {
        if (residents[i]->getType() == "Ignorant")
        {
            s["ignorant"]++;
        }
        else if (residents[i]->getType() == "Alerted")
        {
            s["alerted"]++;
        }
        else if (residents[i]->getType() == "Zombie")
        {
            s["zombie"]++;
        }
        else if (residents[i]->getType() == "Corpse")
        {
            s["corpse"]++;
        }

        if (residents[i]->getDistrict() == "Downtown")
        {
            s["downtown"]++;
        }
        else if (residents[i]->getDistrict() == "Burbs")
        {
            s["burbs"]++;
        }
        else if (residents[i]->getDistrict() == "University")
        {
            s["university"]++;
        }
        else if (residents[i]->getDistrict() == "Medical Hill")
        {
            s["medical"]++;
        }
    }
}

void City::residents_move()
{
    for (int i = 0; i < residents.size() / 8; i++)
    {
        int r;
        int n = rand() % 4;
        string district[4] = {"Downtown", "Burbs", "University", "Medical Hill"};
        do
        {
            r = rand() % (residents.size() - 1);
        } while (residents[r]->getDistrict() != district[n]);
    }
}

void City::simulate()
{
    //std::ofstream graph("excel.csv");
    map<string, int> stats;
    char key;
    int r;

    cout << "Welcome to the simulation.\n"
         << "Simville is a city divided in 4 districts:\n"
         << "- Downtown\n"
         << "- Burbs\n"
         << "- University\n"
         << "- Medical Hill\n"
         << "The total population is 2000 people.\n"
         << "On September 27th, 2002 (Day 0), the first case of a rare disease was reported."
         << "Pamela Dudley is the first zombie in the Medical Hill of Simville."
         << "Dr. Clarence Bonilla, in the University district, was reported of what happened and was in charge of letting everyone know about it.\n"
         << "Day 0:\n"
         << "Ignorant: 1998\n"
         << "Alerted: 1\n"
         << "Zombie: 1\n"
         << "Corpse: 0\n"
         << "Input any key to go to the next day;\n";

    cin >> key;

    for (int i = 0; i < 28; i++)
    {

        for (int j = 0; j < residents.size(); j++)
        {
            do
            {
                r = rand() % (residents.size() - 1);
            } while (residents[j]->getDistrict() != residents[r]->getDistrict());

            bool check = residents[j]->encounter(residents[r]);
            if (!check)
            {
                Denizen *a;
                for (int k = 0; k < residents.size(); k++)
                {
                    if (residents[k]->getType() == "Alerted")
                    {
                        a = residents[k];
                        break;
                    }
                }

                a->convert_ignorant(residents[j]);
            }
        }

        get_stats(stats);
        cout << "Day " << i + 1 << ":\n"
             << "Ignorant: " << stats["ignorant"] << "\n"
             << "Alerted: " << stats["alerted"] << "\n"
             << "Zombie: " << stats["zombie"] << "\n"
             << "Corpse: " << stats["corpse"] << "\n"
             << "Input any number to go to the next day;\n";

        // graph << i + 1 << ','
        //       << stats["ignorant"] << ','
        //       << stats["alerted"] << ','
        //       << stats["zombie"] << ','
        //       << stats["corpse"] << '\n';
        cin >> key;
    }
    //graph.close();
}
