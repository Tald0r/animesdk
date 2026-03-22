#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOKENROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA91EC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenRowContext_TypeDefinitionIndex = 58095;

	class UIGeneralTokenRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* ExternalClickHandle; // 0x28
		::MoleMole::UITokenShowConfig* TokenShowConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
