#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_0591F49F42E285A4;

#define MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B7A40)

namespace MoleMole
{
	inline static constexpr unsigned int InterKnotPlayerPostQuestRowContext_TypeDefinitionIndex = 78818;

	class InterKnotPlayerPostQuestRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_0591F49F42E285A4* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
