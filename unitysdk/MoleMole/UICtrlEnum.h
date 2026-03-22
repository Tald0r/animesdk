#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET UNITYSDK_OFFSET(0xBEEB5E0)
#define MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET UNITYSDK_OFFSET(0xBEEB500)
#define MOLEMOLE_UICTRLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0xBEEB4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICtrlEnum_TypeDefinitionIndex = 68371;

	class UICtrlEnum : public ::System::Object
	{
	public:
		::System::String* _ctrlName; // 0x10

		::System::Void _ctor(::Enum_3_B90C1A15EA6E3C2B a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM__CTOR_OFFSET))(this, a1);
		}

		::Enum_3_B90C1A15EA6E3C2B get_CtrlId()
		{
			return ((::Enum_3_B90C1A15EA6E3C2B(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET))(this);
		}

		::System::Void set_CtrlId(::Enum_3_B90C1A15EA6E3C2B a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET))(this, a1);
		}
	};
}
