#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRamenStoreItemWidgetChildWindowController_AnimState.h"

class Class_2_208CC9941471731A_227;
class Class_2_79F6D62CE30E3F8E_117;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRamenStoreItemTipsInfoWidgetWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x73AF170)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x73B1130)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x73AF260)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x73B0DE0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73AF3B0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x73B0EF0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x73B0F60)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73AEDD0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73AF300)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_PLAYSELECTFADE_OFFSET UNITYSDK_OFFSET(0x73B0940)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SETRAMENDATA_OFFSET UNITYSDK_OFFSET(0x73AF4B0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0x73B1240)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x73B1330)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x73B1310)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__ONCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0x73B1340)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x73B1380)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x73B13F0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73B1460)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x73B14E0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x73B14F0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73B1570)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73B15D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex = 72442;

	class UIRamenStoreItemWidgetChildWindowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::UnityEngine::Material** StaticGet__unlockIconMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x36CC0);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon1Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x36CC8);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon2Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x36CD0);
		}
		static ::UnityEngine::Material** StaticGet__greyMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x36CD8);
		}
		static ::System::Int32* StaticGet__greyMatRefCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0xDB50);
		}
		// static const ::System::String* SELECT_FADEIN_ANIMATION; // 0x0
		// static const ::System::String* SELECT_FADEOUT_ANIMATION; // 0x0
		// static const ::System::String* RamenStoreTipsInfoFadeIn; // 0x0
		// static const ::System::String* RamenStoreTipsInfoFadeOut; // 0x0
		// static const ::System::String* RANDOM_ATTRIBUTE_DESC_KEY; // 0x0
		::System::Int32 currentId; // 0x2D0
		::Class_2_79F6D62CE30E3F8E_117* _view; // 0x2D8
		::Class_2_208CC9941471731A_227* _hollowBuffTemplate; // 0x2E0
		::Class_2_C1865A61828EE67A* _ramenModel; // 0x2E8
		::MoleMole::UIRamenStoreItemWidgetChildWindowController_AnimState _animState; // 0x2F0
		::MoleMole::UIRamenStoreItemTipsInfoWidgetWidgetController* _tipsInfo; // 0x2F8
		::MoleMole::UIWidgetController* _animWidget; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void SetRamenData(::System::Int32 ramenId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SETRAMENDATA_OFFSET))(this, ramenId);
		}

		::System::Void ShowEmpty(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SHOWEMPTY_OFFSET))(this, show);
		}

		::System::Void PlaySelectFade(::System::Boolean fadeIn, ::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_PLAYSELECTFADE_OFFSET))(this, fadeIn, immediately);
		}

		::System::Void _OnClick_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__ONCLICK_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
