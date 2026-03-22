#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_97373C8E056325F8_METHOD_1_1E87171074AA7CDF_OFFSET UNITYSDK_OFFSET(0x9E39BC0)
#define CLASS_1_97373C8E056325F8_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9E39E50)
#define CLASS_1_97373C8E056325F8__CTOR_OFFSET UNITYSDK_OFFSET(0x9E39BB0)

inline static constexpr unsigned int Class_1_97373C8E056325F8_TypeDefinitionIndex = 58844;

class Class_1_97373C8E056325F8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97373C8E056325F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E87171074AA7CDF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97373C8E056325F8_METHOD_1_1E87171074AA7CDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97373C8E056325F8_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
