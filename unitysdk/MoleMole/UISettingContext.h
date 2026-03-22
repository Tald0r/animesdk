#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x68ED3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingContext_TypeDefinitionIndex = 64670;

	class UISettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ESystemSettingType SystemSettingType; // 0x28
		::System::Int32 ParentLayer; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
