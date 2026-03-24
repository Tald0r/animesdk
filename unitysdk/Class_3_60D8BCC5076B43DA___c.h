#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_60D8BCC5076B43DA;

#define CLASS_3_60D8BCC5076B43DA___C_METHOD_1_2452637D7A9259DE_OFFSET UNITYSDK_OFFSET(0x1AF9B060)
#define CLASS_3_60D8BCC5076B43DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF9B010)
#define CLASS_3_60D8BCC5076B43DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9B050)

inline static constexpr unsigned int Class_3_60D8BCC5076B43DA___c_TypeDefinitionIndex = 9429;

class Class_3_60D8BCC5076B43DA___c : public ::System::Object
{
public:
	static ::Class_3_60D8BCC5076B43DA___c** StaticGet___9()
	{
		return (::Class_3_60D8BCC5076B43DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_60D8BCC5076B43DA___c_TypeDefinitionIndex)->GetStaticField(0x8680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_60D8BCC5076B43DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60D8BCC5076B43DA___C__CTOR_OFFSET))(this);
	}

	::Class_3_60D8BCC5076B43DA* Method_1_2452637D7A9259DE()
	{
		return ((::Class_3_60D8BCC5076B43DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60D8BCC5076B43DA___C_METHOD_1_2452637D7A9259DE_OFFSET))(this);
	}
};
