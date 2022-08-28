//---------------------------------------------------------------------------
#pragma once
#include "lampe.h"
namespace Domotique {
class TRupteur
{
    private:
        Lampe	*m_recepteur;
		bool    m_etat;
	public:
    	TRupteur();
        virtual void	Impulser();
		void	Cabler  ( Lampe *dipole );
		bool    EstActionne(  );
};
}

