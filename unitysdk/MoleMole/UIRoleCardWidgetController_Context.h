#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
class Class_3_6EF456A21AE85EEC_90;
class Class_3_AE02BC8285203464_5;

#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_FRIENDAVATARSKINID_OFFSET UNITYSDK_OFFSET(0x8687A50)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8687A10)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISFRIENDSAVATAR_OFFSET UNITYSDK_OFFSET(0x8687A30)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETAVATAREXTRADATA_1_OFFSET UNITYSDK_OFFSET(0x8687BD0)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETAVATAREXTRADATA_OFFSET UNITYSDK_OFFSET(0x8687B40)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETFRIENDAVATARSKINID_OFFSET UNITYSDK_OFFSET(0x8687E60)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_FRIENDAVATARSKINID_OFFSET UNITYSDK_OFFSET(0x8687A60)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8687A20)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISFRIENDSAVATAR_OFFSET UNITYSDK_OFFSET(0x8687A40)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8687A80)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8687AA0)
#define MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8687A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleCardWidgetController_Context_TypeDefinitionIndex = 51349;

	class UIRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::System::UInt32 _FriendAvatarSkinID_k__BackingField; // 0x10
		::System::Int32 UnlockTalentNum; // 0x14
		::System::Int32 AvatarId; // 0x18
		::System::Int32 AvatarLevel; // 0x1C
		::System::Int32 CurAwakenLevel; // 0x20
		::System::Int32 AwakenMaxLevel; // 0x24
		::System::Boolean IsBtnInteractable; // 0x28
		::System::Boolean _IsEmpty_k__BackingField; // 0x29
		::System::Boolean IsAwakableCharacter; // 0x2A
		::System::Boolean _IsFriendsAvatar_k__BackingField; // 0x2B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_3_6EF456A21AE85EEC_90* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_90*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, avatarData);
		}

		::System::Void _ctor_2(::Class_2_D89CCC627A66D0AD* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, data);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsFriendsAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISFRIENDSAVATAR_OFFSET))(this);
		}

		::System::Void set_IsFriendsAvatar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISFRIENDSAVATAR_OFFSET))(this, value);
		}

		::System::UInt32 get_FriendAvatarSkinID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_GET_FRIENDAVATARSKINID_OFFSET))(this);
		}

		::System::Void set_FriendAvatarSkinID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SET_FRIENDAVATARSKINID_OFFSET))(this, value);
		}

		::MoleMole::UIRoleCardWidgetController_Context* SetAvatarExtraData(::Class_3_AE02BC8285203464_5* avatar)
		{
			return ((::MoleMole::UIRoleCardWidgetController_Context*(*)(::PVOID, ::Class_3_AE02BC8285203464_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETAVATAREXTRADATA_OFFSET))(this, avatar);
		}

		::MoleMole::UIRoleCardWidgetController_Context* SetAvatarExtraData_1(::System::UInt32 unlockTalentNum, ::System::UInt32 awakenID)
		{
			return ((::MoleMole::UIRoleCardWidgetController_Context*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETAVATAREXTRADATA_1_OFFSET))(this, unlockTalentNum, awakenID);
		}

		::MoleMole::UIRoleCardWidgetController_Context* SetFriendAvatarSkinID(::System::UInt32 skinID)
		{
			return ((::MoleMole::UIRoleCardWidgetController_Context*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLECARDWIDGETCONTROLLER_CONTEXT_SETFRIENDAVATARSKINID_OFFSET))(this, skinID);
		}
	};
}
