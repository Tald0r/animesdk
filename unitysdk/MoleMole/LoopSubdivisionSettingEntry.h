#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0xA5F9D10)
#define MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA5F9D00)
#define MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F9D20)

namespace MoleMole
{
	inline static constexpr unsigned int LoopSubdivisionSettingEntry_TypeDefinitionIndex = 64397;

	class LoopSubdivisionSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_543B6B88E17BAFE0 get_SettingContentType()
		{
			return ((::Enum_3_543B6B88E17BAFE0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
