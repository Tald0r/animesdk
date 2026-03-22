#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_3.h"
#include "unitysdk/System/Object.h"

class Class_2_787A64751D1D3DEF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_787A64751D1D3DEF_CLASS_1_135DE542BD21A8D3_METHOD_1_9EEC788190D86B12_OFFSET UNITYSDK_OFFSET(0x62F8F60)
#define CLASS_2_787A64751D1D3DEF_CLASS_1_135DE542BD21A8D3__CTOR_OFFSET UNITYSDK_OFFSET(0x62F8F50)

inline static constexpr unsigned int Class_2_787A64751D1D3DEF_Class_1_135DE542BD21A8D3_TypeDefinitionIndex = 70704;

class Class_2_787A64751D1D3DEF_Class_1_135DE542BD21A8D3 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x18
	::Class_2_787A64751D1D3DEF* Field_1_2; // 0x20
	::Enum_3_DB663931210BBC27_3 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_CLASS_1_135DE542BD21A8D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9EEC788190D86B12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_CLASS_1_135DE542BD21A8D3_METHOD_1_9EEC788190D86B12_OFFSET))(this, a1);
	}
};
