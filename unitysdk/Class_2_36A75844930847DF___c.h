#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_36A75844930847DF___C_METHOD_1_AB4F6345C3E840D3_OFFSET UNITYSDK_OFFSET(0x9F92210)
#define CLASS_2_36A75844930847DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F921C0)
#define CLASS_2_36A75844930847DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F92200)

inline static constexpr unsigned int Class_2_36A75844930847DF___c_TypeDefinitionIndex = 64808;

class Class_2_36A75844930847DF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__9_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A75844930847DF___c_TypeDefinitionIndex)->GetStaticField(0x36A20);
	}
	static ::Class_2_36A75844930847DF___c** StaticGet___9()
	{
		return (::Class_2_36A75844930847DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A75844930847DF___c_TypeDefinitionIndex)->GetStaticField(0x36A28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_36A75844930847DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A75844930847DF___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A75844930847DF___C_METHOD_1_AB4F6345C3E840D3_OFFSET))(this);
	}
};
