#pragma once
#include <vector>
#include <string>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;


class Nurse {
    private:
        vector<string> nurses = {"Emma", "Liam", "Olivia", "Noah", "Ava", "Isabella", "Sophia", "Jackson", "Lucas", "Aiden", "Mia", "Elijah", "Grayson", "Caden", "Oliver", "Scarlett", "Charlotte", "Abigail", "Amelia", "Evelyn", "Harper", "Mason", "Ella", "Avery", "Lily", "Ezra", "Benjamin", "Henry", "Caleb", "James", "Levi", "Mateo", "Isaac", "Sebastian", "Wyatt", "Gabriel", "Jack", "Julian", "Owen", "Lincoln", "Daniel", "Luke", "William", "Muhammad", "Emily", "Alexander", "Sofia", "Madison", "Aria", "Grace", "Aubrey", "Chloe", "Camila", "Zoe", "Penelope", "Riley", "Layla", "Lillian", "Nora", "Scarlet", "Victoria", "Mila", "Aaliyah", "Hannah", "Bella", "Gianna", "Zoey", "Aria", "Stella", "Savannah", "Elena", "Maya", "Nevaeh", "Paisley", "Eleanor", "Ainsley", "Naomi", "Aurora", "Lydia", "Claire", "Hazel", "Violet", "Lucy", "Audrey", "Elizabeth", "Ellie", "Skylar", "Natalie", "Nova", "Emilia", "Leah", "Alice", "Samantha", "Alyssa", "Lila", "Charlie", "Aiden", "Madison", "Mia", "Chloe", "Oliver", "Amelia", "Evelyn", "Avery", "Sofia", "Lucas", "Liam", "Harper", "Ella", "Mila", "Jackson", "Aria", "Abigail", "Luna", "Scarlett", "Grace", "Eva", "Isabella", "Aria", "Ava", "Olivia", "Amelia", "Sophia", "Ella", "Mia", "Emily", "Isabella", "Abigail", "Harper", "Evelyn", "Amelia", "Elizabeth", "Sofia", "Ella", "Madison", "Scarlett", "Aria", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Skylar", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis", "Luna", "Emilia", "Mila", "Aaliyah", "Lyla", "Kinsley", "Maya", "Sophie", "Aria", "Lily", "Zoe", "Chloe", "Grace", "Sophia", "Emily", "Emma", "Hannah", "Ava", "Olivia", "Mia", "Abigail", "Ella", "Madison", "Avery", "Scarlett", "Lily", "Sofia", "Aria", "Grace", "Chloe", "Eleanor", "Hazel", "Violet", "Zoey", "Nora", "Luna", "Layla", "Stella", "Aurora", "Mila", "Emma", "Olivia", "Ava", "Isabella", "Sophia", "Mia", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Ella", "Elizabeth", "Camila", "Luna", "Sofia", "Avery", "Mila", "Aria", "Scarlett", "Penelope", "Layla", "Chloe", "Grace", "Zoey", "Nora", "Eleanor", "Hazel", "Violet", "Aurora", "Lily", "Bella", "Stella", "Everly", "Leah", "Genesis", "Savannah", "Aubrey", "Brooklyn", "Claire", "Lila", "Liam", "Noah", "Elijah", "Oliver", "Lucas", "Mason", "Logan", "Aiden", "Jackson", "Caden", "Mateo", "Grayson", "Leo", "Alexander", "Caleb", "Daniel", "Jack", "Matthew", "Sebastian", "David", "Benjamin", "Joseph", "Henry", "Julian", "Wyatt", "Gabriel", "Ryan", "Luke", "Andrew", "Christian", "Landon", "Owen", "Jonathan", "Isaac", "Nicholas", "Ezra", "Lincoln", "Anthony", "Hudson", "Dylan", "Eli", "Levi", "Christopher", "Jaxon", "Asher", "Mateo", "Isaiah", "Thomas", "Charles", "Josiah", "Cooper", "Gavin", "Jordan", "Tyler", "Elias", "Colton", "Parker", "Ian", "Brandon", "Jaxson", "Roman", "Austin", "Evan", "Sawyer", "Jordan", "Alexis", "Dakota", "Peyton", "Quinn", "Reagan", "Taylor", "Morgan", "Alex", "Logan", "Charlie", "Jordan", "Taylor", "Alex", "Avery", "Morgan", "Taylor", "Alexis", "Riley", "Jamie", "Jordan", "Taylor", "Peyton", "Jordan", "Reese", "Alexis", "Avery", "Morgan", "Riley", "Quinn", "Jordan", "Taylor", "Alexis", "Riley", "Avery", "Jordan", "Taylor", "Morgan", "Quinn", "Avery", "Jordan", "Riley", "Taylor", "Morgan", "Alex", "Jordan", "Taylor", "Avery", "Riley", "Alexis", "Morgan", "Quinn", "Jordan", "Taylor", "Alex", "Riley", "Avery", "Morgan", "Jordan", "Taylor", "Alexis", "Quinn", "Riley", "Morgan", "Avery", "Taylor", "Jordan", "Alex", "Riley", "Quinn", "Avery", "Taylor", "Jordan", "Alexis"};
    public:
        string getName();
        vector<string> getNames(int num);
        void print(vector<string> names);
};

string Nurse::getName() {
    return nurses[rand()%nurses.size()] + " " + (char) (rand()%26 + 'A') + ".";
}

vector<string> Nurse::getNames(int num) {
    vector<string> result;
    for (int i=0; i<num; i++)
    {
        result.push_back(getName());
    }
    return result;
}

void Nurse::print(vector<string> names) {
    for (string i : names) {
        cout << i << ", ";
    }
    cout << endl;
}