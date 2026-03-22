#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_79AE422BA06F6D26_220_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x847C310)
#define CLASS_2_79AE422BA06F6D26_220_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x847C7F0)
#define CLASS_2_79AE422BA06F6D26_220_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x847C620)
#define CLASS_2_79AE422BA06F6D26_220__CTOR_OFFSET UNITYSDK_OFFSET(0x847C7E0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_220_TypeDefinitionIndex = 63771;

class Class_2_79AE422BA06F6D26_220 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_13; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48
	::UnityEngine::Transform* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_10; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_14; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x68
	::UnityEngine::GameObject* Field_2_6; // 0x70
	::UnityEngine::UI::Text* Field_2_2; // 0x78
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x80
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_220__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_220_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_220_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_220_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
