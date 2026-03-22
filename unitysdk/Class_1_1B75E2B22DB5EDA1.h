#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;
class Class_3_4C38211F5303CD66;

#define CLASS_1_1B75E2B22DB5EDA1_METHOD_1_6CDE6A0492C3F304_OFFSET UNITYSDK_OFFSET(0x8D0B620)
#define CLASS_1_1B75E2B22DB5EDA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D0B5E0)

inline static constexpr unsigned int Class_1_1B75E2B22DB5EDA1_TypeDefinitionIndex = 65812;

class Class_1_1B75E2B22DB5EDA1 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B75E2B22DB5EDA1_TypeDefinitionIndex)->GetStaticField(0x9640);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B75E2B22DB5EDA1_TypeDefinitionIndex)->GetStaticField(0x9644);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B75E2B22DB5EDA1__CCTOR_OFFSET))();
	}

	static ::Class_3_4C38211F5303CD66* Method_1_6CDE6A0492C3F304(::Class_2_DF2C726EEEEC912D* a1)
	{
		return ((::Class_3_4C38211F5303CD66*(*)(::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + CLASS_1_1B75E2B22DB5EDA1_METHOD_1_6CDE6A0492C3F304_OFFSET))(a1);
	}
};
