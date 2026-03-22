#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5DB5AF92324729C9;
namespace System { class Exception; }
namespace System { class TimeoutException; }
namespace System::Runtime::Serialization { class SerializationException; }

#define CLASS_1_C19E2B82A3A51F09_METHOD_1_068B48400B02974C_OFFSET UNITYSDK_OFFSET(0x9EDC540)
#define CLASS_1_C19E2B82A3A51F09_METHOD_1_52FA6EBFAE54CEFD_OFFSET UNITYSDK_OFFSET(0x9EDC650)
#define CLASS_1_C19E2B82A3A51F09_METHOD_1_D5F9B08CF2B9A861_OFFSET UNITYSDK_OFFSET(0x9EDC430)
#define CLASS_1_C19E2B82A3A51F09__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDC760)

inline static constexpr unsigned int Class_1_C19E2B82A3A51F09_TypeDefinitionIndex = 77664;

class Class_1_C19E2B82A3A51F09 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C19E2B82A3A51F09__CTOR_OFFSET))(this);
	}

	::Class_2_5DB5AF92324729C9* Method_1_D5F9B08CF2B9A861(::System::Runtime::Serialization::SerializationException* a1)
	{
		return ((::Class_2_5DB5AF92324729C9*(*)(::PVOID, ::System::Runtime::Serialization::SerializationException*))((::PBYTE)hIl2Cpp + CLASS_1_C19E2B82A3A51F09_METHOD_1_D5F9B08CF2B9A861_OFFSET))(this, a1);
	}

	::Class_2_5DB5AF92324729C9* Method_1_068B48400B02974C(::System::TimeoutException* a1)
	{
		return ((::Class_2_5DB5AF92324729C9*(*)(::PVOID, ::System::TimeoutException*))((::PBYTE)hIl2Cpp + CLASS_1_C19E2B82A3A51F09_METHOD_1_068B48400B02974C_OFFSET))(this, a1);
	}

	::Class_2_5DB5AF92324729C9* Method_1_52FA6EBFAE54CEFD(::System::Exception* a1)
	{
		return ((::Class_2_5DB5AF92324729C9*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_C19E2B82A3A51F09_METHOD_1_52FA6EBFAE54CEFD_OFFSET))(this, a1);
	}
};
