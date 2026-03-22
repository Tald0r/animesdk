#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_0A55B5A82A61DAFA;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8034C0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0xA8034D0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass62_0_TypeDefinitionIndex = 67823;

	class UILineupSelectContext___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
