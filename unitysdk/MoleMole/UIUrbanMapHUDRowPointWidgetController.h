#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_E797ED60F2A88D54;
class Class_3_7472FB6CC4015359;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_BINDSPEEDTYPE_OFFSET UNITYSDK_OFFSET(0x7C58E30)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7C57D60)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x7C57ED0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x7C580D0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7C57DD0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7C587E0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C57F80)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_REFRESHUIPERFORM_OFFSET UNITYSDK_OFFSET(0x7C58540)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETGUIDEUIWARNNING_OFFSET UNITYSDK_OFFSET(0x7C58C70)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETICONWARNING_OFFSET UNITYSDK_OFFSET(0x7C58BB0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__BINDSPEEDTYPE_B__18_0_OFFSET UNITYSDK_OFFSET(0x7C592E0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C590F0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x7C59130)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_1_OFFSET UNITYSDK_OFFSET(0x7C591B0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x7C59430)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7C59490)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7C59500)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C59570)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDRowPointWidgetController_TypeDefinitionIndex = 62265;

	class UIUrbanMapHUDRowPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Single tweenScaleTime; // 0x2A0
		::System::Single tweenScaleSize; // 0x2A4
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x2A8
		::System::Boolean isWarningState; // 0x2B0
		::DG::Tweening::Tween* warningTween; // 0x2B8
		::UnityEngine::RectTransform* targetImgTran; // 0x2C0
		::UnityEngine::RectTransform* transWarningTrans; // 0x2C8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_E797ED60F2A88D54* get__viewModel()
		{
			return ((::Class_2_E797ED60F2A88D54*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshUIPerform(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_REFRESHUIPERFORM_OFFSET))(this, show);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean SetGuideUIWarnning(::System::Object* body)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETGUIDEUIWARNNING_OFFSET))(this, body);
		}

		::System::Void SetIconWarning(::System::Boolean state, ::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETICONWARNING_OFFSET))(this, state, speedType, id);
		}

		::System::Void BindSpeedType(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_BINDSPEEDTYPE_OFFSET))(this, speedType, id);
		}

		::System::Void _OnUIInit_b__12_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__12_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_1_OFFSET))(this, args);
		}

		::System::Void _BindSpeedType_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__BINDSPEEDTYPE_B__18_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
