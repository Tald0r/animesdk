#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_FLOATNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA37C160)
#define MOLEMOLE_FLOATNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0xA37C150)
#define MOLEMOLE_FLOATNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA37C140)
#define MOLEMOLE_FLOATNUMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xA37C1C0)

namespace MoleMole
{
	inline static constexpr unsigned int FloatNumSettingEntry_TypeDefinitionIndex = 79405;

	class FloatNumSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Single MaxValue; // 0x30
		::System::Single DefaultValue; // 0x34
		::System::Single MinValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATNUMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::System::Single GetDefaultValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET))(this);
		}
	};
}
