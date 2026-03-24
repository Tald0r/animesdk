#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_C4639ACC6854C5F6_Class_1_855159C78A644662;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C4639ACC6854C5F6_CLASS_1_87BE89C39D962026_METHOD_1_5AF578BC6E51CC3C_OFFSET UNITYSDK_OFFSET(0x1B41B930)
#define CLASS_2_C4639ACC6854C5F6_CLASS_1_87BE89C39D962026__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41B920)

inline static constexpr unsigned int Class_2_C4639ACC6854C5F6_Class_1_87BE89C39D962026_TypeDefinitionIndex = 82248;

class Class_2_C4639ACC6854C5F6_Class_1_87BE89C39D962026 : public ::System::Object
{
public:
	::Class_2_C4639ACC6854C5F6_Class_1_855159C78A644662* Field_1_1; // 0x10
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4639ACC6854C5F6_CLASS_1_87BE89C39D962026__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5AF578BC6E51CC3C(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_C4639ACC6854C5F6_CLASS_1_87BE89C39D962026_METHOD_1_5AF578BC6E51CC3C_OFFSET))(this, a1, a2);
	}
};
