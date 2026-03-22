#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_26723316A4ED7BA7;

#define MOLEMOLE_UIACTIVITYCOMPARCADECOINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D3900)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompArcadeCoinContext_TypeDefinitionIndex = 46178;

	class UIActivityCompArcadeCoinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_26723316A4ED7BA7* handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPARCADECOINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
