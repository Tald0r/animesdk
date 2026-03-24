#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1F5CCA39795F891E;

#define CLASS_3_1F5CCA39795F891E___C_METHOD_1_2452637D7A9259DE_OFFSET UNITYSDK_OFFSET(0x1B1EA010)
#define CLASS_3_1F5CCA39795F891E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1E9FC0)
#define CLASS_3_1F5CCA39795F891E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EA000)

inline static constexpr unsigned int Class_3_1F5CCA39795F891E___c_TypeDefinitionIndex = 9325;

class Class_3_1F5CCA39795F891E___c : public ::System::Object
{
public:
	static ::Class_3_1F5CCA39795F891E___c** StaticGet___9()
	{
		return (::Class_3_1F5CCA39795F891E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1F5CCA39795F891E___c_TypeDefinitionIndex)->GetStaticField(0x8210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1F5CCA39795F891E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F5CCA39795F891E___C__CTOR_OFFSET))(this);
	}

	::Class_3_1F5CCA39795F891E* Method_1_2452637D7A9259DE()
	{
		return ((::Class_3_1F5CCA39795F891E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F5CCA39795F891E___C_METHOD_1_2452637D7A9259DE_OFFSET))(this);
	}
};
