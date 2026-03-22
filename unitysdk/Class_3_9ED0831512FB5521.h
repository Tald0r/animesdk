#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

#define CLASS_3_9ED0831512FB5521_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC5454F0)
#define CLASS_3_9ED0831512FB5521_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xC5452D0)
#define CLASS_3_9ED0831512FB5521__CTOR_OFFSET UNITYSDK_OFFSET(0xC5454D0)

inline static constexpr unsigned int Class_3_9ED0831512FB5521_TypeDefinitionIndex = 62101;

class Class_3_9ED0831512FB5521 : public ::Class_2_F33340E023067DAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED0831512FB5521__CTOR_OFFSET))(this);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED0831512FB5521_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED0831512FB5521_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
