#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0xCA9CEF0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0xCA9CF90)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADDBANGBOO_OFFSET UNITYSDK_OFFSET(0xCA9CF70)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADD_OFFSET UNITYSDK_OFFSET(0xCA9CF50)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISDEFAULTAVATAR_OFFSET UNITYSDK_OFFSET(0xCA9CFF0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xCA9CED0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0xCA9CF10)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA9CFD0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xCA9CF30)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_TOWERID_OFFSET UNITYSDK_OFFSET(0xCA9CFB0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET UNITYSDK_OFFSET(0xCA9D050)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET UNITYSDK_OFFSET(0xCA9D0D0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0xCA9CF00)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0xCA9CFA0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADDBANGBOO_OFFSET UNITYSDK_OFFSET(0xCA9CF80)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADD_OFFSET UNITYSDK_OFFSET(0xCA9CF60)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISDEFAULTAVATAR_OFFSET UNITYSDK_OFFSET(0xCA9D000)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xCA9CEE0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0xCA9CF20)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA9CFE0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xCA9CF40)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_TOWERID_OFFSET UNITYSDK_OFFSET(0xCA9CFC0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA9D020)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0xCA9D040)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCA9D010)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelRoleCardWidgetController_Context_TypeDefinitionIndex = 53094;

	class UIBabelRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::System::Int32 BuddyId; // 0x10
		::System::Int32 _HpPercent_k__BackingField; // 0x14
		::System::Int32 AvatarLevel; // 0x18
		::System::Boolean _IsEmpty_k__BackingField; // 0x1C
		::System::Boolean _HandleSelect_k__BackingField; // 0x1D
		::System::Boolean _IsNew_k__BackingField; // 0x1E
		::System::Boolean _IsAdd_k__BackingField; // 0x1F
		::System::Int32 _TowerID_k__BackingField; // 0x20
		::System::Boolean _IsDefaultAvatar_k__BackingField; // 0x24
		::System::Boolean _ShowNotification_k__BackingField; // 0x25
		::System::Boolean IsBtnInteractable; // 0x26
		::System::Boolean _IsAddBangBoo_k__BackingField; // 0x27
		::System::Boolean _IsMask_k__BackingField; // 0x28
		::System::Int32 AvatarId; // 0x2C

		::System::Void _ctor(::System::Int32 towerid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, towerid);
		}

		::System::Void _ctor_1(::Class_2_D89CCC627A66D0AD* data, ::System::Int32 towerid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, data, towerid);
		}

		::System::Void _ctor_2(::System::Int32 avatarId, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, avatarId, level);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Boolean get_HandleSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET))(this);
		}

		::System::Void set_HandleSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET))(this);
		}

		::System::Void set_IsMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET))(this, value);
		}

		::System::Boolean get_ShowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void set_ShowNotification(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsAdd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADD_OFFSET))(this);
		}

		::System::Void set_IsAdd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADD_OFFSET))(this, value);
		}

		::System::Boolean get_IsAddBangBoo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADDBANGBOO_OFFSET))(this);
		}

		::System::Void set_IsAddBangBoo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADDBANGBOO_OFFSET))(this, value);
		}

		::System::Int32 get_HpPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HPPERCENT_OFFSET))(this);
		}

		::System::Void set_HpPercent(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HPPERCENT_OFFSET))(this, value);
		}

		::System::Int32 get_TowerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_TOWERID_OFFSET))(this);
		}

		::System::Void set_TowerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_TOWERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Boolean get_IsDefaultAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISDEFAULTAVATAR_OFFSET))(this);
		}

		::System::Void set_IsDefaultAvatar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISDEFAULTAVATAR_OFFSET))(this, value);
		}

		::MoleMole::UIBabelRoleCardWidgetController_Context* SetHandleSelect(::System::Boolean handleSelect, ::System::Boolean showNotification)
		{
			return ((::MoleMole::UIBabelRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET))(this, handleSelect, showNotification);
		}

		::MoleMole::UIBabelRoleCardWidgetController_Context* SetMask(::System::Boolean mask)
		{
			return ((::MoleMole::UIBabelRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET))(this, mask);
		}
	};
}
