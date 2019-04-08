#include "AristaDirectional.h"

	AristaDirectional::AristaDirectional()
    {

    }
	AristaDirectional::AristaDirectional(const bool directional)
    {

    }

	AristaDirectional::~AristaDirectional()
    {
    }

	
	bool AristaDirectional::getDirectional()
    {
        return directional;
    }

	void AristaDirectional::setDirectional(bool directional)
    {
       this->directional = directional;
    }

    string AristaDirectional::toString() const
    {
        ostringstream oss;
        if (directional)
        {
            oss << "A directional ";
            return oss.str();
        }
        else
        {
            oss << "A non directional ";
            return oss.str();
        }
        
    }