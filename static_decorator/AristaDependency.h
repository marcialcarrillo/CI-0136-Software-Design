#pragma once
#include <sstream>
#include <iostream>
#include "Arista.h"
using namespace std;

#include "Arista.h"

template < typename T >
class AristaDependency : public T
{
    // Impide que se use ColoredShape con un tipo T que NO herede de Shape!!!
    static_assert(is_base_of<Arista, T>::value, "Template argument must be an Arista");
    
public:
    // el uso de ...Args permite que toda una lista de parĂ¡metros sea pasada a T mediante constructores "forward".
    template < typename ...Args >
    AristaDependency(Args ...args) : T(std::forward<Args>(args)...), type{ "dependency" } {
    };
    
    ~AristaDependency(){
    };
        


	string toString() const
	{
		ostringstream oss;
		oss << T::toString() << type << "-type arrow.";
		return oss.str();
	}
    
    string getType() const {
        return type;
    }
    
private:
	string type;
};

