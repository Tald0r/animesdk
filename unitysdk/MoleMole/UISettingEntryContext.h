#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define MOLEMOLE_UISETTINGENTRYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA9950)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingEntryContext_TypeDefinitionIndex = 64046;

	class UISettingEntryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::SystemSettingEntryBase* SettingEntry; // 0x28
		::System::Boolean IsFromLoginPage; // 0x30
		::MoleMole::ESystemSettingType SystemSettingType; // 0x34
		::System::Int32 maxHeight; // 0x38
		::System::Int32 ParentLayer; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENTRYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
