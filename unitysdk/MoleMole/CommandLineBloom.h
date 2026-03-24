#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class BloomProfileContext; }

#define MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_5876DB29D7667FE1_OFFSET UNITYSDK_OFFSET(0xE2AE8A0)
#define MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_BA7979B69F8711E1_OFFSET UNITYSDK_OFFSET(0xE2AE9E0)
#define MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xE2AE9A0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineBloom_TypeDefinitionIndex = 58717;

	class CommandLineBloom : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::BloomProfileContext*, ::MoleMole::CommandLineBloom*>
	{
	public:
		::System::Nullable_1<::System::Boolean> IsBloomOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineBloom* Method_2_5876DB29D7667FE1(::MoleMole::BloomProfileContext* a1)
		{
			return ((::MoleMole::CommandLineBloom*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_5876DB29D7667FE1_OFFSET))(this, a1);
		}

		::MoleMole::BloomProfileContext* Method_2_BA7979B69F8711E1(::MoleMole::BloomProfileContext* a1)
		{
			return ((::MoleMole::BloomProfileContext*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_METHOD_2_BA7979B69F8711E1_OFFSET))(this, a1);
		}
	};
}
