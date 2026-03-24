#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_56FC0A9EBED64C0D___C_METHOD_1_02D2BD8F73A8BDF8_OFFSET UNITYSDK_OFFSET(0x8A22CC0)
#define CLASS_1_56FC0A9EBED64C0D___C_METHOD_1_5811EC453E0B08A7_OFFSET UNITYSDK_OFFSET(0x8A22CD0)
#define CLASS_1_56FC0A9EBED64C0D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A22C70)
#define CLASS_1_56FC0A9EBED64C0D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A22CB0)

inline static constexpr unsigned int Class_1_56FC0A9EBED64C0D___c_TypeDefinitionIndex = 48678;

class Class_1_56FC0A9EBED64C0D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Enum_3_41536F26CBEE8D4C, ::Enum_3_41536F26CBEE8D4C>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Enum_3_41536F26CBEE8D4C, ::Enum_3_41536F26CBEE8D4C>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC0A9EBED64C0D___c_TypeDefinitionIndex)->GetStaticField(0x37FA0);
	}
	static ::Class_1_56FC0A9EBED64C0D___c** StaticGet___9()
	{
		return (::Class_1_56FC0A9EBED64C0D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC0A9EBED64C0D___c_TypeDefinitionIndex)->GetStaticField(0x37FA8);
	}
	static ::System::Func_2<::Enum_3_41536F26CBEE8D4C, ::System::String*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::Enum_3_41536F26CBEE8D4C, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC0A9EBED64C0D___c_TypeDefinitionIndex)->GetStaticField(0x37FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D___C__CTOR_OFFSET))(this);
	}

	::Enum_3_41536F26CBEE8D4C Method_1_02D2BD8F73A8BDF8(::Enum_3_41536F26CBEE8D4C a1)
	{
		return ((::Enum_3_41536F26CBEE8D4C(*)(::PVOID, ::Enum_3_41536F26CBEE8D4C))((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D___C_METHOD_1_02D2BD8F73A8BDF8_OFFSET))(this, a1);
	}

	::System::String* Method_1_5811EC453E0B08A7(::Enum_3_41536F26CBEE8D4C a1)
	{
		return ((::System::String*(*)(::PVOID, ::Enum_3_41536F26CBEE8D4C))((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D___C_METHOD_1_5811EC453E0B08A7_OFFSET))(this, a1);
	}
};
