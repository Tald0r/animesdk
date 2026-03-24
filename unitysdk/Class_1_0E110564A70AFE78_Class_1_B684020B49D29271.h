#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271_METHOD_1_536142A50AFE6B73_OFFSET UNITYSDK_OFFSET(0xA5A7AC0)
#define CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0xA5A7BB0)
#define CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A7AB0)

inline static constexpr unsigned int Class_1_0E110564A70AFE78_Class_1_B684020B49D29271_TypeDefinitionIndex = 45098;

class Class_1_0E110564A70AFE78_Class_1_B684020B49D29271 : public ::System::Object
{
public:
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_536142A50AFE6B73(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271_METHOD_1_536142A50AFE6B73_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_B684020B49D29271_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
