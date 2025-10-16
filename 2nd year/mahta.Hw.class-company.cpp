#include <iostream>
#include <vector>

class employee {
    protected:
        std::string name;
        double salary;
    public:
        employee(std::string name, double salary) : name(name), salary(salary) {
            if (salary < 0){
                throw std::string("Salary cannot be negative");
            }
        }
        virtual void work() = 0;
        std::string getName() const { return name; }
        virtual ~employee() {}
};
class manager : public employee {
    public:
        manager(std::string name, double salary) : employee(name, salary) {}
        void work() override {
            std::cout << name << " is managing the team." << std::endl;
        }
};
class developer : public employee {
    public:
        developer(std::string name, double salary) : employee(name, salary) {}
        void work() override {
            std::cout << name << " is writing code." << std::endl;
        }
};
class intern : public employee {
    public:
        intern(std::string name, double salary) : employee(name, salary) {}
        void work() override {
            std::cout << name << " is learning and assisting with tasks." << std::endl;
        }
};
class company{
    private:
        std::vector<employee*> employees;
    public:
        void addEmployee(employee* emp) {
            employees.push_back(emp);
        }
        void showEmployees() {
            for (const auto& emp : employees) {
                emp->work();
            }
        }
        void fireAll() {
              for (auto& emp : employees) {
                delete emp;
            }
            employees.clear();
        }
        ~company() {
          fireAll();
        }
};

int main() {
  
    try
    {
       manager m1("Alice", 90000);
       developer d1("Bob", 80000);
       intern i1("Charlie", 30000);
       company myCompany;
       myCompany.addEmployee(&m1);
       myCompany.addEmployee(&d1);
       myCompany.addEmployee(&i1);
       myCompany.showEmployees();
       myCompany.fireAll(); 
    }
    catch(const std::string& erorr)
    {
        std::cout << erorr << '\n';
    }
    
    return 0;
}