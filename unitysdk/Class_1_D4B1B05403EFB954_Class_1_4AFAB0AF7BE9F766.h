#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace System { class Action; }

#define CLASS_1_D4B1B05403EFB954_CLASS_1_4AFAB0AF7BE9F766_METHOD_1_CCFD077CD3B5C760_OFFSET UNITYSDK_OFFSET(0x6FBF3F0)
#define CLASS_1_D4B1B05403EFB954_CLASS_1_4AFAB0AF7BE9F766__CTOR_OFFSET UNITYSDK_OFFSET(0x6FBF3E0)

inline static constexpr unsigned int Class_1_D4B1B05403EFB954_Class_1_4AFAB0AF7BE9F766_TypeDefinitionIndex = 64038;

class Class_1_D4B1B05403EFB954_Class_1_4AFAB0AF7BE9F766 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_4AFAB0AF7BE9F766__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCFD077CD3B5C760(::MoleMole::CinemaSingleBeatMapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_4AFAB0AF7BE9F766_METHOD_1_CCFD077CD3B5C760_OFFSET))(this, a1);
	}
};
