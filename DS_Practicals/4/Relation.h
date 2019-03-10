#ifndef RELATION
#define RELATION

class Relation{
	int l,set[10],rel[10][10];
	public:
		bool ref=false,sym=false,ansym=false,tr=false;
		void input();
		void printMatrix();
		void reflexive();
		void symmetric();
		void anti_symmetric();
		void transitive();
};

#endif
