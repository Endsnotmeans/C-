#ifndef SALES_H_
#define SALES_H_

namespace SALES			//classд��namespace�� 
{
	const int QUARTERS=4;
	class Sales
	{
		private: 
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
		 Sales();
		 Sales(const double ar[],int n);
		 void setSales();
		 void showSales();
	};
}
#endif 
