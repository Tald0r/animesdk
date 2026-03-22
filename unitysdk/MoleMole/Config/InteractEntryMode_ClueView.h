#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xEC43840)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xEC43790)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xEC43940)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xEC43950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryMode_ClueView_TypeDefinitionIndex = 73284;

	class InteractEntryMode_ClueView : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Int32 ClueTemplateId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET))(this);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}
	};
}
