#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_GALGAMEACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F7F440)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameActionBase_TypeDefinitionIndex = 63965;

	class GalGameActionBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEACTIONBASE__CTOR_OFFSET))(this);
		}
	};
}
