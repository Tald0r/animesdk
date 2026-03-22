#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BC1A0944B61E7BEE_METHOD_1_7B2BA56C32EAAA23_OFFSET UNITYSDK_OFFSET(0x99D0E00)
#define CLASS_1_BC1A0944B61E7BEE_METHOD_1_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x99D0D90)
#define CLASS_1_BC1A0944B61E7BEE__CTOR_OFFSET UNITYSDK_OFFSET(0x99D0D80)

inline static constexpr unsigned int Class_1_BC1A0944B61E7BEE_TypeDefinitionIndex = 47731;

class Class_1_BC1A0944B61E7BEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC1A0944B61E7BEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BC1A0944B61E7BEE_METHOD_1_7E692C4823C131A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B2BA56C32EAAA23(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC1A0944B61E7BEE_METHOD_1_7B2BA56C32EAAA23_OFFSET))(this, a1);
	}
};
