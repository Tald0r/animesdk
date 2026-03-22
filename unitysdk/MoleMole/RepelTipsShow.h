#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_REPELTIPSSHOW_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0xA60E7A0)
#define MOLEMOLE_REPELTIPSSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xA60E7F0)
#define MOLEMOLE_REPELTIPSSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA60E7B0)

namespace MoleMole
{
	inline static constexpr unsigned int RepelTipsShow_TypeDefinitionIndex = 41113;

	class RepelTipsShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 itemID; // 0x28

		::System::Void _ctor(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELTIPSSHOW__CTOR_OFFSET))(this, itemID);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELTIPSSHOW_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELTIPSSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
