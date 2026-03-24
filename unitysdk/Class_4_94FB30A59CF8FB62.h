#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0F2597FCD35BD81C.h"

namespace MoleMole::Config { class ConfigSetAnimatorTriggerCommonNodeV2; }

#define CLASS_4_94FB30A59CF8FB62_METHOD_4_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0xB61FE60)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB61FD90)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xB61FDA0)
#define CLASS_4_94FB30A59CF8FB62__CTOR_OFFSET UNITYSDK_OFFSET(0xB6200B0)

inline static constexpr unsigned int Class_4_94FB30A59CF8FB62_TypeDefinitionIndex = 39774;

class Class_4_94FB30A59CF8FB62 : public ::Class_3_0F2597FCD35BD81C
{
public:
	::MoleMole::Config::ConfigSetAnimatorTriggerCommonNodeV2* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_9B1F2653496E5C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_9B1F2653496E5C47_OFFSET))(this);
	}
};
