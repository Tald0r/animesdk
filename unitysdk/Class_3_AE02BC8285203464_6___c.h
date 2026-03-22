#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_6.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AE02BC8285203464_6___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x17DEB080)
#define CLASS_3_AE02BC8285203464_6___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x17DEB070)
#define CLASS_3_AE02BC8285203464_6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DEB020)
#define CLASS_3_AE02BC8285203464_6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEB060)

inline static constexpr unsigned int Class_3_AE02BC8285203464_6___c_TypeDefinitionIndex = 22986;

class Class_3_AE02BC8285203464_6___c : public ::System::Object
{
public:
	static ::Class_3_AE02BC8285203464_6___c** StaticGet___9()
	{
		return (::Class_3_AE02BC8285203464_6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE02BC8285203464_6___c_TypeDefinitionIndex)->GetStaticField(0x157F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_6___C__CTOR_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_6 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_6(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_6___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_96F6662CA3713095_6 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_6))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_6___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
