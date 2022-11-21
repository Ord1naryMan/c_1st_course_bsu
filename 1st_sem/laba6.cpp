#include<bits/stdc++.h>
using namespace std;



struct Student{
    string name;
    int age;
    int course;
    bool operator <(const Student& x) const{
        return age < x.age;
    }
};


void input(vector<Student> &a){
    cout << "Enter how many Students: ";
    Student stud;
    cin >> a.size();
    for(int i=0;i<a.size();i++){
        cout << "Enter Name and Surname: ";
        cin.ignore();
        getline(cin, stud.name);
        cout << "Enter his age: ";
        cin >> stud.age;
        cout << "Enter his course: ";
        cin >> stud.course;
        cout << "\n";
        a.push_back(stud);
    }
}

void output(vector<Student> &a){
    cout << "-----------------------------------";
    for(auto& stud : a){
        cout << "Name and Surename: " << stud.name << "\n";
        cout << "Age: " << stud.age << "\n";
        cout << "Course: " << stud.course << "\n\n";
    }
}



void eldest(vector<Student> &a, int course){
    sort(a.begin(), a.end());
    for(int i=a.size()-1;i >= 0;i--){
        if(a[i].course == course){
            cout << "Eldest on the " << course << " course is " << a[i].name;
            return;
        
        }
        }
        cout << "null";
        
    
    
}


int main(){
    int n;
    vector<Student> a;
    input(a);
    cout << "What course do we check?:";
    cin >> n;
    eldest(a, n);
    return 0;
}
