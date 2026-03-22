#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_A78FC80A78B3367C_1;

#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x68B7F10)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x68B7E90)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x68B7E50)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x68B80A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseFansUpTopTips_TypeDefinitionIndex = 66207;

	class UILiveHouseFansUpTopTips : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_A78FC80A78B3367C_1* _context; // 0x28
		::System::Int32 headid; // 0x30

		::System::Void _ctor(::Class_2_A78FC80A78B3367C_1* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A78FC80A78B3367C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
