#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD.h"
#include "unitysdk/Struct_2_295094A66D5C0F60.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_B86ADEDB38C3FD4A;
class Class_2_A8F5ABF31E066ED4;
class Class_2_EB371C0ADFD560F1_Class_2_B22C3042ABDEAF7D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57_METHOD_2_0D73B3F289BDA312_OFFSET UNITYSDK_OFFSET(0x99F8530)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99F84D0)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57__CTOR_OFFSET UNITYSDK_OFFSET(0x99F8AA0)

inline static constexpr unsigned int Class_1_B86ADEDB38C3FD4A_Class_2_C7DA42D695198B57_TypeDefinitionIndex = 45044;

class Class_1_B86ADEDB38C3FD4A_Class_2_C7DA42D695198B57 : public ::Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_EB371C0ADFD560F1_Class_2_B22C3042ABDEAF7D* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_2; // 0x68
	::System::Int32 Field_2_4; // 0x70
	::UnityEngine::Color Field_2_3; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0D73B3F289BDA312(::Class_1_B86ADEDB38C3FD4A* a1, ::Struct_2_295094A66D5C0F60& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B86ADEDB38C3FD4A*, ::Struct_2_295094A66D5C0F60&))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_2_C7DA42D695198B57_METHOD_2_0D73B3F289BDA312_OFFSET))(this, a1, a2);
	}
};
