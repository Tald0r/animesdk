#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class VSyncProfileContext; }

#define MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_BBEB22AFF699E501_OFFSET UNITYSDK_OFFSET(0x94E9EF0)
#define MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_F7068DE2A441A97B_OFFSET UNITYSDK_OFFSET(0x94EA030)
#define MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x94E9FF0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVSync_TypeDefinitionIndex = 54060;

	class CommandLineVSync : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::VSyncProfileContext*, ::MoleMole::CommandLineVSync*>
	{
	public:
		::System::Nullable_1<::System::Boolean> IsEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVSync* Method_2_BBEB22AFF699E501(::MoleMole::VSyncProfileContext* a1)
		{
			return ((::MoleMole::CommandLineVSync*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_BBEB22AFF699E501_OFFSET))(this, a1);
		}

		::MoleMole::VSyncProfileContext* Method_2_F7068DE2A441A97B(::MoleMole::VSyncProfileContext* a1)
		{
			return ((::MoleMole::VSyncProfileContext*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_METHOD_2_F7068DE2A441A97B_OFFSET))(this, a1);
		}
	};
}
