#ifndef DATA_H
#define DATA_H

class Relation{
	int l,set[10],rel[10][10];
	public:
		bool rflag,sflag,aflag,tflag;
		void input();
		void printMatrix();
		void reflexive();
		void symmetric();
		void anti_symmetric();
		void transitive();
};

#endif