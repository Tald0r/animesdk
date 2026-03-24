#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIQUESTIONSANSWERSCREENDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB528370)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenDetailContext_TypeDefinitionIndex = 69017;

	class UIQuestionsAnswerScreenDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 HSCNpcConfigId; // 0x28
		::System::Int32 EventConfigId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
