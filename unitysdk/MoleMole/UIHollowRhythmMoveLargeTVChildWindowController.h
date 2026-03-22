#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_2_C72EFEEE926A8E9E;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x80B3710)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_JUDGERESULT_OFFSET UNITYSDK_OFFSET(0x80B3720)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x80B2D90)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCOMBOCHANGE_OFFSET UNITYSDK_OFFSET(0x80B34B0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x80B2F90)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONSHOWJUDGE_OFFSET UNITYSDK_OFFSET(0x80B3590)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x80B3030)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x80B2DA0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x80B30D0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x80B3140)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_JUDGERESULT_OFFSET UNITYSDK_OFFSET(0x80B3660)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x80B3810)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x80B3800)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__ONUIINIT_G__INITCOMBOTEXT_4_0_OFFSET UNITYSDK_OFFSET(0x80B2EA0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__SET_JUDGERESULT_G__JUDGERESULTTOGAMEOBJECT_19_0_OFFSET UNITYSDK_OFFSET(0x80B3730)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x80B3870)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x80B38E0)
#define MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x80B38F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex = 40506;

	class UIHollowRhythmMoveLargeTVChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_ResetAnimationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3C4F0);
		}
		static ::System::String** StaticGet_AddAnimationName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3C4F8);
		}
		static ::MoleMole::Vector2Int* StaticGet_DefaultRTSize()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIHollowRhythmMoveLargeTVChildWindowController_TypeDefinitionIndex)->GetStaticField(0xEEA0);
		}
		::Class_2_C72EFEEE926A8E9E* _view; // 0x2F8
		::System::Int32 _currentCombo; // 0x300
		::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult _judgeResult; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnValueChange(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONVALUECHANGE_OFFSET))(this, value);
		}

		::System::Void OnComboChange(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONCOMBOCHANGE_OFFSET))(this, eventArgs);
		}

		::System::Void OnShowJudge(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_ONSHOWJUDGE_OFFSET))(this, eventArgs);
		}

		::System::Int32 get_currentCombo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_CURRENTCOMBO_OFFSET))(this);
		}

		::System::Void set_currentCombo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_CURRENTCOMBO_OFFSET))(this, value);
		}

		::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult get_judgeResult()
		{
			return ((::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_GET_JUDGERESULT_OFFSET))(this);
		}

		::System::Void set_judgeResult(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER_SET_JUDGERESULT_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_g__InitComboText_4_0(::System::Int32 combo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__ONUIINIT_G__INITCOMBOTEXT_4_0_OFFSET))(this, combo);
		}

		::UnityEngine::GameObject* _set_judgeResult_g__judgeResultToGameObject_19_0(::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult judgeResult_inner)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER__SET_JUDGERESULT_G__JUDGERESULTTOGAMEOBJECT_19_0_OFFSET))(this, judgeResult_inner);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRHYTHMMOVELARGETVCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
