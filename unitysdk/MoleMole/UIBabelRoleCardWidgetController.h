#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_08E43914789BE5F3;
class Class_2_79AE422BA06F6D26_83;
namespace MoleMole { class UIBabelRoleCardWidgetController_Context; }
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0xA51E0D0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA51C830)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xA51E530)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA51E450)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA51C8D0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA51C420)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA51CCD0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETAVATARSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA51CA90)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETBTNCLICKEDACTION_OFFSET UNITYSDK_OFFSET(0xA51C780)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xA51CB50)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA51E790)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA51E720)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA51E7A0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xA51E810)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA51E880)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA51E900)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA51E980)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelRoleCardWidgetController_TypeDefinitionIndex = 53092;

	class UIBabelRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_SelectAvatar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIBabelRoleCardWidgetController_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		::Class_2_79AE422BA06F6D26_83* _view; // 0x2D0
		::MoleMole::UIBabelRoleCardWidgetController_Context* _context; // 0x2D8
		::System::Collections::Generic::List_1<::System::UInt32>* SelectAvatarList; // 0x2E0
		::MoleMole::UIBabeltowerFightingInfoWidgetController* parentInfoCtrl; // 0x2E8
		::System::Action* clickAction; // 0x2F0
		::System::Action* bangbooAction; // 0x2F8
		::System::Action_1<::System::Int32>* roleAction; // 0x300
		::System::Action_1<::System::Int32>* bangbooClickAction; // 0x308
		::MoleMole::UIGeneralNewHintWidgetController* hintCtrl; // 0x310
		::Class_2_08E43914789BE5F3* towerModel; // 0x318
		::UnityEngine::Material* _hpMaterial; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetBtnClickedAction(::System::Action* callback, ::System::Action_1<::System::Int32>* roleCallback, ::System::Action* bangbooCallback, ::System::Action_1<::System::Int32>* bangbooClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETBTNCLICKEDACTION_OFFSET))(this, callback, roleCallback, bangbooCallback, bangbooClick);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetAvatarSelectIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETAVATARSELECTINDEX_OFFSET))(this, index);
		}

		::System::Void SetFocusState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_SETFOCUSSTATE_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIBabelRoleCardWidgetController_Context* _data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabelRoleCardWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, _data);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
