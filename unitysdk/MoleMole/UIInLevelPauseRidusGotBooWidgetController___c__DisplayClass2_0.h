#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_111E880F2E2D0218;
class Class_2_208CC9941471731A_763;

#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x86E7DD0)
#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x86E7DE0)
#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x86E7E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseRidusGotBooWidgetController___c__DisplayClass2_0_TypeDefinitionIndex = 42579;

	class UIInLevelPauseRidusGotBooWidgetController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_111E880F2E2D0218* buffMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_763* _OnUIOpen_b__0(::System::Int32 x)
		{
			return ((::Class_2_208CC9941471731A_763*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__0_OFFSET))(this, x);
		}

		::Class_2_208CC9941471731A_763* _OnUIOpen_b__1(::System::Int32 x)
		{
			return ((::Class_2_208CC9941471731A_763*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__1_OFFSET))(this, x);
		}
	};
}
