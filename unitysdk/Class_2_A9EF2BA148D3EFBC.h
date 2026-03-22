#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A6626BB27A1AA876.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"

class Class_1_FAB330A19FB8EDA0;

#define CLASS_2_A9EF2BA148D3EFBC_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x64C2FD0)
#define CLASS_2_A9EF2BA148D3EFBC_METHOD_2_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x64C3180)
#define CLASS_2_A9EF2BA148D3EFBC__CTOR_OFFSET UNITYSDK_OFFSET(0x64C3170)

inline static constexpr unsigned int Class_2_A9EF2BA148D3EFBC_TypeDefinitionIndex = 61750;

class Class_2_A9EF2BA148D3EFBC : public ::Class_1_A6626BB27A1AA876
{
public:
	::MoleMole::DisplayCase::DisplayBaseTransformData Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9EF2BA148D3EFBC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_FAB330A19FB8EDA0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + CLASS_2_A9EF2BA148D3EFBC_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE45EA3A177BC33B(::Class_1_FAB330A19FB8EDA0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + CLASS_2_A9EF2BA148D3EFBC_METHOD_2_DE45EA3A177BC33B_OFFSET))(this, a1);
	}
};
