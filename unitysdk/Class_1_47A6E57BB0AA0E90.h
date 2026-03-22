#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3C27FB03C7F640D0_14;
namespace System { class Action; }

#define CLASS_1_47A6E57BB0AA0E90_METHOD_1_583F1446ECB3FC58_OFFSET UNITYSDK_OFFSET(0x7192CE0)
#define CLASS_1_47A6E57BB0AA0E90_METHOD_1_678D73C32AB0B7F4_OFFSET UNITYSDK_OFFSET(0x7192A90)
#define CLASS_1_47A6E57BB0AA0E90__CTOR_OFFSET UNITYSDK_OFFSET(0x7192CD0)

inline static constexpr unsigned int Class_1_47A6E57BB0AA0E90_TypeDefinitionIndex = 44018;

class Class_1_47A6E57BB0AA0E90 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47A6E57BB0AA0E90__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_678D73C32AB0B7F4(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_47A6E57BB0AA0E90_METHOD_1_678D73C32AB0B7F4_OFFSET))(this, a1);
	}

	static ::Class_1_47A6E57BB0AA0E90* Method_1_583F1446ECB3FC58(::Class_3_3C27FB03C7F640D0_14* a1)
	{
		return ((::Class_1_47A6E57BB0AA0E90*(*)(::Class_3_3C27FB03C7F640D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_47A6E57BB0AA0E90_METHOD_1_583F1446ECB3FC58_OFFSET))(a1);
	}
};
