#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DOFProfileContext; }

#define MOLEMOLE_COMMANDLINEDOF_METHOD_2_2133B72CEC412931_OFFSET UNITYSDK_OFFSET(0xF2BA6D0)
#define MOLEMOLE_COMMANDLINEDOF_METHOD_2_C9532B1FA6270727_OFFSET UNITYSDK_OFFSET(0xF2BA810)
#define MOLEMOLE_COMMANDLINEDOF__CTOR_OFFSET UNITYSDK_OFFSET(0xF2BA7D0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDOF_TypeDefinitionIndex = 53846;

	class CommandLineDOF : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::DOFProfileContext*, ::MoleMole::CommandLineDOF*>
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDOF* Method_2_2133B72CEC412931(::MoleMole::DOFProfileContext* a1)
		{
			return ((::MoleMole::CommandLineDOF*(*)(::PVOID, ::MoleMole::DOFProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF_METHOD_2_2133B72CEC412931_OFFSET))(this, a1);
		}

		::MoleMole::DOFProfileContext* Method_2_C9532B1FA6270727(::MoleMole::DOFProfileContext* a1)
		{
			return ((::MoleMole::DOFProfileContext*(*)(::PVOID, ::MoleMole::DOFProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF_METHOD_2_C9532B1FA6270727_OFFSET))(this, a1);
		}
	};
}
