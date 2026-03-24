#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_8;
template <typename T> class Class_1_4109B64C3CE1B638;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAD189D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET UNITYSDK_OFFSET(0xAD189E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass12_0_TypeDefinitionIndex = 55218;

	class UIGachaPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_3_AE02BC8285203464_8* gacha; // 0x10
		::Class_1_4109B64C3CE1B638<::System::UInt32>* optionalUpItemList; // 0x18
		::System::Int32 itemID; // 0x20
		::System::UInt32 optionalUpItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBangbooOptionalName_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET))(this);
		}
	};
}
