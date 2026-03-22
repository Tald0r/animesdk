#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALACTIVITYTAGLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A121D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagListContext_TypeDefinitionIndex = 38031;

	class UIGeneralActivityTagListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::System::String* tagReplacePath; // 0x30
		::System::Action* defaultDetailAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
