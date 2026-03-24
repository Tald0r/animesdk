#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9B4D66981F859BA7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F045B8C450CAFB48___C_METHOD_1_7D15773C476261B2_OFFSET UNITYSDK_OFFSET(0x750BDD0)
#define CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x750BD80)
#define CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x750BDC0)

inline static constexpr unsigned int Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex = 81194;

class Class_3_F045B8C450CAFB48___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_9B4D66981F859BA7*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_9B4D66981F859BA7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x34BB0);
	}
	static ::Class_3_F045B8C450CAFB48___c** StaticGet___9()
	{
		return (::Class_3_F045B8C450CAFB48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x34BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D15773C476261B2(::Class_3_9B4D66981F859BA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9B4D66981F859BA7*))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C_METHOD_1_7D15773C476261B2_OFFSET))(this, a1);
	}
};
