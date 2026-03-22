#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_202.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_695.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AB0EB502868A1F2C_METHOD_2_4D4E2974111868D1_OFFSET UNITYSDK_OFFSET(0x182A48E0)
#define CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x182A4690)

inline static constexpr unsigned int Class_2_AB0EB502868A1F2C_TypeDefinitionIndex = 12545;

class Class_2_AB0EB502868A1F2C : public ::Class_1_5DA2E7556103D5A3_202
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_1; // 0xD8
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_0; // 0xE0
	::UnityEngine::Vector2 Field_2_2; // 0xE8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_695 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_695, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Method_2_4D4E2974111868D1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C_METHOD_2_4D4E2974111868D1_OFFSET))(this, a1);
	}
};
