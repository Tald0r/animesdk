#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_1170453A256D7905_OFFSET UNITYSDK_OFFSET(0xC2E9530)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_8652DE0774915A40_OFFSET UNITYSDK_OFFSET(0xC2E9510)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_F6C10DB4374245F7_OFFSET UNITYSDK_OFFSET(0xC2E9520)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E94F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginBase_TypeDefinitionIndex = 64745;

	class MonoAnimationPluginBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* Method_5_8652DE0774915A40()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_8652DE0774915A40_OFFSET))(this);
		}

		::System::Void Method_5_F6C10DB4374245F7(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_F6C10DB4374245F7_OFFSET))(this, a1);
		}

		::UnityEngine::Animation* Method_5_1170453A256D7905()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_1170453A256D7905_OFFSET))(this);
		}
	};
}
