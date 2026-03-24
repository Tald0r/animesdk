#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoInputAnimBlocker.h"

#define MOLEMOLE_MONOINPUTROOTLAYERANIMBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A87F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputRootLayerAnimBlocker_TypeDefinitionIndex = 76629;

	class MonoInputRootLayerAnimBlocker : public ::MoleMole::MonoInputAnimBlocker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTROOTLAYERANIMBLOCKER__CTOR_OFFSET))(this);
		}
	};
}
