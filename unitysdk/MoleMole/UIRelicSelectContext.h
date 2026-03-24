#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B93C9F467751D5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA23B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRelicSelectContext_TypeDefinitionIndex = 80816;

	class UIRelicSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_58B93C9F467751D5 ShowType; // 0x28
		::System::UInt32 initialRelicUID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRELICSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
