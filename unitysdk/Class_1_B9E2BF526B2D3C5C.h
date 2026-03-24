#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;
class Class_3_4C38211F5303CD66;

#define CLASS_1_B9E2BF526B2D3C5C_METHOD_1_6CFAEAA9B715F18D_OFFSET UNITYSDK_OFFSET(0x94B4950)
#define CLASS_1_B9E2BF526B2D3C5C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94B4910)

inline static constexpr unsigned int Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex = 40353;

class Class_1_B9E2BF526B2D3C5C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex)->GetStaticField(0xCCA0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9E2BF526B2D3C5C_TypeDefinitionIndex)->GetStaticField(0xCCA4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9E2BF526B2D3C5C__CCTOR_OFFSET))();
	}

	static ::Class_3_4C38211F5303CD66* Method_1_6CFAEAA9B715F18D(::Class_2_DF2C726EEEEC912D* a1)
	{
		return ((::Class_3_4C38211F5303CD66*(*)(::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + CLASS_1_B9E2BF526B2D3C5C_METHOD_1_6CFAEAA9B715F18D_OFFSET))(a1);
	}
};
