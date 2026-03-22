#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIVIDEOSHOPSHOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD705FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopShowContext_TypeDefinitionIndex = 58014;

	class UIVideoshopShowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* titleText; // 0x28
		::System::String* iconPath; // 0x30
		::System::String* descText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
