#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitBGAnimationSequence; }
namespace UnityEngine { class Animation; }

#define CLASS_1_FD527C2E5BE8E099_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xBA19C10)
#define CLASS_1_FD527C2E5BE8E099_METHOD_1_26B43D79F856B73A_OFFSET UNITYSDK_OFFSET(0xBA19D00)
#define CLASS_1_FD527C2E5BE8E099_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBA195A0)
#define CLASS_1_FD527C2E5BE8E099_METHOD_1_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0xBA19190)
#define CLASS_1_FD527C2E5BE8E099_METHOD_1_BCD8E4832DF2799B_OFFSET UNITYSDK_OFFSET(0xBA19860)
#define CLASS_1_FD527C2E5BE8E099_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA19BA0)
#define CLASS_1_FD527C2E5BE8E099__CTOR_OFFSET UNITYSDK_OFFSET(0xBA19130)

inline static constexpr unsigned int Class_1_FD527C2E5BE8E099_TypeDefinitionIndex = 58721;

class Class_1_FD527C2E5BE8E099 : public ::System::Object
{
public:
	::MoleMole::ActivitBGAnimationSequence* Field_1_0; // 0x10
	::UnityEngine::Animation* Field_1_1; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_3; // 0x20
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::MoleMole::ActivitBGAnimationSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivitBGAnimationSequence*))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_1_BCD8E4832DF2799B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_BCD8E4832DF2799B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_26B43D79F856B73A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD527C2E5BE8E099_METHOD_1_26B43D79F856B73A_OFFSET))(this);
	}
};
