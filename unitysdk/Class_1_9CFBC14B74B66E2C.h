#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace System { class String; }

#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_1F1EEF8961A54F56_OFFSET UNITYSDK_OFFSET(0xA017F70)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA017D00)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA017EE0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xA0180D0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_71126EBEAAAFC673_OFFSET UNITYSDK_OFFSET(0xA017D70)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xA017DE0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA018060)
#define CLASS_1_9CFBC14B74B66E2C__CTOR_OFFSET UNITYSDK_OFFSET(0xA017CF0)

inline static constexpr unsigned int Class_1_9CFBC14B74B66E2C_TypeDefinitionIndex = 55675;

class Class_1_9CFBC14B74B66E2C : public ::System::Object
{
public:
	::MoleMole::UIAvatarAnimator* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_2; // 0x24
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::Boolean Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_71126EBEAAAFC673(::MoleMole::UIAvatarAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_71126EBEAAAFC673_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F1EEF8961A54F56(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_1F1EEF8961A54F56_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}
};
