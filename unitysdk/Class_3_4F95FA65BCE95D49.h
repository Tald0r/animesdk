#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6334351218D157D7.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"

namespace NodeGraph::MainCity { class NavigateContainer; }

#define CLASS_3_4F95FA65BCE95D49_METHOD_3_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x6EF0970)
#define CLASS_3_4F95FA65BCE95D49_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x6EF0960)
#define CLASS_3_4F95FA65BCE95D49__CTOR_OFFSET UNITYSDK_OFFSET(0x6EF0B20)

inline static constexpr unsigned int Class_3_4F95FA65BCE95D49_TypeDefinitionIndex = 48419;

class Class_3_4F95FA65BCE95D49 : public ::Class_2_6334351218D157D7<::NodeGraph::MainCity::NavigateContainer*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F95FA65BCE95D49__CTOR_OFFSET))(this);
	}

	::Enum_3_4D23D4D1211777E9 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_4D23D4D1211777E9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F95FA65BCE95D49_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F95FA65BCE95D49_METHOD_3_97889423B3D78768_OFFSET))(this);
	}
};
