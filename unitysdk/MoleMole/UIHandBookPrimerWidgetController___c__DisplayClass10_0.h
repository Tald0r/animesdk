#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_96;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D1F030)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS10_0__INITTAB_B__0_OFFSET UNITYSDK_OFFSET(0x9D1F040)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 71614;

	class UIHandBookPrimerWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_96* item; // 0x10
		::MoleMole::UIHandBookPrimerWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBaseController* _InitTab_b__0()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS10_0__INITTAB_B__0_OFFSET))(this);
		}
	};
}
