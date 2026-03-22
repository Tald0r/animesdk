#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7F57690)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayContext_TypeDefinitionIndex = 49461;

	class UIArcadePlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsMultiPlayerGame; // 0x28
		::Enum_3_71AA90D596A09AC8 MiniGameType; // 0x2C
		::System::Int32 ArcadeID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
