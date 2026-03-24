#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA449430)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS64_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0xA45AAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass64_0_TypeDefinitionIndex = 79376;

	class UIRoleSelectPageController___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::Class_2_D89CCC627A66D0AD* robot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__0(::Class_2_D89CCC627A66D0AD* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS64_0__ONSHOW_B__0_OFFSET))(this, match);
		}
	};
}
