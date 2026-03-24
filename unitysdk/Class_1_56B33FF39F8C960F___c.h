#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define CLASS_1_56B33FF39F8C960F___C_METHOD_1_84C4315E9454E5D3_OFFSET UNITYSDK_OFFSET(0xB68C650)
#define CLASS_1_56B33FF39F8C960F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB68C600)
#define CLASS_1_56B33FF39F8C960F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB68C640)

inline static constexpr unsigned int Class_1_56B33FF39F8C960F___c_TypeDefinitionIndex = 48581;

class Class_1_56B33FF39F8C960F___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__7_2()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56B33FF39F8C960F___c_TypeDefinitionIndex)->GetStaticField(0x3E720);
	}
	static ::Class_1_56B33FF39F8C960F___c** StaticGet___9()
	{
		return (::Class_1_56B33FF39F8C960F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56B33FF39F8C960F___c_TypeDefinitionIndex)->GetStaticField(0x3E728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56B33FF39F8C960F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56B33FF39F8C960F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84C4315E9454E5D3(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_56B33FF39F8C960F___C_METHOD_1_84C4315E9454E5D3_OFFSET))(this, a1);
	}
};
