#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_164;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x8241CD0)
#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_EE00ECDAFEEDC246_OFFSET UNITYSDK_OFFSET(0x8241CB0)
#define CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8241C60)
#define CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8241CA0)

inline static constexpr unsigned int Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex = 63481;

class Class_2_47F3EABB6C9CDECD___c : public ::System::Object
{
public:
	static ::Class_2_47F3EABB6C9CDECD___c** StaticGet___9()
	{
		return (::Class_2_47F3EABB6C9CDECD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x38A00);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_164*>** StaticGet___9__58_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_164*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x38A08);
	}
	static ::System::Converter_2<::Class_2_208CC9941471731A_164*, ::System::String*>** StaticGet___9__59_0()
	{
		return (::System::Converter_2<::Class_2_208CC9941471731A_164*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x38A10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_EE00ECDAFEEDC246(::Class_2_208CC9941471731A_164* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_164*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_EE00ECDAFEEDC246_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_164* a1, ::Class_2_208CC9941471731A_164* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_164*, ::Class_2_208CC9941471731A_164*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
