#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_687E049C26FE9BC4___C_METHOD_1_3C2541A7BCD4442E_OFFSET UNITYSDK_OFFSET(0x15ABA790)
#define CLASS_2_687E049C26FE9BC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ABA740)
#define CLASS_2_687E049C26FE9BC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA780)

inline static constexpr unsigned int Class_2_687E049C26FE9BC4___c_TypeDefinitionIndex = 47984;

class Class_2_687E049C26FE9BC4___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::Enum_3_340DE32BA097F66C>** StaticGet___9__33_0()
	{
		return (::System::Func_2<::System::String*, ::Enum_3_340DE32BA097F66C>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_687E049C26FE9BC4___c_TypeDefinitionIndex)->GetStaticField(0x3DF00);
	}
	static ::Class_2_687E049C26FE9BC4___c** StaticGet___9()
	{
		return (::Class_2_687E049C26FE9BC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_687E049C26FE9BC4___c_TypeDefinitionIndex)->GetStaticField(0x3DF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_687E049C26FE9BC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_687E049C26FE9BC4___C__CTOR_OFFSET))(this);
	}

	::Enum_3_340DE32BA097F66C Method_1_3C2541A7BCD4442E(::System::String* a1)
	{
		return ((::Enum_3_340DE32BA097F66C(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_687E049C26FE9BC4___C_METHOD_1_3C2541A7BCD4442E_OFFSET))(this, a1);
	}
};
