#ifndef PERSON_H
#define PERSON_H

class Person{
public:
	string Name;
	int Age;
	void Hello(){
		cout<<"Hello, I am "+Name+" and I am "+Age;
	}
}

#endif