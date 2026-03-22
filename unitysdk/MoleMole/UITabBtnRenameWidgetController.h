#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_500F174EF473DBE7;
class Class_2_8A52DA0C3264D618;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET UNITYSDK_OFFSET(0xACD31A0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0xACD33F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET UNITYSDK_OFFSET(0xACD28D0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET UNITYSDK_OFFSET(0xACD28C0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xACD25D0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET UNITYSDK_OFFSET(0xACD2CF0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACD2820)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xACD1F30)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xACD2C20)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xACD28E0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACD2B40)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACD1C90)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET UNITYSDK_OFFSET(0xACD2700)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHRENAME_OFFSET UNITYSDK_OFFSET(0xACD2960)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0xACD2AA0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET UNITYSDK_OFFSET(0xACD2E70)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET UNITYSDK_OFFSET(0xACD2790)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xACD3460)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACD3470)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xACD34E0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xACD3550)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACD35D0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACD3650)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRenameWidgetController_TypeDefinitionIndex = 67511;

	class UITabBtnRenameWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_8A52DA0C3264D618* _view; // 0x2D0
		::Class_2_DA8BF519212BAE65* m_model; // 0x2D8
		::System::UInt32 m_buildUid; // 0x2E0
		::System::String* m_buildName; // 0x2E8
		::MoleMole::UIGeneralPopUpHintWidgetController* _popCtrl; // 0x2F0
		::System::Action* click; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET))(this, args);
		}

		::Class_2_DA8BF519212BAE65* get_Model()
		{
			return ((::Class_2_DA8BF519212BAE65*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::UInt32 get_BuildUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET))(this);
		}

		::System::String* get_BuildName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshRename(::Class_1_500F174EF473DBE7* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_500F174EF473DBE7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHRENAME_OFFSET))(this, ctx);
		}

		::System::Void Refresh(::Class_1_500F174EF473DBE7* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_500F174EF473DBE7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET))(this, ctx);
		}

		::System::Void SetToTop(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET))(this, state);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickRename()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET))(this);
		}

		::System::Void RefreshNameText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET))(this);
		}

		::System::Void RegisterRedPoint(::Share::ENotificationBadgeType badgeType, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET))(this, badgeType, subID);
		}

		::System::Void EnableWidget(::Enum_3_F019D5BE4A3284F8 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET))(this, showType);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
