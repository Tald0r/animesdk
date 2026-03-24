#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_48E86EC80E515279___C_METHOD_1_AF056D8568701CDA_1_OFFSET UNITYSDK_OFFSET(0x15EED6D0)
#define CLASS_1_48E86EC80E515279___C_METHOD_1_AF056D8568701CDA_OFFSET UNITYSDK_OFFSET(0x15EED5A0)
#define CLASS_1_48E86EC80E515279___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EED550)
#define CLASS_1_48E86EC80E515279___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EED590)

inline static constexpr unsigned int Class_1_48E86EC80E515279___c_TypeDefinitionIndex = 16355;

class Class_1_48E86EC80E515279___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::String*, ::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*>** StaticGet___9__20_1()
	{
		return (::System::Converter_2<::System::String*, ::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48E86EC80E515279___c_TypeDefinitionIndex)->GetStaticField(0x8BB0);
	}
	static ::Class_1_48E86EC80E515279___c** StaticGet___9()
	{
		return (::Class_1_48E86EC80E515279___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48E86EC80E515279___c_TypeDefinitionIndex)->GetStaticField(0x8BB8);
	}
	static ::System::Converter_2<::System::String*, ::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*>** StaticGet___9__12_0()
	{
		return (::System::Converter_2<::System::String*, ::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48E86EC80E515279___c_TypeDefinitionIndex)->GetStaticField(0x8BC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48E86EC80E515279___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48E86EC80E515279___C__CTOR_OFFSET))(this);
	}

	::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C* Method_1_AF056D8568701CDA(::System::String* a1)
	{
		return ((::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_48E86EC80E515279___C_METHOD_1_AF056D8568701CDA_OFFSET))(this, a1);
	}

	::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C* Method_1_AF056D8568701CDA_1(::System::String* a1)
	{
		return ((::Class_2_7505FA4796F2EED2_Class_1_0DB3AC4CDCDDE59C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_48E86EC80E515279___C_METHOD_1_AF056D8568701CDA_1_OFFSET))(this, a1);
	}
};
