#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET UNITYSDK_OFFSET(0xA95BBA0)
#define MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET UNITYSDK_OFFSET(0xA95BAC0)
#define MOLEMOLE_UICTRLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0xA95BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICtrlEnum_TypeDefinitionIndex = 74435;

	class UICtrlEnum : public ::System::Object
	{
	public:
		::System::String* _ctrlName; // 0x10

		::System::Void _ctor(::Enum_3_340DE32BA097F66C a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM__CTOR_OFFSET))(this, a1);
		}

		::Enum_3_340DE32BA097F66C get_CtrlId()
		{
			return ((::Enum_3_340DE32BA097F66C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET))(this);
		}

		::System::Void set_CtrlId(::Enum_3_340DE32BA097F66C a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET))(this, a1);
		}
	};
}
