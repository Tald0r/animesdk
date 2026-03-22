#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_91;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_302D18EE1CA1801A_OFFSET UNITYSDK_OFFSET(0xA46DC90)
#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0xA46DCB0)
#define CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA46DC40)
#define CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA46DC80)

inline static constexpr unsigned int Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex = 65398;

class Class_2_47F3EABB6C9CDECD___c : public ::System::Object
{
public:
	static ::System::Converter_2<::Class_2_208CC9941471731A_91*, ::System::String*>** StaticGet___9__58_0()
	{
		return (::System::Converter_2<::Class_2_208CC9941471731A_91*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x37490);
	}
	static ::Class_2_47F3EABB6C9CDECD___c** StaticGet___9()
	{
		return (::Class_2_47F3EABB6C9CDECD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x37498);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_91*>** StaticGet___9__57_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x374A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_302D18EE1CA1801A(::Class_2_208CC9941471731A_91* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_91*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_302D18EE1CA1801A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_91* a1, ::Class_2_208CC9941471731A_91* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_91*, ::Class_2_208CC9941471731A_91*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
