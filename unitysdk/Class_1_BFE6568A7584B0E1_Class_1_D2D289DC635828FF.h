#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }

#define CLASS_1_BFE6568A7584B0E1_CLASS_1_D2D289DC635828FF_METHOD_1_F4412B44745A2BBD_OFFSET UNITYSDK_OFFSET(0x6CEEBD0)
#define CLASS_1_BFE6568A7584B0E1_CLASS_1_D2D289DC635828FF__CTOR_OFFSET UNITYSDK_OFFSET(0x6CEEBC0)

inline static constexpr unsigned int Class_1_BFE6568A7584B0E1_Class_1_D2D289DC635828FF_TypeDefinitionIndex = 60686;

class Class_1_BFE6568A7584B0E1_Class_1_D2D289DC635828FF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE6568A7584B0E1_CLASS_1_D2D289DC635828FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F4412B44745A2BBD(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BFE6568A7584B0E1_CLASS_1_D2D289DC635828FF_METHOD_1_F4412B44745A2BBD_OFFSET))(this, a1);
	}
};
