#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8289F2785D9AA990;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_00F951447225F66D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7B92280)
#define CLASS_1_00F951447225F66D__CTOR_OFFSET UNITYSDK_OFFSET(0x7B921D0)

inline static constexpr unsigned int Class_1_00F951447225F66D_TypeDefinitionIndex = 43891;

class Class_1_00F951447225F66D : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_8289F2785D9AA990*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F951447225F66D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F951447225F66D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
