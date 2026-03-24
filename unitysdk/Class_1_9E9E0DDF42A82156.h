#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E9E0DDF42A82156__CTOR_OFFSET UNITYSDK_OFFSET(0x19709450)

inline static constexpr unsigned int Class_1_9E9E0DDF42A82156_TypeDefinitionIndex = 81906;

class Class_1_9E9E0DDF42A82156 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9E0DDF42A82156__CTOR_OFFSET))(this);
	}
};
