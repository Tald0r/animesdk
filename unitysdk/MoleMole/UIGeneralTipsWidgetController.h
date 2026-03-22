#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_185CF183A4DBE553.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_ACC3BE6A5FB4D20F;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginTipsContextV2; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_CLOSETEXT_OFFSET UNITYSDK_OFFSET(0xD582720)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEIN_OFFSET UNITYSDK_OFFSET(0xD581DA0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0xD581E20)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FORCECLOSE_OFFSET UNITYSDK_OFFSET(0xD5828A0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xD582090)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETTIPSTYPPE_OFFSET UNITYSDK_OFFSET(0xD582830)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD5818B0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD581CC0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD5817D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD5819D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0xD582580)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0xD582150)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD582960)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD5829A0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD582A10)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD582A90)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD582AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController_TypeDefinitionIndex = 54089;

	class UIGeneralTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* MissionTipsFadeIn; // 0x0
		// static const ::System::String* MissionTipsFadeOut; // 0x0
		// static const ::System::Int32 StartMinSize = 0x2A; // 0x0
		::Class_2_ACC3BE6A5FB4D20F* _view; // 0x2A0
		::MoleMole::UIGeneralLoginTipsContextV2* _context; // 0x2A8
		::UnityEngine::Animation* _ani; // 0x2B0
		::UnityEngine::UI::VerticalLayoutGroup* _verticalLayoutGroup; // 0x2B8
		::UnityEngine::UI::HorizontalLayoutGroup* _infoLayoutGroup; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle handler; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle updateHandle; // 0x2CC
		::DG::Tweening::Tweener* contentSizeTween; // 0x2D0
		::UnityEngine::RectTransform* rootRect; // 0x2D8
		::System::Single fadeOutMoveTime; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEOUT_OFFSET))(this, call);
		}

		::System::String* GetShowText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETSHOWTEXT_OFFSET))(this);
		}

		::System::Void SetText(::System::String* str, ::System::Single time, ::System::Single fadeOutMoveTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETTEXT_OFFSET))(this, str, time, fadeOutMoveTime);
		}

		::System::Void SetImage(::System::String* imgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETIMAGE_OFFSET))(this, imgPath);
		}

		::System::Void CloseText(::System::Single time, ::System::Action* closeCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_CLOSETEXT_OFFSET))(this, time, closeCall);
		}

		::Enum_3_185CF183A4DBE553 GetTipsTyppe()
		{
			return ((::Enum_3_185CF183A4DBE553(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETTIPSTYPPE_OFFSET))(this);
		}

		::System::Void ForceClose(::System::Action* closeCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FORCECLOSE_OFFSET))(this, closeCall);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
