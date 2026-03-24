#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace System { class Action; }

#define CLASS_1_7DE823F9B40DDB7F_CLASS_1_6A8BFD4E02374874_METHOD_1_CBDF82AAE413C84D_OFFSET UNITYSDK_OFFSET(0x62996B0)
#define CLASS_1_7DE823F9B40DDB7F_CLASS_1_6A8BFD4E02374874__CTOR_OFFSET UNITYSDK_OFFSET(0x62996A0)

inline static constexpr unsigned int Class_1_7DE823F9B40DDB7F_Class_1_6A8BFD4E02374874_TypeDefinitionIndex = 70064;

class Class_1_7DE823F9B40DDB7F_Class_1_6A8BFD4E02374874 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_CLASS_1_6A8BFD4E02374874__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBDF82AAE413C84D(::MoleMole::ConfigTimelineCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_CLASS_1_6A8BFD4E02374874_METHOD_1_CBDF82AAE413C84D_OFFSET))(this, a1);
	}
};
