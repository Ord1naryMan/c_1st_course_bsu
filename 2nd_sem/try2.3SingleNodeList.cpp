#include<bits/stdc++.h>
using namespace std;

struct Date{
	short month = 1;
	short day = 1;
	int year = 1999;
};

struct Node{
	string name = "";
	Date date;
	short course = 1;
	short marks = 0;
	Node *next = nullptr;
};


Node* node_create(){
	Node* new_node = new Node{};
	cout << "Enter name: ";
	cin >> new_node->name;
	if(new_node->name == "q")
		return new_node;
	cout << "Enter birthday date:(format: dd mm yyyy) ";
	cin >> new_node->date.day >> new_node->date.month >> new_node->date.year;
	cout << "Enter course: ";
	cin >> new_node->course;
	cout << "Enter Average marks: ";
	cin >> new_node->marks;
	cout << "Generating list...\n";
	return new_node;
}


void list_add(Node*& head, Node* new_node){
    // head
    if(!head || new_node->name < head->name){
	    new_node->next = head;
	    head = new_node;
	    return;
    }

    // second
    if(!head->next){
	    head->next = new_node;
	    return;
    }

    //iterating
    auto* it = head->next;
    auto* it_prev = head;
    bool found = false;
    while(it->next){
	    if(it->name > new_node->name){
		    new_node->next = it;
		    it_prev->next = new_node;
		    found = true;
		    break;
	    }
	    it_prev = it;
	    it = it->next;
    }
    if(!found){
       it->next = new_node;
    }
}


void list_delete(Node* head){
	auto* it = head;
	while(it){
		auto* temp = it;
		it = it->next;
		delete temp;
	}
}

void list_print(Node* head){
	auto* it = head;
	while(it){
		cout << it->name << endl;
		it = it->next;
	}
}

Node* node_delete(Node* &head, Node* to_delete){
	auto* it = head;
	if(it == to_delete){
	    auto* tmp = head;
	    head = head->next;
	    tmp->next = nullptr;
	    return head;
	}

	while(it->next){
		if(it->next == to_delete){
			it->next = to_delete->next;
			to_delete->next = nullptr;
			return it->next;
		}
		it = it->next;
	}

	return to_delete->next;
}

int main (){
	cout << "To get an answer type \"q\" in  name field\n";
	Node* head = nullptr;
	int full_sum = 0;
	int amount = 0;

	while(true){
		auto* new_node = node_create();
		if(new_node->name == "q"){
			delete new_node;
			break;
		}

		//counting average marks
		amount++;
		full_sum+=new_node->marks;

        list_add(head, new_node);
    }

	{
        int avg = ceil(full_sum/amount);
        cout << "Avg: " << avg << endl;

	    Node* headans = nullptr;

	    auto* it = head;
	    while(it){
	        if(it->marks >= avg){
	            list_add(headans, it);
	            it = node_delete(head, it);
            }
            else
                it = it->next;
	    }
	    list_print(headans);

        list_delete(headans);
	}


	//delete
	list_delete(head);

	return 0;
}

