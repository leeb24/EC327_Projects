#ifndef MODEL_H
#define MODEL_H
#include "Cart_Point.h"
#include "Cart_Vector.h"
#include "Game_Object.h"
#include "Gold_Mine.h"
#include "Town_Hall.h"
#include "Person.h"
#include "Miner.h"
#include "View.h"

using namespace std;

class Model
{
public:
	
	Model();
	
	~Model();

	Person* get_Person_ptr(int);

	Gold_Mine* get_Gold_Mine_ptr(int);

	Town_Hall* get_Town_Hall_ptr(int);

	bool update();
	

	void display(View &);

	void show_status();

private:
	Model( const Model&);

	int time;

	Game_Object* object_ptrs[10];

	int num_objects;

	Person* person_ptrs[10];

	int num_persons;

	Gold_Mine* mine_ptrs[10];

	int num_mines;

	Town_Hall* hall_ptrs[10];

	int num_halls;


	
};

#endif
