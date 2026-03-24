#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_877AA22B04AFB81F_1;
class Class_2_4ADD0419C7E71A92;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONCLICKACTIVITYROWBUTTON_OFFSET UNITYSDK_OFFSET(0x6CAB810)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x6CAAD90)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x6CAB090)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CAAE30)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6CAACF0)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_REFRESHCAROUSELVIEW_OFFSET UNITYSDK_OFFSET(0x6CAB300)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x6CAB900)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x6CAB940)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x6CAB9B0)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6CABA30)
#define MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6CABAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityActivityRowWidgetController_TypeDefinitionIndex = 40219;

	class UIMainCityActivityRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4ADD0419C7E71A92* _view; // 0x2D0
		::Class_1_877AA22B04AFB81F_1* uiCarouselData; // 0x2D8
		::UnityEngine::AnimationCurve* motionOffsetCurve; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle motionHandle; // 0x2E8
		::System::UInt32 activityID; // 0x2EC
		::System::Int32 carouselPriority; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshCarouselView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_REFRESHCAROUSELVIEW_OFFSET))(this);
		}

		::System::Void OnClickActivityRowButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER_ONCLICKACTIVITYROWBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYACTIVITYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
