#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DpiFactorProfileContext; }

#define MOLEMOLE_COMMANDLINEDPIFACTOR_METHOD_2_636A411572909B7F_OFFSET UNITYSDK_OFFSET(0x916F550)
#define MOLEMOLE_COMMANDLINEDPIFACTOR_METHOD_2_96BB3F4580463B05_OFFSET UNITYSDK_OFFSET(0x916F410)
#define MOLEMOLE_COMMANDLINEDPIFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x916F510)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDpiFactor_TypeDefinitionIndex = 59923;

	class CommandLineDpiFactor : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::DpiFactorProfileContext*, ::MoleMole::CommandLineDpiFactor*>
	{
	public:
		::System::Nullable_1<::System::Single> DpiFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDpiFactor* Method_2_96BB3F4580463B05(::MoleMole::DpiFactorProfileContext* a1)
		{
			return ((::MoleMole::CommandLineDpiFactor*(*)(::PVOID, ::MoleMole::DpiFactorProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR_METHOD_2_96BB3F4580463B05_OFFSET))(this, a1);
		}

		::MoleMole::DpiFactorProfileContext* Method_2_636A411572909B7F(::MoleMole::DpiFactorProfileContext* a1)
		{
			return ((::MoleMole::DpiFactorProfileContext*(*)(::PVOID, ::MoleMole::DpiFactorProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR_METHOD_2_636A411572909B7F_OFFSET))(this, a1);
		}
	};
}
