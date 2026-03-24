#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0FE5C5ECCA2F598.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA460800)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGameContext_TypeDefinitionIndex = 38808;

	class UIStreamingGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_C0FE5C5ECCA2F598 DefaultHUDSubState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
