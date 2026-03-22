#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x6B215D0)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x6B21630)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x6B20C00)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingContextBase_TypeDefinitionIndex = 49842;

	class SystemSettingContextBase : public ::System::Object
	{
	public:
		::System::String* OptionTextCode; // 0x10
		::System::String* OptionText; // 0x18
		::System::Boolean HideOnUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsShowOnUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET))(this);
		}
	};
}
