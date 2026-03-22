#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_B6908CCDCB8649EE___C_METHOD_1_3B7401801303BFFB_OFFSET UNITYSDK_OFFSET(0xD754F60)
#define CLASS_1_B6908CCDCB8649EE___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0xD754FC0)
#define CLASS_1_B6908CCDCB8649EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD754F10)
#define CLASS_1_B6908CCDCB8649EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD754F50)

inline static constexpr unsigned int Class_1_B6908CCDCB8649EE___c_TypeDefinitionIndex = 62350;

class Class_1_B6908CCDCB8649EE___c : public ::System::Object
{
public:
	static ::Class_1_B6908CCDCB8649EE___c** StaticGet___9()
	{
		return (::Class_1_B6908CCDCB8649EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6908CCDCB8649EE___c_TypeDefinitionIndex)->GetStaticField(0x39CC0);
	}
	static ::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6908CCDCB8649EE___c_TypeDefinitionIndex)->GetStaticField(0x39CC8);
	}
	static ::System::Func_2<::System::Int32, ::Enum_3_41536F26CBEE8D4C>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::System::Int32, ::Enum_3_41536F26CBEE8D4C>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6908CCDCB8649EE___c_TypeDefinitionIndex)->GetStaticField(0x39CD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6908CCDCB8649EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6908CCDCB8649EE___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* Method_1_3B7401801303BFFB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6908CCDCB8649EE___C_METHOD_1_3B7401801303BFFB_OFFSET))(this, a1);
	}

	::Enum_3_41536F26CBEE8D4C Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_41536F26CBEE8D4C(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6908CCDCB8649EE___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
