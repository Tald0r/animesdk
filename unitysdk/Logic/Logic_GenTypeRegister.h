#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOGIC_LOGIC_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x8E54DC0)
#define LOGIC_LOGIC_GENTYPEREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E54E20)

namespace Logic
{
	inline static constexpr unsigned int Logic_GenTypeRegister_TypeDefinitionIndex = 71392;

	class Logic_GenTypeRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGIC_LOGIC_GENTYPEREGISTER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGIC_LOGIC_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
