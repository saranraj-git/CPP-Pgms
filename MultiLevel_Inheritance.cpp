#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
      string Name,Address,ug_degree;
      int Age;
      void setName(string userinputName){ Name = userinputName;  }
      string getName(){ return Name; }

      void setAddress(string userinputAddress){ Address = userinputAddress;}
      string getAddress(){ return Address; }

      void set_ugdegree(string userug_degree){ ug_degree = userug_degree;}
      string get_ugdegree(){ return ug_degree; }

      void setAge(int userinputAge){ Age = userinputAge;}
      int getAge(){ return Age;  }
};
class postgraduate : public Student
{
    public:
      string pg_degree;
      int no_of_conf_attend;

      void setpg_degree(string userpgdegree){ pg_degree = userpgdegree; }
      string getpg_degree(){ return pg_degree; }

      void setconf(int userinputconf){ no_of_conf_attend = userinputconf;}
      int getconf(){ return no_of_conf_attend;  }
};
class doctralstudent : public postgraduate
{
    public:
      string ph_area;
      string thesis;

      void setph_area(string userph_area){ ph_area = userph_area; }
      string getph_area(){ return ph_area; }

      void setthesis(string userthesis){ thesis = userthesis; }
      string getthesis(){ return thesis; }
};
int main()
{
    string inputName,inputpgdegree,inputthesis;
    doctralstudent doctobject;

    cout<<"I have created a GrandChild Object called doctobject"<< endl;

    cout<<"Enter the name of the student : "<< endl;
    cin>>inputName;
    doctobject.setName(inputName);

    cout<<"Enter the pg_degree : "<< endl;
    cin>>inputpgdegree;
    doctobject.setpg_degree(inputpgdegree);

    cout<<"Enter the thesis : "<< endl;
    cin>>inputthesis;
    doctobject.setthesis(inputthesis);

    cout<<"Student "+ doctobject.getName()+" completed pg_degree in "+ doctobject.getpg_degree() + " along with thesis topic " + doctobject.getthesis();
}
