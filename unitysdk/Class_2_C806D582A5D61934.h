#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_120.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_467.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C806D582A5D61934__CTOR_OFFSET UNITYSDK_OFFSET(0x18639740)

inline static constexpr unsigned int Class_2_C806D582A5D61934_TypeDefinitionIndex = 12301;

class Class_2_C806D582A5D61934 : public ::Class_1_5DA2E7556103D5A3_120
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0xA8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_467 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_467, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_C806D582A5D61934__CTOR_OFFSET))(this, a1, a2);
	}
};
