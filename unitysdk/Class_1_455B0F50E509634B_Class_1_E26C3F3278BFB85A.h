#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_455B0F50E509634B_CLASS_1_E26C3F3278BFB85A_METHOD_1_7E09DDF6B16C6627_OFFSET UNITYSDK_OFFSET(0xB58C790)
#define CLASS_1_455B0F50E509634B_CLASS_1_E26C3F3278BFB85A__CTOR_OFFSET UNITYSDK_OFFSET(0xB58C780)

inline static constexpr unsigned int Class_1_455B0F50E509634B_Class_1_E26C3F3278BFB85A_TypeDefinitionIndex = 45940;

class Class_1_455B0F50E509634B_Class_1_E26C3F3278BFB85A : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::AnimationCurveLibrary*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_CLASS_1_E26C3F3278BFB85A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E09DDF6B16C6627(::MoleMole::Config::AnimationCurveLibrary* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimationCurveLibrary*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_CLASS_1_E26C3F3278BFB85A_METHOD_1_7E09DDF6B16C6627_OFFSET))(this, a1);
	}
};
