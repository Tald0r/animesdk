#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_4AAD3E1FA658E000___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6851F70)
#define CLASS_4_4AAD3E1FA658E000___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6851F20)
#define CLASS_4_4AAD3E1FA658E000___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6851F60)

inline static constexpr unsigned int Class_4_4AAD3E1FA658E000___c_TypeDefinitionIndex = 38382;

class Class_4_4AAD3E1FA658E000___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4AAD3E1FA658E000___c_TypeDefinitionIndex)->GetStaticField(0x308E0);
	}
	static ::Class_4_4AAD3E1FA658E000___c** StaticGet___9()
	{
		return (::Class_4_4AAD3E1FA658E000___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4AAD3E1FA658E000___c_TypeDefinitionIndex)->GetStaticField(0x308E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_4AAD3E1FA658E000___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4AAD3E1FA658E000___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4AAD3E1FA658E000___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
