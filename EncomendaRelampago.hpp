#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
  
    double taxaEncomendaRelampago = 0.25;

		double calcula(){
			double x = peso * custoKg;
			x += x * taxaEncomendaRelampago;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxaEncomendaRelampago << endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif