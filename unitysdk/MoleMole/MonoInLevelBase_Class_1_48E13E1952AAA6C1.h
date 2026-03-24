#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoInLevelBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_MONOINLEVELBASE_CLASS_1_48E13E1952AAA6C1_METHOD_1_86642315AB1FEF32_OFFSET UNITYSDK_OFFSET(0x7A924D0)
#define MOLEMOLE_MONOINLEVELBASE_CLASS_1_48E13E1952AAA6C1__CTOR_OFFSET UNITYSDK_OFFSET(0x7A924C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBase_Class_1_48E13E1952AAA6C1_TypeDefinitionIndex = 42717;

	class MonoInLevelBase_Class_1_48E13E1952AAA6C1 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Sprite*>* Field_1_0; // 0x10
		::MoleMole::MonoInLevelBase* Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_CLASS_1_48E13E1952AAA6C1__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_86642315AB1FEF32(::UnityEngine::Sprite* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_CLASS_1_48E13E1952AAA6C1_METHOD_1_86642315AB1FEF32_OFFSET))(this, a1, a2);
		}
	};
}
