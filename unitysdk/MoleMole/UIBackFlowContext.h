#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FFD2BFBAA17829FB;
namespace MoleMole { class UIActivityReturnPageController; }

#define MOLEMOLE_UIBACKFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBED40D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackFlowContext_TypeDefinitionIndex = 48276;

	class UIBackFlowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIActivityReturnPageController* parentController; // 0x28
		::Class_1_FFD2BFBAA17829FB* backFlowActivityData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKFLOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
