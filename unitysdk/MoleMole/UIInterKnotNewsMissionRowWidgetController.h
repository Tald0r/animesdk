#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_2181504E881DDEE4;
class Class_2_94D5884806027679_1;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInterKnotPageConfig; }
namespace MoleMole { class UIInterKnotPageConfig_MainCityQuestTypeRowConfig; }
namespace System { class Object; }

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAD8E780)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xAD8ED80)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD8EAD0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAD8FF60)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAD8EEB0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD8EB70)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD8E7A0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_PLAYSELECT_OFFSET UNITYSDK_OFFSET(0xAD902B0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET UNITYSDK_OFFSET(0xAD8FD50)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAD8F1D0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SETMANUAL_OFFSET UNITYSDK_OFFSET(0xAD8F070)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0xAD8FA10)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAD8E790)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0xAD8F0E0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SHOWNEW_OFFSET UNITYSDK_OFFSET(0xAD8EE10)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD904B0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAD904A0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__REFRESHTRACK_G__SETTRACKED_14_0_OFFSET UNITYSDK_OFFSET(0xAD8FF20)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xAD90500)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD90510)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAD90580)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAD905F0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD90670)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD906F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowWidgetController_TypeDefinitionIndex = 63183;

	class UIInterKnotNewsMissionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_RampColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEFE0);
		}
		static ::System::Int32* StaticGet_RampColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEFE4);
		}
		::Class_2_94D5884806027679_1* _view; // 0x2D0
		::MoleMole::UIInterKnotPageConfig* _Config_k__BackingField; // 0x2D8
		::DG::Tweening::Tweener* tweener; // 0x2E0
		::System::Boolean _firstTimeSelect; // 0x2E8
		::Class_1_2181504E881DDEE4* _manual; // 0x2F0
		::MoleMole::UIInterKnotPageConfig_MainCityQuestTypeRowConfig* _rowConfig; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::MoleMole::UIInterKnotPageConfig* get_Config()
		{
			return ((::MoleMole::UIInterKnotPageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::MoleMole::UIInterKnotPageConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetManual(::Class_1_2181504E881DDEE4* manual)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SETMANUAL_OFFSET))(this, manual);
		}

		::System::Void ShowEmpty(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SHOWEMPTY_OFFSET))(this, empty);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ShowNew(::System::Boolean s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SHOWNEW_OFFSET))(this, s);
		}

		::System::Void RefreshTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void PlaySelect(::System::Boolean isSelect, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_PLAYSELECT_OFFSET))(this, isSelect, anim);
		}

		::System::Void SetNameText(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER_SETNAMETEXT_OFFSET))(this, selected);
		}

		::System::Void _RefreshTrack_g__SetTracked_14_0(::System::Boolean tracked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER__REFRESHTRACK_G__SETTRACKED_14_0_OFFSET))(this, tracked);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
