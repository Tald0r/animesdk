#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_284;
namespace MoleMole { class UISuibianTempleHiveBoxPageController___c__DisplayClass28_0; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9589390)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__ONCLICKBUYBTN_B__2_OFFSET UNITYSDK_OFFSET(0x95893A0)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__ONCLICKBUYBTN_B__3_OFFSET UNITYSDK_OFFSET(0x95896E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleHiveBoxPageController___c__DisplayClass28_1_TypeDefinitionIndex = 45254;

	class UISuibianTempleHiveBoxPageController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UISuibianTempleHiveBoxPageController___c__DisplayClass28_0* CS___8__locals1; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* slotIdList; // 0x20
		::System::Int32 buddyID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBuyBtn_b__2(::Class_3_025FF4981524A424_284* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_284*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__ONCLICKBUYBTN_B__2_OFFSET))(this, ret);
		}

		::System::Void _OnClickBuyBtn_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS28_1__ONCLICKBUYBTN_B__3_OFFSET))(this);
		}
	};
}
