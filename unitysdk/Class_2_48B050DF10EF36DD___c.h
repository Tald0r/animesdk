#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_67;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_48B050DF10EF36DD___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x9E54600)
#define CLASS_2_48B050DF10EF36DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E545B0)
#define CLASS_2_48B050DF10EF36DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E545F0)

inline static constexpr unsigned int Class_2_48B050DF10EF36DD___c_TypeDefinitionIndex = 60890;

class Class_2_48B050DF10EF36DD___c : public ::System::Object
{
public:
	static ::Class_2_48B050DF10EF36DD___c** StaticGet___9()
	{
		return (::Class_2_48B050DF10EF36DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48B050DF10EF36DD___c_TypeDefinitionIndex)->GetStaticField(0x35F70);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_67*>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48B050DF10EF36DD___c_TypeDefinitionIndex)->GetStaticField(0x35F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48B050DF10EF36DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48B050DF10EF36DD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_67* a1, ::Class_2_208CC9941471731A_67* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_67*, ::Class_2_208CC9941471731A_67*))((::PBYTE)hIl2Cpp + CLASS_2_48B050DF10EF36DD___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
