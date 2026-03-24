#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"
#include "unitysdk/Share/EItemType.h"

class Class_2_208CC9941471731A_53;

#define CLASS_2_349ADC1104AA6944_3_METHOD_2_2DEAC7321A00774E_OFFSET UNITYSDK_OFFSET(0xBDA9960)
#define CLASS_2_349ADC1104AA6944_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA9970)

inline static constexpr unsigned int Class_2_349ADC1104AA6944_3_TypeDefinitionIndex = 69676;

class Class_2_349ADC1104AA6944_3 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_53* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_53*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_349ADC1104AA6944_3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Share::EItemType Method_2_2DEAC7321A00774E()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_349ADC1104AA6944_3_METHOD_2_2DEAC7321A00774E_OFFSET))(this);
	}
};
