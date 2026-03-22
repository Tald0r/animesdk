#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIGeneralTokenContext; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace MoleMole { class UITokenShowConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xD6C1DD0)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD6C1D40)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD6C1CB0)
#define MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD6C1FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext_TypeDefinitionIndex = 38722;

	class UIRoleInfoDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::Class_2_D89CCC627A66D0AD* CurAvatarData; // 0x30
		::Class_1_0D6706375CDAAE8C* CurItemData; // 0x38
		::Share::EItemType CurItemType; // 0x40
		::System::Boolean forceFriendPreviewMode; // 0x42
		::System::Boolean IsNeedFadeInDetail; // 0x43
		::System::Int32 curSelectedSkillIndex; // 0x44
		::System::Int32 CloseIndex; // 0x48
		::System::Boolean TriggerBySwitchAvatar; // 0x4C
		::System::Boolean forcePreviewMode; // 0x4D
		::System::Single BackgroundPicPos; // 0x50
		::System::Int32 SlotIndex; // 0x54
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET))(this);
		}

		::System::Boolean get_IsFriendPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenContext* Construct(::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* showList)
		{
			return ((::MoleMole::UIGeneralTokenContext*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET))(this, showList);
		}
	};
}
