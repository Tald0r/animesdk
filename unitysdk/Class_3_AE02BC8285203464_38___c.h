#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AE02BC8285203464_38___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x182545E0)
#define CLASS_3_AE02BC8285203464_38___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x182545D0)
#define CLASS_3_AE02BC8285203464_38___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18254580)
#define CLASS_3_AE02BC8285203464_38___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182545C0)

inline static constexpr unsigned int Class_3_AE02BC8285203464_38___c_TypeDefinitionIndex = 21924;

class Class_3_AE02BC8285203464_38___c : public ::System::Object
{
public:
	static ::Class_3_AE02BC8285203464_38___c** StaticGet___9()
	{
		return (::Class_3_AE02BC8285203464_38___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE02BC8285203464_38___c_TypeDefinitionIndex)->GetStaticField(0xC200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_38___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_38___C__CTOR_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_1 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_38___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_96F6662CA3713095_1 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_1))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_38___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
