#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FF2ECD13EC40B5E1___C_METHOD_1_A69B343AACEF858F_OFFSET UNITYSDK_OFFSET(0x9E34920)
#define CLASS_1_FF2ECD13EC40B5E1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E348D0)
#define CLASS_1_FF2ECD13EC40B5E1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E34910)

inline static constexpr unsigned int Class_1_FF2ECD13EC40B5E1___c_TypeDefinitionIndex = 75320;

class Class_1_FF2ECD13EC40B5E1___c : public ::System::Object
{
public:
	static ::Class_1_FF2ECD13EC40B5E1___c** StaticGet___9()
	{
		return (::Class_1_FF2ECD13EC40B5E1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF2ECD13EC40B5E1___c_TypeDefinitionIndex)->GetStaticField(0x39F50);
	}
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__31_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF2ECD13EC40B5E1___c_TypeDefinitionIndex)->GetStaticField(0x39F58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A69B343AACEF858F(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_FF2ECD13EC40B5E1___C_METHOD_1_A69B343AACEF858F_OFFSET))(this, a1, a2);
	}
};
