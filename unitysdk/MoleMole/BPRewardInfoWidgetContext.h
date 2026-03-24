#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBPPagePageController; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_BPREWARDINFOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A3700)

namespace MoleMole
{
	inline static constexpr unsigned int BPRewardInfoWidgetContext_TypeDefinitionIndex = 79598;

	class BPRewardInfoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* advanceBtnClick; // 0x28
		::MoleMole::UIBPPagePageController* bpPageController; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BPREWARDINFOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
