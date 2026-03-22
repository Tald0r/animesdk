#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_2_4F8BE1B3768D4BBD;
class Class_2_9E3E3CDA608A4F58;
class Class_4_3D4EFA6B3CC691CC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET_ISTARGETINVIEWPORT_OFFSET UNITYSDK_OFFSET(0xBE6E420)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBE6E3B0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBE6E6C0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ISINVIEWPORT_OFFSET UNITYSDK_OFFSET(0xBE6F960)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE6F220)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBE6E920)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE6EFD0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITSELECTED_OFFSET UNITYSDK_OFFSET(0xBE704C0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET UNITYSDK_OFFSET(0xBE701D0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE70800)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__INITAUTODISPOSEDATABIND_B__12_0_OFFSET UNITYSDK_OFFSET(0xBE70830)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__13_0_OFFSET UNITYSDK_OFFSET(0xBE70A30)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBE70C50)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBE70CB0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE70D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyLockOnWidgetController_TypeDefinitionIndex = 49755;

	class UIMonsterFantasyLockOnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* FADEIN_ANIM; // 0x0
		// static const ::System::String* FADEOUT_ANIM; // 0x0
		::Class_4_3D4EFA6B3CC691CC* _ctx; // 0x2A0
		::UnityEngine::RectTransform* _viewport; // 0x2A8
		::UnityEngine::RectTransform* _rectTrans; // 0x2B0
		::Class_2_9E3E3CDA608A4F58* _root; // 0x2B8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2C0
		::UnityEngine::Transform* _lastFollowTarget; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4F8BE1B3768D4BBD* get__viewModel()
		{
			return ((::Class_2_4F8BE1B3768D4BBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsTargetInViewport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET_ISTARGETINVIEWPORT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUnitTurnStart(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET))(this, args);
		}

		::System::Void OnUnitSelected(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITSELECTED_OFFSET))(this, args);
		}

		::System::Boolean IsInViewport(::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector2& calibratedPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ISINVIEWPORT_OFFSET))(this, worldPos, calibratedPos);
		}

		::System::Void _InitAutoDisposeDataBind_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__INITAUTODISPOSEDATABIND_B__12_0_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__13_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
