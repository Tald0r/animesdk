#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerChatPlayWidgetController.h"

#define MOLEMOLE_UIQUESTIONSANSWERV3CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCB090)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV3ChatPlayWidgetController_TypeDefinitionIndex = 66774;

	class UIQuestionsAnswerV3ChatPlayWidgetController : public ::MoleMole::UIQuestionsAnswerChatPlayWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
