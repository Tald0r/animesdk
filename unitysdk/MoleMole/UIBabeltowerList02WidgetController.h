#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_BF6B29D18B16113B.h"

class Class_2_08E43914789BE5F3;
class Class_2_79AE422BA06F6D26_191;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0xB2A2230)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONBABELTOWERFLOORFINISHANIMATION_OFFSET UNITYSDK_OFFSET(0xB2A0D40)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2A0BC0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB2A3160)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB2A1170)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSHOWBABELTOWERUNLOCK_OFFSET UNITYSDK_OFFSET(0xB2A1690)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2A0C60)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2A08C0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2A0A70)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB2A12C0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_SETCLICKFUNC_OFFSET UNITYSDK_OFFSET(0xB2A32E0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_UPDATEFLOOR_OFFSET UNITYSDK_OFFSET(0xB2A25A0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0xB2A2DE0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A3350)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__REFRESHNORMALVIEW_OFFSET UNITYSDK_OFFSET(0xB2A17C0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2A3550)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB2A35C0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB2A3630)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2A36B0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2A3730)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2A3790)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerList02WidgetController_TypeDefinitionIndex = 69469;

	class UIBabeltowerList02WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 FloorTotal = 0x5; // 0x0
		// static const ::System::String* FloorStrRoot; // 0x0
		::Class_2_79AE422BA06F6D26_191* _view; // 0x2D0
		::System::Int32 towerid; // 0x2D8
		::System::UInt32 currentFloor; // 0x2DC
		::System::Boolean isSpecial; // 0x2E0
		::Class_2_08E43914789BE5F3* model; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* rankPic; // 0x2F0
		::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* onClick; // 0x2F8
		::System::Int32 floorID; // 0x300
		::System::Boolean isUnlimitSymbol; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBabelTowerFloorFinishAnimation(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONBABELTOWERFLOORFINISHANIMATION_OFFSET))(this, args);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnShowBabelTowerUnlock(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSHOWBABELTOWERUNLOCK_OFFSET))(this, args);
		}

		::System::Void _RefreshNormalView(::Struct_2_BF6B29D18B16113B data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BF6B29D18B16113B, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__REFRESHNORMALVIEW_OFFSET))(this, data, index);
		}

		::System::Void RefreshView(::Struct_2_BF6B29D18B16113B data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BF6B29D18B16113B, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data, index);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void UpdateOffset(::System::Int32 floorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_UPDATEOFFSET_OFFSET))(this, floorIndex);
		}

		::System::Void UpdateFloor(::System::UInt32 floorIndex, ::System::Boolean isSpecial, ::System::Boolean isUnlimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_UPDATEFLOOR_OFFSET))(this, floorIndex, isSpecial, isUnlimit);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetClickFunc(::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_SETCLICKFUNC_OFFSET))(this, onClick);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
