#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_587;
class Class_2_953339A75F81ED52;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBD2D510)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBD2D5B0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBD2D470)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET UNITYSDK_OFFSET(0xBD2E280)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0xBD2DCE0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBD2D690)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD2E3A0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD2E310)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBD2E3E0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBD2E450)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBD2E4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMessageRowWidgetController_TypeDefinitionIndex = 46527;

	class UIInterKnotMessageRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_NormalFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x40730);
		}
		static ::System::String** StaticGet_PlayerFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x40738);
		}
		::Class_2_953339A75F81ED52* _view; // 0x2A0
		::System::String* _currentFadeInAnim; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* reply, ::System::Int32 floor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, reply, floor);
		}

		::System::Void RefreshView_1(::Class_2_208CC9941471731A_587* template_, ::System::Int32 customFloor, ::System::Boolean replyAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_587*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, template_, customFloor, replyAnimation);
		}

		::System::Void PlayInterKnotMessageRowFadeInAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
