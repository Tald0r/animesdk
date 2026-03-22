#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UILineupSelectPageController___c__DisplayClass83_0; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6CB29E0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_1__ONADDBUTTONCLICK_B__2_OFFSET UNITYSDK_OFFSET(0x6CB29F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass83_1_TypeDefinitionIndex = 57348;

	class UILineupSelectPageController___c__DisplayClass83_1 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController___c__DisplayClass83_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnAddButtonClick_b__2(::Class_2_D89CCC627A66D0AD* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_1__ONADDBUTTONCLICK_B__2_OFFSET))(this, a);
		}
	};
}
