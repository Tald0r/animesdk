#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FD5CF626EB7D21F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_8F9E26CA2B644EB8_1.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB13A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageContext_TypeDefinitionIndex = 45298;

	class UIVRBossBattlePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 FromQuestId; // 0x28
		::System::Int32 JumpQuestId; // 0x2C
		::Enum_3_0FD5CF626EB7D21F type; // 0x30
		::Struct_2_8F9E26CA2B644EB8_1 JumpData; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
