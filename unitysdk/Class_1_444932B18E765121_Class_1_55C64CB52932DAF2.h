#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }

#define CLASS_1_444932B18E765121_CLASS_1_55C64CB52932DAF2_METHOD_1_23A824DC39905D86_OFFSET UNITYSDK_OFFSET(0x776C800)
#define CLASS_1_444932B18E765121_CLASS_1_55C64CB52932DAF2__CTOR_OFFSET UNITYSDK_OFFSET(0x776C7F0)

inline static constexpr unsigned int Class_1_444932B18E765121_Class_1_55C64CB52932DAF2_TypeDefinitionIndex = 38642;

class Class_1_444932B18E765121_Class_1_55C64CB52932DAF2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_55C64CB52932DAF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_23A824DC39905D86(::MoleMole::Config::ConfigVentCrawl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_55C64CB52932DAF2_METHOD_1_23A824DC39905D86_OFFSET))(this, a1);
	}
};
