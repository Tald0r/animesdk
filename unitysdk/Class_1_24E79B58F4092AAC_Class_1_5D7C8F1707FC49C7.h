#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace System { class Action; }

#define CLASS_1_24E79B58F4092AAC_CLASS_1_5D7C8F1707FC49C7_METHOD_1_FFF2FD39182A8CA0_OFFSET UNITYSDK_OFFSET(0x7FE1E50)
#define CLASS_1_24E79B58F4092AAC_CLASS_1_5D7C8F1707FC49C7__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE1E40)

inline static constexpr unsigned int Class_1_24E79B58F4092AAC_Class_1_5D7C8F1707FC49C7_TypeDefinitionIndex = 61508;

class Class_1_24E79B58F4092AAC_Class_1_5D7C8F1707FC49C7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_CLASS_1_5D7C8F1707FC49C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FFF2FD39182A8CA0(::MoleMole::ActivityRhythmClickBeatmapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_24E79B58F4092AAC_CLASS_1_5D7C8F1707FC49C7_METHOD_1_FFF2FD39182A8CA0_OFFSET))(this, a1);
	}
};
