#include "Cart_Point.h"
#include "Cart_Vector.h"
#include "Game_Object.h"
#include "Gold_Mine.h"
#include "Town_Hall.h"
#include "Person.h"
#include "Miner.h"
#include "Model.h"
#include "View.h"
#include <iostream>

using namespace std;

Model::Model()
{
	time = 0;

	Cart_Point p1(5, 1); //initial position for Miner1

	Miner* miner1pointer;
	
	miner1pointer = new Miner(1, p1); //creates Miner1 in the heap at certain position.

	object_ptrs[0] = miner1pointer; // stores pointer in object array and person array
	person_ptrs[0] = miner1pointer; //same thing for all objects below

	Cart_Point p2(10, 1);

	Miner* miner2pointer;

	miner2pointer = new Miner(2, p2);

	object_ptrs[1] = miner2pointer;
	person_ptrs[1] = miner2pointer;

	Cart_Point p3(1, 20);

	Gold_Mine* goldmine1ptr;

	goldmine1ptr = new Gold_Mine(1, p3);

	object_ptrs[2] = goldmine1ptr;
	mine_ptrs[0] =  goldmine1ptr;

	Cart_Point p4(10, 20);

	Gold_Mine* goldmine2ptr;

	goldmine2ptr = new Gold_Mine(2, p4);

	object_ptrs[3] = goldmine2ptr;
	mine_ptrs[1] = goldmine2ptr;

	Town_Hall* townhptr;

	Cart_Point p5(0,0);

	townhptr = new Town_Hall(1,p5);

	object_ptrs[4] = townhptr;
	hall_ptrs[0] = townhptr;

	num_objects = 5;

	num_persons = 2;

	num_mines = 2;

	num_halls = 1;

	cout << "Model constructed." << endl;

}

Model::~Model()
{
	for ( int c = 0 ; c < num_objects ;c++) //destructs all objects in the array
	{
		delete object_ptrs[c];
	}
	cout << "Model destructed." << endl;
}

Person* Model::get_Person_ptr(int id)
{
	

	for (int i = 0; i < num_persons ; i++)
	{	
		int idcheck;

		idcheck = person_ptrs[i]->get_id();//find person with certain id_num
		
		if (idcheck == id)
		{
			
			return person_ptrs[i]; //if the pointer was found return that pointer
		}

		if (i == num_persons-1)
			return 0;
	}

	return 0;
}

Gold_Mine* Model::get_Gold_Mine_ptr(int id)
{
	

	for (int i = 0; i < num_mines; i++)
	{
		int idcheck;

		idcheck = mine_ptrs[i]->get_id();

		if (idcheck == id)
		{
			
			return mine_ptrs[i];
		}

		if (i == num_mines - 1)
			return 0;
	}
	return 0;

}

Town_Hall* Model::get_Town_Hall_ptr(int id)
{
	

	for (int i = 0; i < num_halls; i++)
	{
		int idcheck;

		idcheck = hall_ptrs[i]->get_id();

		if (idcheck == id)
		{
			
			return hall_ptrs[i];
		}

		if (i == num_halls - 1)
			return 0;
	}

	return 0;
}

bool Model::update()
{
	time = time + 1;

	

	int check1[5];
	

	for (int i = 0; i < num_objects; i++) //update all the objects in array
	{	
		check1[i] = object_ptrs[i]->update(); //store the bool results

	}

	for (int i = 0; i < num_objects; i++)
	{
		if (check1[i] == 1) //if any one of the objects returned true, return true
		{
			return true;
		}

	}
	
		return false;
}

void Model::show_status()
{
	cout << "Time: " << time <<endl;
	for (int i = 0; i < num_objects; i++)
	{	
		object_ptrs[i]->show_status(); //invokes all the show_status of objects in array

	}

}

void Model::display(View &view)
{
    for(int i = 0; i < num_objects ; i ++)
    {
        view.plot(object_ptrs[i]); //Places each object in the x-y plane (View)
    }
    
    view.draw();
}
