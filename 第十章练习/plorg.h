#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
	private:
		static const int LIMIT=19;
		char name[LIMIT];
		int Ci;
	public:
		Plorg();
		Plorg(const char name_m[],int Ci_m=50);
		~Plorg(){}
		void PlorgReset(int n);
		void PlorgShow()const;
	
};
#endif
