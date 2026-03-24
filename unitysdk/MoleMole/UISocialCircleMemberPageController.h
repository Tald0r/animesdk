#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_90B0F1DCAB724817;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0xD2A81C0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD2A7DA0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD2A7DB0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD2A7E20)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD2A83E0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD2A80A0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD2A7F20)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD2A84D0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0xD2A84E0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD2A8540)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD2A85B0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD2A8610)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD2A8640)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberPageController_TypeDefinitionIndex = 72980;

	class UISocialCircleMemberPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_90B0F1DCAB724817* get__viewModel()
		{
			return ((::Class_2_90B0F1DCAB724817*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
