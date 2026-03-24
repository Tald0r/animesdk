#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_74CBA0CF575D390A_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x995B850)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_5237057794E21C7D_OFFSET UNITYSDK_OFFSET(0x995B9B0)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0x995B910)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_C26A52FC112F9826_OFFSET UNITYSDK_OFFSET(0x995B860)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_D875411579E4701F_OFFSET UNITYSDK_OFFSET(0x995B9A0)
#define CLASS_1_74CBA0CF575D390A__CTOR_OFFSET UNITYSDK_OFFSET(0x995B840)

inline static constexpr unsigned int Class_1_74CBA0CF575D390A_TypeDefinitionIndex = 66880;

class Class_1_74CBA0CF575D390A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_C26A52FC112F9826(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_C26A52FC112F9826_OFFSET))(this, a1);
	}

	::System::String* Method_1_BCC281DC419BB5B6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_BCC281DC419BB5B6_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigHollowChessboard* Method_1_D875411579E4701F()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_D875411579E4701F_OFFSET))(this);
	}

	::System::Void Method_1_5237057794E21C7D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_5237057794E21C7D_OFFSET))(this, a1, a2);
	}
};
