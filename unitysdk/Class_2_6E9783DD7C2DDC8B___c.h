#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_6E9783DD7C2DDC8B___C_METHOD_1_42A35205E8569413_OFFSET UNITYSDK_OFFSET(0xD6738F0)
#define CLASS_2_6E9783DD7C2DDC8B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6738A0)
#define CLASS_2_6E9783DD7C2DDC8B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6738E0)

inline static constexpr unsigned int Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex = 77148;

class Class_2_6E9783DD7C2DDC8B___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex)->GetStaticField(0x33270);
	}
	static ::Class_2_6E9783DD7C2DDC8B___c** StaticGet___9()
	{
		return (::Class_2_6E9783DD7C2DDC8B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex)->GetStaticField(0x33278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42A35205E8569413(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C_METHOD_1_42A35205E8569413_OFFSET))(this, a1);
	}
};
