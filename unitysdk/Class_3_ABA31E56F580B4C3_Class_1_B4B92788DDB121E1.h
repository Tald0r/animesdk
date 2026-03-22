#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_ABA31E56F580B4C3;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_3C6CBE5E29019127_OFFSET UNITYSDK_OFFSET(0x88DE680)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x88DE3C0)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x88DE430)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x88DE3B0)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1__CTOR_OFFSET UNITYSDK_OFFSET(0x88DE3A0)

inline static constexpr unsigned int Class_3_ABA31E56F580B4C3_Class_1_B4B92788DDB121E1_TypeDefinitionIndex = 70675;

class Class_3_ABA31E56F580B4C3_Class_1_B4B92788DDB121E1 : public ::System::Object
{
public:
	::Class_3_ABA31E56F580B4C3* Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_4; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_3C6CBE5E29019127(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::Class_3_ABA31E56F580B4C3* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::Class_3_ABA31E56F580B4C3*))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_B4B92788DDB121E1_METHOD_1_3C6CBE5E29019127_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
