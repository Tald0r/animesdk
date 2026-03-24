#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_23C516831AEB23FD_Enum_3_5D307A83FA4580DF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_23C516831AEB23FD_COMPARE_OFFSET UNITYSDK_OFFSET(0x97B76A0)
#define CLASS_1_23C516831AEB23FD_METHOD_1_1E8B7A0DF9B11373_OFFSET UNITYSDK_OFFSET(0x97B7870)
#define CLASS_1_23C516831AEB23FD_METHOD_1_B570425388F46D69_OFFSET UNITYSDK_OFFSET(0x97B7AE0)
#define CLASS_1_23C516831AEB23FD_METHOD_1_D0D5A1C679618141_OFFSET UNITYSDK_OFFSET(0x97B79A0)
#define CLASS_1_23C516831AEB23FD__CTOR_OFFSET UNITYSDK_OFFSET(0x97B7AD0)

inline static constexpr unsigned int Class_1_23C516831AEB23FD_TypeDefinitionIndex = 78622;

class Class_1_23C516831AEB23FD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Class_1_23C516831AEB23FD_Enum_3_5D307A83FA4580DF Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C516831AEB23FD__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23C516831AEB23FD_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1E8B7A0DF9B11373(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23C516831AEB23FD_METHOD_1_1E8B7A0DF9B11373_OFFSET))(this, a1);
	}

	::Class_1_23C516831AEB23FD* Method_1_B570425388F46D69(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::Class_1_23C516831AEB23FD*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_23C516831AEB23FD_METHOD_1_B570425388F46D69_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D0D5A1C679618141(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23C516831AEB23FD_METHOD_1_D0D5A1C679618141_OFFSET))(this, a1);
	}
};
