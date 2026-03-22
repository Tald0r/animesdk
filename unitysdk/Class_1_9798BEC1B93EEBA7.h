#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_9798BEC1B93EEBA7_METHOD_1_E5DF1396D1283509_OFFSET UNITYSDK_OFFSET(0x72E75A0)
#define CLASS_1_9798BEC1B93EEBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x72E7590)

inline static constexpr unsigned int Class_1_9798BEC1B93EEBA7_TypeDefinitionIndex = 63793;

class Class_1_9798BEC1B93EEBA7 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9798BEC1B93EEBA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5DF1396D1283509(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_9798BEC1B93EEBA7_METHOD_1_E5DF1396D1283509_OFFSET))(this, a1, a2);
	}
};
