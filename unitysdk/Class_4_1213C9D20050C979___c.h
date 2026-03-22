#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_4_1213C9D20050C979___C_METHOD_1_86ADBB4228161C74_1_OFFSET UNITYSDK_OFFSET(0x84D61C0)
#define CLASS_4_1213C9D20050C979___C_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x84D6100)
#define CLASS_4_1213C9D20050C979___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x84D60B0)
#define CLASS_4_1213C9D20050C979___C__CTOR_OFFSET UNITYSDK_OFFSET(0x84D60F0)

inline static constexpr unsigned int Class_4_1213C9D20050C979___c_TypeDefinitionIndex = 77365;

class Class_4_1213C9D20050C979___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1213C9D20050C979___c_TypeDefinitionIndex)->GetStaticField(0x29200);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1213C9D20050C979___c_TypeDefinitionIndex)->GetStaticField(0x29208);
	}
	static ::Class_4_1213C9D20050C979___c** StaticGet___9()
	{
		return (::Class_4_1213C9D20050C979___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1213C9D20050C979___c_TypeDefinitionIndex)->GetStaticField(0x29210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979___C_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979___C_METHOD_1_86ADBB4228161C74_1_OFFSET))(this);
	}
};
