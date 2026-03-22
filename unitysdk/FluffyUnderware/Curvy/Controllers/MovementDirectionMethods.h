#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_FROMINT_OFFSET UNITYSDK_OFFSET(0x1A35FDB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_GETOPPOSITE_OFFSET UNITYSDK_OFFSET(0x1A35FDC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_TOINT_OFFSET UNITYSDK_OFFSET(0x1A35FE30)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MovementDirectionMethods_TypeDefinitionIndex = 35713;

	class MovementDirectionMethods : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Controllers::MovementDirection FromInt(::System::Int32 value)
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_FROMINT_OFFSET))(value);
		}

		static ::FluffyUnderware::Curvy::Controllers::MovementDirection GetOpposite(::FluffyUnderware::Curvy::Controllers::MovementDirection value)
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_GETOPPOSITE_OFFSET))(value);
		}

		static ::System::Int32 ToInt(::FluffyUnderware::Curvy::Controllers::MovementDirection direction)
		{
			return ((::System::Int32(*)(::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_MOVEMENTDIRECTIONMETHODS_TOINT_OFFSET))(direction);
		}
	};
}
