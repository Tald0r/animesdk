#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape.h"

#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76A930)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyShape2D_TypeDefinitionIndex = 36655;

	class CurvyShape2D : public ::FluffyUnderware::Curvy::CurvyShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE2D__CTOR_OFFSET))(this);
		}
	};
}
