#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

#define CLASS_2_4B0D186A1228FA4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7121050)
#define CLASS_2_4B0D186A1228FA4E_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x71210C0)
#define CLASS_2_4B0D186A1228FA4E_ONSTART_OFFSET UNITYSDK_OFFSET(0x7120FF0)
#define CLASS_2_4B0D186A1228FA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x71210B0)

inline static constexpr unsigned int Class_2_4B0D186A1228FA4E_TypeDefinitionIndex = 64120;

class Class_2_4B0D186A1228FA4E : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}
};
