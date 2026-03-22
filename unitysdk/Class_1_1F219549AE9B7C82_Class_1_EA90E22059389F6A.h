#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A_METHOD_1_A36A663AAAEECCC3_OFFSET UNITYSDK_OFFSET(0x64FFEF0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x65000C0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x64FFEE0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_EA90E22059389F6A_TypeDefinitionIndex = 57049;

class Class_1_1F219549AE9B7C82_Class_1_EA90E22059389F6A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action* Field_1_1; // 0x20
	::System::Int64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A36A663AAAEECCC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A_METHOD_1_A36A663AAAEECCC3_OFFSET))(this);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_EA90E22059389F6A_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}
};
