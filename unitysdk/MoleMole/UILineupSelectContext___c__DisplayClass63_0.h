#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_0A55B5A82A61DAFA_2;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F15F90)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x8F15FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass63_0_TypeDefinitionIndex = 56000;

	class UILineupSelectContext___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA_2* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
