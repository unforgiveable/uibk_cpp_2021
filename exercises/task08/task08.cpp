#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <set>


struct Person
{
    std::string firstname;
    std::string lastname;
    int age;
};

inline bool operator<(const Person& lhs, const Person& rhs)
{
    return (lhs.age == rhs.age) ? ((lhs.lastname == rhs.lastname) ? lhs.firstname < rhs.firstname : lhs.lastname < rhs.lastname ) : lhs.age < rhs.age;
}

inline bool operator>(const Person& lhs, const Person& rhs)
{
    return rhs < lhs;
}

inline bool operator==(const Person& lhs, const Person& rhs)
{
    return (lhs.age == rhs.age && lhs.lastname == rhs.lastname && lhs.firstname == rhs.firstname);
}

inline bool operator!=(const Person& lhs, const Person& rhs)
{
    return !(lhs == rhs);
}

inline bool operator<=(const Person& lhs, const Person& rhs)
{
    return lhs == rhs || lhs < rhs;
}

inline bool operator>=(const Person& lhs, const Person& rhs)
{
    return lhs == rhs || lhs > rhs;
}

std::ostream& operator<<(std::ostream& stream, const Person& p)
{
    return stream << "( " << p.firstname << ", " << p.lastname << ", " << p.age << " )";
}


int main()
{
    Person p1({"fn1", "ln1", 56});
    Person p2({"fn2", "ln2", 87});
    Person p3({"fn3", "ln3", 56});
    Person p4({"fn4", "ln4", 45});
    Person p5({"fn5", "ln5", 45});
    
    std::vector<Person> person_vector{p1, p2, p3, p4, p5};
    std::set<Person> person_set{p1, p2, p3, p4, p5};
    std::map<Person, int> person_map{{p1,0}, {p2,0}, {p3,0}, {p4,0}, {p5,0}};
    
    std::cout << "Vector contents:" << std::endl;
    for (auto elem : person_vector)
        std::cout << elem << ", ";
        
    std::cout << std::endl << "Set contents:" << std::endl;
    for (auto elem : person_set)
        std::cout << elem << ", ";
    
    std::cout << std::endl << "Map contents:" << std::endl;
    for (auto elem : person_map)
        std::cout << "[" << elem.first << ", " << elem.second << "], ";
    
    auto result1 = std::find(person_vector.begin(), person_vector.end(), );
}