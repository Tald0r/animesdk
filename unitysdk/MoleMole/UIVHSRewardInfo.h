#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_FD161B8AFE00CB2F;
class Class_3_4A628DAD59F70BCB_1;

#define MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xCAAFDF0)
#define MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCAAFDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSRewardInfo_TypeDefinitionIndex = 50452;

	class UIVHSRewardInfo : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28
		::Class_3_4A628DAD59F70BCB_1* settleData; // 0x30

		::System::Void _ctor(::Class_3_4A628DAD59F70BCB_1* settleData, ::Class_1_FD161B8AFE00CB2F* storeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4A628DAD59F70BCB_1*, ::Class_1_FD161B8AFE00CB2F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET))(this, settleData, storeData);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET))(this);
		}
	};
}
