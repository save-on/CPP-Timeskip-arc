#include <iostream>
#include <string>

class People {
    private:
        inline static int _personCount{};

    public:
        std::string name{};
        int age{};

        void getName() {
            _personCount++;
            std::cout << "Enter the name of the person #" << _personCount
                      << ": ";
            std::getline(std::cin >> std::ws, name);
        }

        void getAge() {
            std::cout << "Enter the age of " << name << ": ";
            int userInput{};
            std::cin >> userInput;
            age = userInput;
        }
};

void peopleAgeComparator(People person1, People person2) {
    int ageDifference{};
    if (person1.age > person2.age) {
        ageDifference = person1.age - person2.age;
        std::cout << person1.name << "(age " << person1.age
                  << ") is older than " << person2.name << "(age "
                  << person2.age << ") by " << ageDifference << " years\n";
    } else if (person2.age > person1.age) {
        ageDifference = person2.age - person1.age;
        std::cout << person2.name << "(age " << person2.age
                  << ") is older than " << person1.name << "(age "
                  << person1.age << ") by " << ageDifference << " years\n";
    } else if (person1.age < 0 || person2.age < 0) {
        std::cout << "Has one of these individuals yet to be born?\n";
    } else {
        ageDifference = person1.age;
        std::cout << "Both individuals are " << ageDifference
                  << " years old!\n";
    }
}

int main() {
    People person1;
    People person2;

    person1.getName();
    person1.getAge();

    person2.getName();
    person2.getAge();

    peopleAgeComparator(person1, person2);

    return 0;
}
