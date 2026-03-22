#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/IntNumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;

#define MOLEMOLE_MUSICVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0xB3BDA60)
#define MOLEMOLE_MUSICVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB3BDA50)
#define MOLEMOLE_MUSICVOLUMESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BDB80)
#define MOLEMOLE_MUSICVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0xB3BDBA0)

namespace MoleMole
{
	inline static constexpr unsigned int MusicVolumeSettingEntry_TypeDefinitionIndex = 68549;

	class MusicVolumeSettingEntry : public ::MoleMole::IntNumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICVOLUMESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_543B6B88E17BAFE0 get_SettingContentType()
		{
			return ((::Enum_3_543B6B88E17BAFE0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
