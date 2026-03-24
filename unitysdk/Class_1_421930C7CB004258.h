#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_421930C7CB004258_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x70045A0)
#define CLASS_1_421930C7CB004258_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x70047D0)
#define CLASS_1_421930C7CB004258_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x70048A0)
#define CLASS_1_421930C7CB004258_METHOD_1_75302AF7F211457A_OFFSET UNITYSDK_OFFSET(0x7004720)
#define CLASS_1_421930C7CB004258_METHOD_1_9E3FA7E6D9E95EAC_OFFSET UNITYSDK_OFFSET(0x7004420)
#define CLASS_1_421930C7CB004258_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x7004240)
#define CLASS_1_421930C7CB004258__CTOR_OFFSET UNITYSDK_OFFSET(0x7004230)

inline static constexpr unsigned int Class_1_421930C7CB004258_TypeDefinitionIndex = 52631;

class Class_1_421930C7CB004258 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::System::Action_2<::System::Boolean, ::System::Int32>* Field_1_1; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_9E3FA7E6D9E95EAC(::System::Action_2<::System::Boolean, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_9E3FA7E6D9E95EAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_75302AF7F211457A(::System::Action_2<::System::Boolean, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_75302AF7F211457A_OFFSET))(this, a1);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_1_286570692E8A7912()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_421930C7CB004258_METHOD_1_286570692E8A7912_OFFSET))(this);
	}
};
