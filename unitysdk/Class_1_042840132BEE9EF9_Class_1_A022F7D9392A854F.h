#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }

#define CLASS_1_042840132BEE9EF9_CLASS_1_A022F7D9392A854F_METHOD_1_FA2F8469D332CAAA_OFFSET UNITYSDK_OFFSET(0x9B298F0)
#define CLASS_1_042840132BEE9EF9_CLASS_1_A022F7D9392A854F__CTOR_OFFSET UNITYSDK_OFFSET(0x9B298E0)

inline static constexpr unsigned int Class_1_042840132BEE9EF9_Class_1_A022F7D9392A854F_TypeDefinitionIndex = 65725;

class Class_1_042840132BEE9EF9_Class_1_A022F7D9392A854F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_CLASS_1_A022F7D9392A854F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA2F8469D332CAAA(::MoleMole::Config::CommonDitherConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CommonDitherConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_CLASS_1_A022F7D9392A854F_METHOD_1_FA2F8469D332CAAA_OFFSET))(this, a1);
	}
};
