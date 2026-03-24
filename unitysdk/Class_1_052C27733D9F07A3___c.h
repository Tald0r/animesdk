#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1AA1710B40AA6D3E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_052C27733D9F07A3___C_METHOD_1_A7F0DC7F81309ECC_OFFSET UNITYSDK_OFFSET(0xB4D4E80)
#define CLASS_1_052C27733D9F07A3___C_METHOD_1_C64C262B24D5CD7C_OFFSET UNITYSDK_OFFSET(0xB4D4CA0)
#define CLASS_1_052C27733D9F07A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D4C50)
#define CLASS_1_052C27733D9F07A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D4C90)

inline static constexpr unsigned int Class_1_052C27733D9F07A3___c_TypeDefinitionIndex = 80922;

class Class_1_052C27733D9F07A3___c : public ::System::Object
{
public:
	static ::Class_1_052C27733D9F07A3___c** StaticGet___9()
	{
		return (::Class_1_052C27733D9F07A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_052C27733D9F07A3___c_TypeDefinitionIndex)->GetStaticField(0x2D080);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::Struct_2_1AA1710B40AA6D3E>** StaticGet___9__28_1()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::Struct_2_1AA1710B40AA6D3E>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_052C27733D9F07A3___c_TypeDefinitionIndex)->GetStaticField(0x2D088);
	}
	static ::System::Func_1<::Struct_2_1AA1710B40AA6D3E>** StaticGet___9__28_0()
	{
		return (::System::Func_1<::Struct_2_1AA1710B40AA6D3E>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_052C27733D9F07A3___c_TypeDefinitionIndex)->GetStaticField(0x2D090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3___C__CTOR_OFFSET))(this);
	}

	::Struct_2_1AA1710B40AA6D3E Method_1_C64C262B24D5CD7C(::MoleMole::Battle::Entity* a1)
	{
		return ((::Struct_2_1AA1710B40AA6D3E(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3___C_METHOD_1_C64C262B24D5CD7C_OFFSET))(this, a1);
	}

	::Struct_2_1AA1710B40AA6D3E Method_1_A7F0DC7F81309ECC()
	{
		return ((::Struct_2_1AA1710B40AA6D3E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3___C_METHOD_1_A7F0DC7F81309ECC_OFFSET))(this);
	}
};
