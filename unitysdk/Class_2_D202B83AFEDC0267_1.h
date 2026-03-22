#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_157.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_146.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_1_OFFSET UNITYSDK_OFFSET(0x1319FDB0)
#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_OFFSET UNITYSDK_OFFSET(0x1319FBF0)
#define CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1319FBE0)

inline static constexpr unsigned int Class_2_D202B83AFEDC0267_1_TypeDefinitionIndex = 12304;

class Class_2_D202B83AFEDC0267_1 : public ::Class_1_EBCA2A4357C4C8BF_157
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_146 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_146, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_0149BFD35DA315B8()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_0149BFD35DA315B8_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_1_OFFSET))(this);
	}
};
