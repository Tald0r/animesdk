#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_103.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_513.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_1_OFFSET UNITYSDK_OFFSET(0x16392C60)
#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_0149BFD35DA315B8_OFFSET UNITYSDK_OFFSET(0x16392AA0)
#define CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16392A90)

inline static constexpr unsigned int Class_2_D202B83AFEDC0267_1_TypeDefinitionIndex = 14276;

class Class_2_D202B83AFEDC0267_1 : public ::Class_1_EBCA2A4357C4C8BF_103
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_513 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_513, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET))(this, a1, a2);
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
