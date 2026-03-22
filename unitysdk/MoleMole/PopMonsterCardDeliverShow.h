#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0100F523D1975E90.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8F3C400)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x8F3C450)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3C410)

namespace MoleMole
{
	inline static constexpr unsigned int PopMonsterCardDeliverShow_TypeDefinitionIndex = 77066;

	class PopMonsterCardDeliverShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Enum_3_0100F523D1975E90 _showType; // 0x28

		::System::Void _ctor(::Enum_3_205E43D40B9E7AEA showPage, ::Enum_3_0100F523D1975E90 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205E43D40B9E7AEA, ::Enum_3_0100F523D1975E90))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET))(this, showPage, showType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
