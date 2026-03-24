#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerChatPlayWidgetController.h"

class Class_2_79AE422BA06F6D26_47_Class_2_C4F5657DA992F4EE;

#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET UNITYSDK_OFFSET(0xD3A5830)
#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A5B00)
#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER___BASE_REFRESHOPTION_OFFSET UNITYSDK_OFFSET(0xD3A5B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV2ChatPlayWidgetController_TypeDefinitionIndex = 41339;

	class UIQuestionsAnswerV2ChatPlayWidgetController : public ::MoleMole::UIQuestionsAnswerChatPlayWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshOption(::System::Int32 i, ::Class_2_79AE422BA06F6D26_47_Class_2_C4F5657DA992F4EE* view)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_79AE422BA06F6D26_47_Class_2_C4F5657DA992F4EE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET))(this, i, view);
		}

		::System::Void __base_RefreshOption(::System::Int32 P0, ::Class_2_79AE422BA06F6D26_47_Class_2_C4F5657DA992F4EE* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_79AE422BA06F6D26_47_Class_2_C4F5657DA992F4EE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER___BASE_REFRESHOPTION_OFFSET))(this, P0, P1);
		}
	};
}
