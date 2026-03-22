#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_20910DEB255D80E4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA529170)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA529210)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA528C60)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA528D00)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_SHOWSCORECHANGE_OFFSET UNITYSDK_OFFSET(0xA528E30)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xA529510)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5298C0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER__SHOWSCORECHANGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xA5298F0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA529900)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA529970)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA5299F0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA529A50)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleBubbleScoreChangeV2WidgetController_TypeDefinitionIndex = 55236;

	class UICinemaSingleBubbleScoreChangeV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* _MINUS_SCORE_MATERIAL_PATH; // 0x0
		// static const ::System::String* _ADD_SCORE_MATERIAL_PATH; // 0x0
		// static const ::System::String* _FEVER_MATERIAL_PATH; // 0x0
		// static const ::System::String* _ANIM_NAME; // 0x0
		::Class_2_20910DEB255D80E4* _view; // 0x2A0
		::Foundation::AssetRequestHandle _handler; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowScoreChange(::System::Int32 basicScoreChange, ::System::Single multiplier, ::System::Boolean isInFever)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_SHOWSCORECHANGE_OFFSET))(this, basicScoreChange, multiplier, isInFever);
		}

		::System::Void ShowScore(::System::Int32 basicScore, ::System::Single multiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER_SHOWSCORE_OFFSET))(this, basicScore, multiplier);
		}

		::System::Void _ShowScoreChange_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER__SHOWSCORECHANGE_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
