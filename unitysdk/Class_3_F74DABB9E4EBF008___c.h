#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_30.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_F74DABB9E4EBF008___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1819E910)
#define CLASS_3_F74DABB9E4EBF008___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1819E900)
#define CLASS_3_F74DABB9E4EBF008___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1819E8B0)
#define CLASS_3_F74DABB9E4EBF008___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1819E8F0)

inline static constexpr unsigned int Class_3_F74DABB9E4EBF008___c_TypeDefinitionIndex = 21135;

class Class_3_F74DABB9E4EBF008___c : public ::System::Object
{
public:
	static ::Class_3_F74DABB9E4EBF008___c** StaticGet___9()
	{
		return (::Class_3_F74DABB9E4EBF008___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F74DABB9E4EBF008___c_TypeDefinitionIndex)->GetStaticField(0x18EA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F74DABB9E4EBF008___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F74DABB9E4EBF008___C__CTOR_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_30 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_30(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F74DABB9E4EBF008___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_0A3761FE34514D6C_30 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_30))((::PBYTE)hIl2Cpp + CLASS_3_F74DABB9E4EBF008___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
