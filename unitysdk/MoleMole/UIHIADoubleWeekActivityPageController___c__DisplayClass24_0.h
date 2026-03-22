#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1699D6295DC3F818_3;
namespace MoleMole { class UIHIADoubleWeekActivityPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8094920)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x8094930)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0x8094C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c__DisplayClass24_0_TypeDefinitionIndex = 67695;

	class UIHIADoubleWeekActivityPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* claimBingoIdxList; // 0x10
		::MoleMole::UIHIADoubleWeekActivityPageController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeAllBingoRewards_b__0(::Class_1_B81AB3851AD916CA<::Class_3_1699D6295DC3F818_3*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B81AB3851AD916CA<::Class_3_1699D6295DC3F818_3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeAllBingoRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET))(this);
		}
	};
}
