#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CC58CB58CA7EE5CF;

#define CLASS_3_CC58CB58CA7EE5CF___C_METHOD_1_2452637D7A9259DE_OFFSET UNITYSDK_OFFSET(0x1B405090)
#define CLASS_3_CC58CB58CA7EE5CF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B405040)
#define CLASS_3_CC58CB58CA7EE5CF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B405080)

inline static constexpr unsigned int Class_3_CC58CB58CA7EE5CF___c_TypeDefinitionIndex = 9400;

class Class_3_CC58CB58CA7EE5CF___c : public ::System::Object
{
public:
	static ::Class_3_CC58CB58CA7EE5CF___c** StaticGet___9()
	{
		return (::Class_3_CC58CB58CA7EE5CF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CC58CB58CA7EE5CF___c_TypeDefinitionIndex)->GetStaticField(0x86C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C__CTOR_OFFSET))(this);
	}

	::Class_3_CC58CB58CA7EE5CF* Method_1_2452637D7A9259DE()
	{
		return ((::Class_3_CC58CB58CA7EE5CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C_METHOD_1_2452637D7A9259DE_OFFSET))(this);
	}
};
