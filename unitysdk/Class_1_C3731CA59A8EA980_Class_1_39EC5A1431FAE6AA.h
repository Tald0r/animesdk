#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class Action; }

#define CLASS_1_C3731CA59A8EA980_CLASS_1_39EC5A1431FAE6AA_METHOD_1_7988D33AE24BE8B4_OFFSET UNITYSDK_OFFSET(0x7959550)
#define CLASS_1_C3731CA59A8EA980_CLASS_1_39EC5A1431FAE6AA__CTOR_OFFSET UNITYSDK_OFFSET(0x7959540)

inline static constexpr unsigned int Class_1_C3731CA59A8EA980_Class_1_39EC5A1431FAE6AA_TypeDefinitionIndex = 61751;

class Class_1_C3731CA59A8EA980_Class_1_39EC5A1431FAE6AA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_CLASS_1_39EC5A1431FAE6AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7988D33AE24BE8B4(::MoleMole::SkinMapAnimationClipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkinMapAnimationClipData*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_CLASS_1_39EC5A1431FAE6AA_METHOD_1_7988D33AE24BE8B4_OFFSET))(this, a1);
	}
};
