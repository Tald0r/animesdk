#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_208CC9941471731A_826;

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS90_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA7FD0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS90_1__ONGOTOTUTORIAL_B__1_OFFSET UNITYSDK_OFFSET(0xBEA7FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass90_1_TypeDefinitionIndex = 49303;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass90_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_826* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS90_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnGotoTutorial_b__1(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS90_1__ONGOTOTUTORIAL_B__1_OFFSET))(this, data);
		}
	};
}
