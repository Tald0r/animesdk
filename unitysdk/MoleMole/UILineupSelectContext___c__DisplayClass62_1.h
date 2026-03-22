#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_33EA27A25F076E07;
class Class_3_48A3D3A34C52331D_39;
namespace MoleMole { class UILineupSelectContext___c__DisplayClass62_0; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8036F0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0xA803700)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET UNITYSDK_OFFSET(0xA803760)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass62_1_TypeDefinitionIndex = 67826;

	class UILineupSelectContext___c__DisplayClass62_1 : public ::System::Object
	{
	public:
		::Class_2_33EA27A25F076E07* mainStoryModel; // 0x10
		::MoleMole::UILineupSelectContext___c__DisplayClass62_0* CS___8__locals1; // 0x18
		::Class_1_44EFB945CAE441A3* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__1(::Class_3_48A3D3A34C52331D_39* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_39*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET))(this, ret);
		}

		::System::Void _SetArchiveBattleQuestContext_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS62_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET))(this);
		}
	};
}
