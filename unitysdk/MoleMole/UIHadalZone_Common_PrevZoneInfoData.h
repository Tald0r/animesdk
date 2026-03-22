#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9C8B65AAC56F2387;

#define MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE8AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_PrevZoneInfoData_TypeDefinitionIndex = 49068;

	class UIHadalZone_Common_PrevZoneInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_9C8B65AAC56F2387* prevRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET))(this);
		}
	};
}
