#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DCC6781B626BD817;

#define CLASS_3_DCC6781B626BD817___C_METHOD_1_2452637D7A9259DE_OFFSET UNITYSDK_OFFSET(0x1B2EB030)
#define CLASS_3_DCC6781B626BD817___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2EAFE0)
#define CLASS_3_DCC6781B626BD817___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EB020)

inline static constexpr unsigned int Class_3_DCC6781B626BD817___c_TypeDefinitionIndex = 9269;

class Class_3_DCC6781B626BD817___c : public ::System::Object
{
public:
	static ::Class_3_DCC6781B626BD817___c** StaticGet___9()
	{
		return (::Class_3_DCC6781B626BD817___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DCC6781B626BD817___c_TypeDefinitionIndex)->GetStaticField(0x8780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C__CTOR_OFFSET))(this);
	}

	::Class_3_DCC6781B626BD817* Method_1_2452637D7A9259DE()
	{
		return ((::Class_3_DCC6781B626BD817*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C_METHOD_1_2452637D7A9259DE_OFFSET))(this);
	}
};
