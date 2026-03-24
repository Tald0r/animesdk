#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_8F6F43710765B0C1;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CLASS_1_8F6F43710765B0C1_CLASS_1_A2D10B286652916C_1_METHOD_1_A11C14D432727813_OFFSET UNITYSDK_OFFSET(0xA3DD990)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_A2D10B286652916C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DD980)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Class_1_A2D10B286652916C_1_TypeDefinitionIndex = 44535;

class Class_1_8F6F43710765B0C1_Class_1_A2D10B286652916C_1 : public ::System::Object
{
public:
	::Class_1_3002D7CF5FEE9D3A* Field_1_2; // 0x10
	::Class_1_8F6F43710765B0C1* Field_1_0; // 0x18
	::Enum_3_63CAB6C405C6C7B1 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_A2D10B286652916C_1__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Method_1_A11C14D432727813(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_A2D10B286652916C_1_METHOD_1_A11C14D432727813_OFFSET))(this, a1);
	}
};
