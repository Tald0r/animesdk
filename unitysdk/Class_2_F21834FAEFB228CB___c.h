#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_69FE2A2F26EAE95C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F21834FAEFB228CB___C_METHOD_1_123DD3AD7C20E1C5_OFFSET UNITYSDK_OFFSET(0x1AE496A0)
#define CLASS_2_F21834FAEFB228CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE49650)
#define CLASS_2_F21834FAEFB228CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE49690)

inline static constexpr unsigned int Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex = 9223;

class Class_2_F21834FAEFB228CB___c : public ::System::Object
{
public:
	static ::Class_2_F21834FAEFB228CB___c** StaticGet___9()
	{
		return (::Class_2_F21834FAEFB228CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex)->GetStaticField(0x8290);
	}
	static ::System::Func_2<::Class_2_69FE2A2F26EAE95C*, ::System::Int32>** StaticGet___9__5_4()
	{
		return (::System::Func_2<::Class_2_69FE2A2F26EAE95C*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex)->GetStaticField(0x8298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_123DD3AD7C20E1C5(::Class_2_69FE2A2F26EAE95C* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C_METHOD_1_123DD3AD7C20E1C5_OFFSET))(this, a1);
	}
};
