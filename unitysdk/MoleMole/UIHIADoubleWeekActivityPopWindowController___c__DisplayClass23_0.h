#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1699D6295DC3F818;
namespace MoleMole { class UIHIADoubleWeekActivityPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA94FB10)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0xA94FB20)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0xA94FDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 44771;

	class UIHIADoubleWeekActivityPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* claimBingoIdxList; // 0x18
		::MoleMole::UIHIADoubleWeekActivityPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeAllBingoRewards_b__0(::Class_1_4109B64C3CE1B638<::Class_3_1699D6295DC3F818*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4109B64C3CE1B638<::Class_3_1699D6295DC3F818*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeAllBingoRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET))(this);
		}
	};
}
