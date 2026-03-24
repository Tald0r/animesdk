#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardPlayStartPerform; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8931A50)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x8931A60)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x8931C70)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x8931C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass115_0_TypeDefinitionIndex = 49559;

	class UIHollowMainPageController___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::MoleMole::Config::ConfigChessboardPlayStartPerform* config; // 0x20
		::Class_5_0B648F1F8F6AC84A* pieceCtrl; // 0x28
		::System::Action* endCB; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__0_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__3_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__2_OFFSET))(this);
		}
	};
}
