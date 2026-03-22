#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"

#define MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE98850)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanOnLinePlayerWidgetContext_TypeDefinitionIndex = 52437;

	class UIUrbanOnLinePlayerWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TeamIdx; // 0x28
		::System::Int32 EntityId; // 0x2C
		::System::Boolean isLocalPlayer; // 0x30
		::Struct_2_A3F7BC7FD0AC1E07 ConvertData; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
