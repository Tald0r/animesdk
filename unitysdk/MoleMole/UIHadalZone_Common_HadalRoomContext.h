#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController_ShowType.h"

class Class_2_0A55B5A82A61DAFA_1;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_65;
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7D065E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoomContext_TypeDefinitionIndex = 49063;

	class UIHadalZone_Common_HadalRoomContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_14E7CE92E8A3183F* abyssDungeonCfg; // 0x28
		::Class_2_208CC9941471731A_65* activityBattleQuestCfg; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* cardIDList; // 0x38
		::Class_2_0A55B5A82A61DAFA_1* questCfg; // 0x40
		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* babelFloorCfg; // 0x48
		::System::Boolean hideMonsterLevel; // 0x50
		::System::Int32 roomIndex; // 0x54
		::System::Int32 roomID; // 0x58
		::System::Int32 monsterLevel; // 0x5C
		::System::Int32 GroupChallengeID; // 0x60
		::System::Int32 questID; // 0x64
		::MoleMole::UIMonsterCardInfoPopWindowController_ShowType showType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
