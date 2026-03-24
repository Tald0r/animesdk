#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"

#define MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE9B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanOnLinePlayerWidgetContext_TypeDefinitionIndex = 64099;

	class UIUrbanOnLinePlayerWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TeamIdx; // 0x28
		::Struct_2_A3F7BC7FD0AC1E07 ConvertData; // 0x2C
		::System::Int32 EntityId; // 0x64
		::System::Boolean isLocalPlayer; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
