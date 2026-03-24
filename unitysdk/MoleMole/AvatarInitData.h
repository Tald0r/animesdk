#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class EquipmentInitData; }
namespace MoleMole { class WeaponInitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARINITDATA_CREATEBYAVATARITEMDATA_OFFSET UNITYSDK_OFFSET(0xB43D230)
#define MOLEMOLE_AVATARINITDATA_CREATEBYROBOTID_OFFSET UNITYSDK_OFFSET(0xB43D7E0)
#define MOLEMOLE_AVATARINITDATA_DOPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xB43D6B0)
#define MOLEMOLE_AVATARINITDATA_EDITORDYNAMICACCS_OFFSET UNITYSDK_OFFSET(0xB43E010)
#define MOLEMOLE_AVATARINITDATA_GET_AVATARPASSIVESKILLLEVELMAX_OFFSET UNITYSDK_OFFSET(0xB43E120)
#define MOLEMOLE_AVATARINITDATA_GET_AVATARTALENTMAX_OFFSET UNITYSDK_OFFSET(0xB43E070)
#define MOLEMOLE_AVATARINITDATA_INITAVATARSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xB43E1D0)
#define MOLEMOLE_AVATARINITDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB43D3A0)
#define MOLEMOLE_AVATARINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB43DF60)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarInitData_TypeDefinitionIndex = 69360;

	class AvatarInitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EquipmentInitData*>* equipmentInitDataGroup; // 0x10
		::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* avatarSkillLevel; // 0x18
		::MoleMole::WeaponInitData* weaponInitData; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* initDynamicAccs; // 0x28
		::System::Int32 avatarPassiveSkillLevel; // 0x30
		::System::Int32 avatarTalent; // 0x34
		::System::Boolean awakeEnable; // 0x38
		::System::Boolean CustomEditeDynamicAccs; // 0x39
		::System::UInt32 peerId; // 0x3C
		::System::Int32 avatarLevel; // 0x40
		::System::Int32 avatarRank; // 0x44
		::System::Int32 robotId; // 0x48
		::System::Int32 awakeID; // 0x4C
		::System::Int32 configAvatarSkinId; // 0x50
		::System::Int32 avatarStar; // 0x54
		::System::Int32 avatarID; // 0x58
		::Share::EAvatarShowWeaponType showWeaponType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 id, ::System::Int32 level, ::System::Int32 star, ::System::Int32 talent, ::System::Int32 passiveSkillLevel, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* skillLevelDict, ::System::Int32 rank, ::System::Int32 oriRobotId, ::Share::EAvatarShowWeaponType avatarShowWeaponType, ::System::Int32 awakeID, ::System::Boolean awakeEnable, ::System::Collections::Generic::List_1<::System::Int32>* initDynamicAccs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::System::Int32, ::System::Int32, ::Share::EAvatarShowWeaponType, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA__CTOR_1_OFFSET))(this, id, level, star, talent, passiveSkillLevel, skillLevelDict, rank, oriRobotId, avatarShowWeaponType, awakeID, awakeEnable, initDynamicAccs);
		}

		static ::MoleMole::AvatarInitData* CreateByAvatarItemData(::Class_2_D89CCC627A66D0AD* itemData)
		{
			return ((::MoleMole::AvatarInitData*(*)(::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_CREATEBYAVATARITEMDATA_OFFSET))(itemData);
		}

		static ::MoleMole::AvatarInitData* CreateByRobotID(::System::Int32 robotId)
		{
			return ((::MoleMole::AvatarInitData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_CREATEBYROBOTID_OFFSET))(robotId);
		}

		::System::Void EditorDynamicAccs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_EDITORDYNAMICACCS_OFFSET))(this);
		}

		::System::Int32 get_AvatarTalentMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_GET_AVATARTALENTMAX_OFFSET))(this);
		}

		::System::Int32 get_AvatarPassiveSkillLevelMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_GET_AVATARPASSIVESKILLLEVELMAX_OFFSET))(this);
		}

		::System::Void InitAvatarSkillLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_INITAVATARSKILLLEVEL_OFFSET))(this);
		}

		::System::Void DoPassiveSkillLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARINITDATA_DOPASSIVESKILLLEVEL_OFFSET))(this);
		}
	};
}
