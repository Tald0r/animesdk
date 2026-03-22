#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
class Class_1_FFD2BFBAA17829FB;
namespace MoleMole { class UIActivityReturnPageController; }
namespace MoleMole { class UIBackFlowContext; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x7F50630)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS47_0__OPNETABWIDGETBYACTIVITYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x7F50640)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c__DisplayClass47_0_TypeDefinitionIndex = 43118;

	class UIActivityReturnPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBackFlowContext* contextBase; // 0x10
		::Class_1_FFD2BFBAA17829FB* subActivityData; // 0x18
		::MoleMole::UIActivityReturnPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpneTabWidgetByActivityData_b__0(::Class_1_7ECB9691B142D586* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS47_0__OPNETABWIDGETBYACTIVITYDATA_B__0_OFFSET))(this, _);
		}
	};
}
