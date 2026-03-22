#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STATETREECORE_STATETREECORE_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19BD8580)
#define STATETREECORE_STATETREECORE_GENTYPEREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD8590)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeCore_GenTypeRegister_TypeDefinitionIndex = 26920;

	class StateTreeCore_GenTypeRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECORE_GENTYPEREGISTER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECORE_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
