#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_176;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x8258640)
#define CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x82585F0)
#define CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8258630)

inline static constexpr unsigned int Class_2_C1865A61828EE67A___c_TypeDefinitionIndex = 63930;

class Class_2_C1865A61828EE67A___c : public ::System::Object
{
public:
	static ::Class_2_C1865A61828EE67A___c** StaticGet___9()
	{
		return (::Class_2_C1865A61828EE67A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x38AB0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_176*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_176*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x38AB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_176* a1, ::Class_2_208CC9941471731A_176* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_176*, ::Class_2_208CC9941471731A_176*))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
