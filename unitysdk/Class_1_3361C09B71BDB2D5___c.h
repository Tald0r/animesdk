#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3361C09B71BDB2D5___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x6AC9FC0)
#define CLASS_1_3361C09B71BDB2D5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AC9F70)
#define CLASS_1_3361C09B71BDB2D5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC9FB0)

inline static constexpr unsigned int Class_1_3361C09B71BDB2D5___c_TypeDefinitionIndex = 71747;

class Class_1_3361C09B71BDB2D5___c : public ::System::Object
{
public:
	static ::Class_1_3361C09B71BDB2D5___c** StaticGet___9()
	{
		return (::Class_1_3361C09B71BDB2D5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3361C09B71BDB2D5___c_TypeDefinitionIndex)->GetStaticField(0x45990);
	}
	static ::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_1>** StaticGet___9__67_0()
	{
		return (::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3361C09B71BDB2D5___c_TypeDefinitionIndex)->GetStaticField(0x45998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_ABC67D4EFBF3BD9A_1 a1, ::Struct_2_ABC67D4EFBF3BD9A_1 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_ABC67D4EFBF3BD9A_1, ::Struct_2_ABC67D4EFBF3BD9A_1))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
