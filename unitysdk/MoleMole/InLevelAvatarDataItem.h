#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/InLevelAvatarDataItem_InLevelAvatarDataType.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_807;
class Class_2_D89CCC627A66D0AD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INLEVELAVATARDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x75A4720)
#define MOLEMOLE_INLEVELAVATARDATAITEM_GETAVATARTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x75A4780)
#define MOLEMOLE_INLEVELAVATARDATAITEM_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x75A44C0)
#define MOLEMOLE_INLEVELAVATARDATAITEM_GET_DATAITEMID_OFFSET UNITYSDK_OFFSET(0x75A3E40)
#define MOLEMOLE_INLEVELAVATARDATAITEM_GET_ROBOTTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x75A3E50)
#define MOLEMOLE_INLEVELAVATARDATAITEM_INITAVATARDATAITEM_OFFSET UNITYSDK_OFFSET(0x75A4390)
#define MOLEMOLE_INLEVELAVATARDATAITEM_INITAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x75A4400)
#define MOLEMOLE_INLEVELAVATARDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x75A3F00)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelAvatarDataItem_TypeDefinitionIndex = 77233;

	class InLevelAvatarDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* mpPropertyOverrideMap; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* initDynamicAccs; // 0x18
		::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* skillLevel; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* equipAbilityIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* defaultActorPropertyMap; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* equipAbilityList; // 0x38
		::Class_2_208CC9941471731A_807* _robotTemplateExt; // 0x40
		::System::Int32 talent; // 0x48
		::System::Int32 passiveSkillLevel; // 0x4C
		::System::Int32 star; // 0x50
		::System::Int32 rank; // 0x54
		::System::Int32 avatarTemplateID; // 0x58
		::System::Int32 awakeID; // 0x5C
		::Share::EAvatarShowWeaponType showWeaponType; // 0x60
		::System::Int32 position; // 0x64
		::System::Int32 avatarSkinID; // 0x68
		::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType AvatarTeamTag; // 0x6C
		::System::Int32 level; // 0x70
		::System::Int32 robotID; // 0x74
		::System::Boolean isAwakeEnable; // 0x78
		::System::Boolean isDead; // 0x79
		::System::Boolean isLoadShow; // 0x7A

		::System::Void _ctor(::System::Int32 avatarTemplateID, ::System::Int32 level, ::System::Int32 talent, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* skillLevel, ::System::Boolean isBattle, ::System::Int32 inRobotId, ::Share::EAvatarShowWeaponType showWeaponType, ::System::Int32 passiveSkillLevel, ::System::Int32 avatarSkinId, ::System::Int32 awakeID, ::System::Boolean awakeEnable, ::System::Collections::Generic::List_1<::System::Int32>* initDynamicAccs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::System::Boolean, ::System::Int32, ::Share::EAvatarShowWeaponType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM__CTOR_OFFSET))(this, avatarTemplateID, level, talent, skillLevel, isBattle, inRobotId, showWeaponType, passiveSkillLevel, avatarSkinId, awakeID, awakeEnable, initDynamicAccs);
		}

		::System::Int32 get_DataItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_GET_DATAITEMID_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_807* get_robotTemplateConfig()
		{
			return ((::Class_2_208CC9941471731A_807*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_GET_ROBOTTEMPLATECONFIG_OFFSET))(this);
		}

		::Class_2_D89CCC627A66D0AD* GetItemData()
		{
			return ((::Class_2_D89CCC627A66D0AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_GETITEMDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Int32 GetAvatarTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_GETAVATARTEMPLATEID_OFFSET))(this);
		}

		::System::Void InitAvatarDataItem(::System::Int32 avatarTemplateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_INITAVATARDATAITEM_OFFSET))(this, avatarTemplateID);
		}

		::System::Void InitAvatarSkinData(::System::Int32 skinConfigId, ::System::Int32 avatarConfigId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELAVATARDATAITEM_INITAVATARSKINDATA_OFFSET))(this, skinConfigId, avatarConfigId);
		}
	};
}
