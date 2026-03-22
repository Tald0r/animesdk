#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_UNREALTYPES_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AFC5D70)
#define UNREALTYPES_UNREALTYPES_GENTYPEREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5D80)

namespace UnrealTypes
{
	inline static constexpr unsigned int UnrealTypes_GenTypeRegister_TypeDefinitionIndex = 23998;

	class UnrealTypes_GenTypeRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_UNREALTYPES_GENTYPEREGISTER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_UNREALTYPES_GENTYPEREGISTER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
