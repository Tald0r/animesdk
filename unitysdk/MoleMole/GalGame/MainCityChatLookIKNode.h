#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatIKType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_GETLOOKIKCFG_OFFSET UNITYSDK_OFFSET(0xBA15010)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xBA150F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA150E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatLookIKNode_TypeDefinitionIndex = 50094;

	class MainCityChatLookIKNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* IKMemberParam; // 0x18
		::System::String* GroupMember; // 0x20
		::MoleMole::GalGame::MainCityChatIKType IKType; // 0x28
		::System::Int32 AvatarID; // 0x2C
		::System::Boolean Enable; // 0x30
		::System::Int32 IKParam; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::GalGame::LookIKCfg* GetLookIKCfg()
		{
			return ((::MoleMole::GalGame::LookIKCfg*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_GETLOOKIKCFG_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
