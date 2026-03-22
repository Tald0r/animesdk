#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIHollowMainPageController_CardSlot; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ADD_OFFSET UNITYSDK_OFFSET(0x7A76DC0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x7A76DA0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x7A76E00)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x7A76DE0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ADD_OFFSET UNITYSDK_OFFSET(0x7A76DD0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x7A76DB0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x7A76E10)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x7A76DF0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7A76E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_CardChangeInfo_TypeDefinitionIndex = 52597;

	class UIHollowMainPageController_CardChangeInfo : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController_CardSlot* _slot_k__BackingField; // 0x10
		::Class_1_0D6706375CDAAE8C* _item_k__BackingField; // 0x18
		::System::Int32 _itemid_k__BackingField; // 0x20
		::System::Boolean _add_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_0D6706375CDAAE8C* item, ::System::Boolean add, ::MoleMole::UIHollowMainPageController_CardSlot* tmpSlot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean, ::MoleMole::UIHollowMainPageController_CardSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO__CTOR_OFFSET))(this, item, add, tmpSlot);
		}

		::System::Int32 get_itemid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_itemid(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Boolean get_add()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ADD_OFFSET))(this);
		}

		::System::Void set_add(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ADD_OFFSET))(this, value);
		}

		::MoleMole::UIHollowMainPageController_CardSlot* get_slot()
		{
			return ((::MoleMole::UIHollowMainPageController_CardSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_slot(::MoleMole::UIHollowMainPageController_CardSlot* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowMainPageController_CardSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_SLOT_OFFSET))(this, value);
		}

		::Class_1_0D6706375CDAAE8C* get_item()
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEM_OFFSET))(this);
		}

		::System::Void set_item(::Class_1_0D6706375CDAAE8C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEM_OFFSET))(this, value);
		}
	};
}
