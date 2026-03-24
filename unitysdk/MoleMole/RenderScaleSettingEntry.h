#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_RENDERSCALESETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x8C920A0)
#define MOLEMOLE_RENDERSCALESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x8C92090)
#define MOLEMOLE_RENDERSCALESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x8C920B0)

namespace MoleMole
{
	inline static constexpr unsigned int RenderScaleSettingEntry_TypeDefinitionIndex = 47944;

	class RenderScaleSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_543B6B88E17BAFE0 get_SettingContentType()
		{
			return ((::Enum_3_543B6B88E17BAFE0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
