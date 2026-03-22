#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace MoleMole { class UIChatWindowWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2628D0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__INITCIRCLEINFO_B__0_OFFSET UNITYSDK_OFFSET(0xA2628E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass79_0_TypeDefinitionIndex = 57445;

	class UIChatWindowWidgetController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Action* onReady; // 0x10
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCircleInfo_b__0(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__INITCIRCLEINFO_B__0_OFFSET))(this, list);
		}
	};
}
